GCC_ARGUMENTS = -Wall -O2 -Iinclude -o

clean:
	rm -f 'Task Manager' 

build:
	g++ main.cpp $(GCC_ARGUMENTS) 'Task Manager'
