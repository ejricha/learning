# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: MethodHiding.bin 01_WeatherPrediction/01_WeatherPrediction.bin 02_ConstructorChain/02_ConstructorChain.bin 03_Book/03_Book.bin 04_PolymorphicSpreadsheet/04_PolymorphicSpreadsheet.bin 05_DogBird/05_01_DogBird.bin 05_DogBird/05_02_Diamond.bin 06_Cherry/06_Cherry.bin 07_MilesEstimator/07_MilesEstimator.bin

.PHONY: clean
clean:
	$(RM) MethodHiding.bin 01_WeatherPrediction/01_WeatherPrediction.bin 02_ConstructorChain/02_ConstructorChain.bin 03_Book/03_Book.bin 04_PolymorphicSpreadsheet/04_PolymorphicSpreadsheet.bin 05_DogBird/05_01_DogBird.bin 05_DogBird/05_02_Diamond.bin 06_Cherry/06_Cherry.bin 07_MilesEstimator/07_MilesEstimator.bin

# Actually build the binaries

MethodHiding.bin : MethodHiding.cpp
	$(CXX) $(CFLAGS) -o $@ $^

01_WeatherPrediction/01_WeatherPrediction.bin : 01_WeatherPrediction/MyWeatherPrediction.cpp 01_WeatherPrediction/WeatherPrediction.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_ConstructorChain/02_ConstructorChain.bin : 02_ConstructorChain/ConstructorChain.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Book/03_Book.bin : 03_Book/Book.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_PolymorphicSpreadsheet/04_PolymorphicSpreadsheet.bin : 04_PolymorphicSpreadsheet/DoubleSpreadsheetCell.cpp 04_PolymorphicSpreadsheet/SpreadsheetTest.cpp 04_PolymorphicSpreadsheet/StringSpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_DogBird/05_01_DogBird.bin : 05_DogBird/01_DogBird.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_DogBird/05_02_Diamond.bin : 05_DogBird/02_Diamond.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Cherry/06_Cherry.bin : 06_Cherry/BingCherry.cpp 06_Cherry/BingCherryTree.cpp 06_Cherry/Cherry.cpp 06_Cherry/CherryTree.cpp 06_Cherry/TestCherry.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_MilesEstimator/07_MilesEstimator.bin : 07_MilesEstimator/EfficientCarMilesEstimator.cpp 07_MilesEstimator/MilesEstimator.cpp 07_MilesEstimator/TestMilesEstimator.cpp
	$(CXX) $(CFLAGS) -o $@ $^

