// thread_and_mutex_test.cpp

#include <unistd.h>
#include <iostream>
#include <mutex>
#include <random>
#include <string>
#include <thread>

using namespace std;

// Class with a mutex around critical code
class Shared {
 public:
  Shared(const string& n) : name(n), distribution(300000, 700000) {};
  ~Shared() {};

  // Display information about the object
  void print(int y=-1) const {
    cout << name << " : " << thread_num << " [" << y << "] (updated " << count << " times)\n";
  }

  // Signify that this thread is working
  void do_work(const int n) {
    thread_local int z = 1111 * n;
    // Ensure that the mutex is locked with a lock_guard
    lock_guard<mutex> lock(m);

    //m.lock();  // Explicit locking
    thread_num = n;
    ++count;
    go_sleep(); // Simulate some work being done
    this->print(z);
    //m.unlock();  // Explicit unlocking
  }

  void go_sleep() {
    // Sleep for ~500ms
    usleep(distribution(generator));
  }

 private:
  string name;
  mutex m;
  int thread_num;
  size_t count;
  default_random_engine generator;
  uniform_int_distribution<int> distribution;
};

// Run this loop in a thread
void loop(Shared* s, int n) {
  thread_local int x = 11 * n;
  cout << "Starting thread " << n << " (" << x << ")\n";
  for (int i = 0; i < 3; ++i) {
    s->do_work(n);
    s->go_sleep(); // Sleep some more after work is done
  }
}

// Main function
int main() {
  cout << "Start of main()\n";
  
  // Create a single object of type Shared
  unique_ptr<Shared> s = make_unique<Shared>("S");
  
  // Run 3 times in series from the main thread
  s->print();
  loop(s.get(), 1);
  loop(s.get(), 2);
  loop(s.get(), 3);
  
  // Now run 3 times in parallel
  thread t1(loop, s.get(), 4);
  s->go_sleep();
  thread t2(loop, s.get(), 5);
  s->go_sleep();
  thread t3(loop, s.get(), 6);
  
  // Run one more time from the main thread
  //loop(s.get(), 7);

  // Wait for all the threads to finish
  cout << "Joining threads\n";
  t1.join();
  cout << "Joined thread 1!\n";
  t2.join();
  cout << "Joined thread 2!\n";
  t3.join();
  cout << "Joined thread 3!\n";

  cout << "All done with main()!\n";
}
