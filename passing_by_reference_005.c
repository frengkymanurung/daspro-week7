// Nama    : Frengky Manurung
// NIM     : 13321005
// Kelas   : D3 Teknologi Komputer


#include <stdio.h>

void passByValue(int x);
void passingByReference(int *x);

int main(int argc, char **argv)
{
    int x = 1;
    passByValue(x);
    printf("x is %d\n", x);
    passingByReference(&x);
    printf("x is %d\n", x);
}

void passByValue(int x)
{
    x += x;
    printf("val: \n x is %d\n", x);
}

void passByReference(int *x)
{
    *x += *x;
    printf("\nRef : \nx is %d\n", *x);
}
