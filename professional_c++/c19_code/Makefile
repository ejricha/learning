# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_WideStrings/01_WideStrings.bin 02_CharTypes/02_CharTypes.bin 03_Imbue/03_Imbue.bin 04_Locales/04_Locales.bin 05_Facets/05_Facets.bin 06_RegularExpressions/06_RegularExpressions.bin

.PHONY: clean
clean:
	$(RM)  01_WideStrings/01_WideStrings.bin 02_CharTypes/02_CharTypes.bin 03_Imbue/03_Imbue.bin 04_Locales/04_Locales.bin 05_Facets/05_Facets.bin 06_RegularExpressions/06_RegularExpressions.bin

# Actually build the binaries

01_WideStrings/01_WideStrings.bin : 01_WideStrings/wcout.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_CharTypes/02_CharTypes.bin : 02_CharTypes/CharTypes.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Imbue/03_Imbue.bin : 03_Imbue/Imbue.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_Locales/04_Locales.bin : 04_Locales/Locales.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_Facets/05_Facets.bin : 05_Facets/use_facet.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_RegularExpressions/06_RegularExpressions.bin : 06_RegularExpressions/01_regex_match_dates_1.cpp 06_RegularExpressions/02_regex_match_dates_2.cpp 06_RegularExpressions/03_regex_search_comments.cpp 06_RegularExpressions/04_regex_iterator.cpp 06_RegularExpressions/05_regex_token_iterator_1.cpp 06_RegularExpressions/06_regex_token_iterator_2.cpp 06_RegularExpressions/07_regex_token_iterator_field_splitting.cpp 06_RegularExpressions/08_regex_replace_1.cpp 06_RegularExpressions/08_regex_replace_2.cpp 06_RegularExpressions/10_regex_replace_3.cpp
	$(CXX) $(CFLAGS) -o $@ $^

