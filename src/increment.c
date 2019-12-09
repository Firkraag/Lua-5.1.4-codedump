#include <stdio.h>
#include <iso646.h>



int foo(void);
int main(void) {
    printf("%d\n", foo());
}

int foo(void)
{
    int a = 10;

    return a++;
}
