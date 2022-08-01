// Nama    : Frengky Manurung
// NIM     : 13321005
// Kelas   : D3 Teknologi Komputer


#include <stdio.h>

int add(int _x, int _y);
double multiply(double _x, double _y);

int main(int argc, char **argv)
{
    int arg1, arg2;
    double arg3;

    arg1 = 3;
    arg2 = 7;
    arg3 = 4.50;

    printf("add(%d, %d) = %d\n", arg1, arg2, add(arg1, arg2));
    printf("multiply(%d, %.2f) = %.2f\n", arg1, arg3, multiply(arg1, arg3));

    return 0;
}

int add(int _x, int _y)
{
    return(_x + _y);
}

double multiply(double _x, double _y)
{
    return(_x * _y);
    
}
