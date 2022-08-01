// Nama    : Frengky Manurung
// NIM     : 13321005
// Kelas   : D3 Teknologi Komputer

#include <stdio.h>

int factorial(int _x);
int main(void) 
{
    int z = 4;
    int result = factorial(z);
    printf("%d! is %d\n", z, result);
    return 0;
}

int factorial(int _z)
{
    if(_z == 1) return (1);
    return(_z*factorial(_z-1));
}