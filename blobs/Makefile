JULIAHOME=$(abspath ..)
JULIA_DIR=/home/guo/julia
test: *.c *.h
	clang -o test -I$(JULIA_DIR)/usr/lib/julia -I$(JULIA_DIR)/src -I$(JULIA_DIR)/src/support -I$(JULIA_DIR)/usr/include -L$(JULIA_DIR)/usr/lib -ljulia test.c -Wall 



