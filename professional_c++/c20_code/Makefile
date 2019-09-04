# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_Ratio/01_Ratio.bin 02_Chrono/02_Chrono.bin 03_Random/03_Random.bin 04_optional/04_optional.bin 05_variant/05_variant.bin 06_any/06_any.bin 07_Tuple/07_Tuple.bin 08_Filesystem/08_Filesystem.bin

.PHONY: clean
clean:
	$(RM)  01_Ratio/01_Ratio.bin 02_Chrono/02_Chrono.bin 03_Random/03_Random.bin 04_optional/04_optional.bin 05_variant/05_variant.bin 06_any/06_any.bin 07_Tuple/07_Tuple.bin 08_Filesystem/08_Filesystem.bin

# Actually build the binaries

01_Ratio/01_Ratio.bin : 01_Ratio/ratios.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Chrono/02_Chrono.bin : 02_Chrono/01_durations.cpp 02_Chrono/02_now_put_time.cpp 02_Chrono/03_now.cpp 02_Chrono/04_timing.cpp 02_Chrono/05_time_point.cpp 02_Chrono/06_time_point_conversions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Random/03_Random.bin : 03_Random/01_old.cpp 03_Random/02_random_device.cpp 03_Random/03_basic.cpp 03_Random/04_generate.cpp 03_Random/05_generate_function.cpp 03_Random/06_uniform_int_distribution.cpp 03_Random/07_normal_distribution.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_optional/04_optional.bin : 04_optional/optional.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_variant/05_variant.bin : 05_variant/variant.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_any/06_any.bin : 06_any/any.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_Tuple/07_Tuple.bin : 07_Tuple/01_pair.cpp 07_Tuple/02_tuple.cpp 07_Tuple/03_structured_bindings.cpp 07_Tuple/04_tuple_tie.cpp 07_Tuple/05_tuple_cat.cpp 07_Tuple/06_tuple_comparison.cpp 07_Tuple/07_operator_less_than.cpp 07_Tuple/08_make_from_tuple.cpp 07_Tuple/09_apply.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_Filesystem/08_Filesystem.bin : 08_Filesystem/01_paths.cpp 08_Filesystem/02_path_append.cpp 08_Filesystem/03_path_concat.cpp 08_Filesystem/04_path_component_iterator.cpp 08_Filesystem/05_directory_entry.cpp 08_Filesystem/06_space_info.cpp 08_Filesystem/07_recursive_directory_iterator.cpp 08_Filesystem/08_directory_iterator.cpp
	$(CXX) $(CFLAGS) -o $@ $^

