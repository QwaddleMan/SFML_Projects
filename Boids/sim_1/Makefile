CFLAGS=-Wall -Isrc/ `pkg-config sfml-all --cflags`
LDFLAGS=`pkg-config sfml-all --libs`

bin/App: src/main.o src/Vehical.o src/Animator.o
	g++ src/main.o src/Vehical.o src/Animator.o $(LDFLAGS) -o bin/App 

src/main.o: src/main.cpp
	g++ -c src/main.cpp $(CFLAGS) -o src/main.o

src/Vehical.o: src/Vehical.cpp
	g++ -c src/Vehical.cpp $(CFLAGS) -o src/Vehical.o

src/Animator.o: src/Animator.cpp
	g++ -c src/Animator.cpp $(CFLAGS) -o src/Animator.o
