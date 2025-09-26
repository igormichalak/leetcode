CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g
LDFLAGS =

EXECUTABLE = prog
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: run
run: $(EXECUTABLE)
	./$(EXECUTABLE)
