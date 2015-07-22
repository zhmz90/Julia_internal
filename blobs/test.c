#include <julia.h>

int main(int argc, char *argv[]){

    jl_init(NULL);
    jl_eval_string("println(\"hello!\")");

    jl_atexit_hook(0);

    return 0;
}

