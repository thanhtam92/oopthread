main: main.cpp ../../oopthread Makefile
	g++ -Wall -pedantic -std=c++98 -pthread -o main main.cpp -I ../..

tags: main.cpp ../../oopthread
	ctags --language-force=C++ main.cpp ../../oopthread

clean:
	rm -f main tags
