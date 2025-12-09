CFLAGS = -Wall -O2 -Iinclude -o
SRC = src/main.cpp
OUT = manager

clean:
	rm -f $(OUT) 

build:
	g++ $(SRC) $(CFLAGS) $(OUT) 
