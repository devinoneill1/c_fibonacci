#include <stdio.h>

int main(){
    /* variables*/
    int a, b, c;

    /* Var init*/
    a = 0;
    b = 1;
    c = 0;

    do
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    while (a<100);

    return 0;
}