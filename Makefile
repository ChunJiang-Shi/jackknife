#Makefile

CXX = g++
CXXFLAGS = -c
LDFLAGS = 

all: test_run
test_run: main.o jackknife.o
		$(CXX) $(LDFLAGS) $^ -o $@

main.o: main.cpp
		$(CXX) $(CXXFLAGS) $<
jackknife.o: jackknife.cpp
		$(CXX) $(CXXFLAGS) $<

clean:
		rm -rf *.o test_run
