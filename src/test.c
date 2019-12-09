#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *file = fopen("parser_example.lua", "r");
    printf("%p\n", file);
    return 0;
}
