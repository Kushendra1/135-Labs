CXXFLAGS = -std=c++11

main: main.o profile.o network.o
	g++ $(CXXFLAGS) -o main main.o profile.o network.o

test: test.o profile.o network.o
	g++ $(CXXFLAGS) -o test test.o profile.o network.o

test.o: test.cpp
	g++ $(CXXFLAGS) -c test.cpp

main.o: main.cpp profile.h network.h
	g++ $(CXXFLAGS) -c main.cpp

profile.o: profile.cpp profile.h
	g++ $(CXXFLAGS) -c profile.cpp

network.o: network.cpp network.h
	g++ $(CXXFLAGS) -c network.cpp

clean:
	rm -rf test main *.o
