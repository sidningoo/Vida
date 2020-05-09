FLAGS = -pedantic-errors -std=c++11

new.o : new.cpp 
	g++ $(FLAGS) -c $< 

new : new.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f *.o
	ls | grep -v "\." | grep -v Makefile | xargs rm
	

.PHONY: clean
