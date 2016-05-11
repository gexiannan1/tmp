CPPFLAGS = -std=c++11 -Wall -g -gstabs
.PHONY : gexn clean
gexn: any.o
	g++ $(CPPFLAGS) -o gexn any.o

any.o : any.cpp any.h
	g++ $(CPPFLAGS) -c  any.cpp


clean:
	rm -rf gexn
	rm -rf any.o
