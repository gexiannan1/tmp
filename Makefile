CPPFLAGS = -std=c++11 -Wall -g -gstabs
.PHONY : gexn clean
gexn: main.o Observer.o
	g++ $(CPPFLAGS) -o gexn main.o  Observer.o

main.o : main.cpp  Observer.h
	g++ $(CPPFLAGS) -c  main.cpp

Observer.o:Observer.cpp Observer.h
	g++ $(CPPFLAGS) -c Observer.cpp

clean:
	rm -rf test
	rm -rf test.o
