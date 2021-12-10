CFLAGS=-Wall -Isrc/ `pkg-config sfml-all --cflags`
LDFLAGS=`pkg-config sfml-all --libs`

bin/App: src/main.o src/Client.o src/Game.o src/Button.o
	g++ src/main.o src/Game.o src/Client.o src/Button.o $(LDFLAGS) -o bin/App

src/main.o: src/main.cpp
	g++ -c src/main.cpp $(CFLAGS) -o src/main.o

src/Client.o: src/Client.cpp
	g++ -c src/Client.cpp $(CFLAGS) -o src/Client.o

src/Game.o: src/Game.cpp
	g++ -c src/Game.cpp $(CFLAGS) -o src/Game.o

src/Button.o: src/Button.cpp
	g++ -c src/Button.cpp $(CFLAGS) -o src/Button.o
