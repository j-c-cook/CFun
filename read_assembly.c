#include <stdint.h>

// Purpose: Write a simple program and analyze the assembly output
// https://wolchok.org/posts/how-to-read-assembly-language/

// gcc -S read_assembly.c

// Create a struct with x and y members
struct Vec {
    int64_t x;
    int64_t y;
};

typedef struct Vec vec;

// Pass a struct of type Vec into the function as v, square each variable, and sum
int64_t normSquared(vec v) {
    return v.x * v.x + v.y * v.y;
}

int main() {


    return 0;
}
