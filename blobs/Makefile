JL_SHARE = $(shell julia -e 'print(joinpath(JULIA_HOME, Base.DATAROOTDIR, "julia"))' )
CFLAGS   += $(shell $(JL_SHARE)/julia-config.jl --cflags)
CXXFLAGS += $(shell $(JL_SHARE)/julia-config.jl --cflags)
LDFLAGS  += $(shell $(JL_SHARE)/julia-config.jl --ldflags)
LDLIBS   += $(shell $(JL_SHARE)/julia-config.jl --ldlibs)


JULIAHOME=$(abspath ..)
JULIA_DIR=/home/guo/julia



test: *.c *.h
	clang -o test -I$(JULIA_DIR)/usr/lib/julia -I$(JULIA_DIR)/src -I$(JULIA_DIR)/src/support -I$(JULIA_DIR)/usr/include -L$(JULIA_DIR)/usr/lib -ljulia test.c -Wall 



