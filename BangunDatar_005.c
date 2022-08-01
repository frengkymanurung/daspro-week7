// Nama    : Frengky Manurung
// NIM     : 13321005
// Kelas   : D3 Teknologi Komputer


#include <stdio.h>
#include <string.h>

int Luas_Persegi(int s);
int Keliling_Persegi(int s);
int Luas_Persegi_Panjang(int p, int l);
int Keliling_Persegi_Panjang(int p, int l);
float Luas_Lingkaran(float phi, float r);
float Keliling_Lingkaran(float phi, float r);
int Luas_Jajar_Genjang(int a, int t);
int Keliling_JajarGenjang(int a, int s);
float Luas_Trapesium(int a, int b, int t);
int Keliling_Trapesium(int a,int b,int c, int d,int t);    
float Luas_LayangLayang(int d1, int d2);
int Keliling_LayangLayang(int a, int b);

int main()
{
    char M, E;
    int pil;
menu:
    printf("=== Menghitung Keliling dan Luas Bangun Datar ===");
    printf("\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Jajar Genjang\n");
    printf("5. Trapesium\n");
    printf("6. Layang-Layang\n");
    printf("Masukkan Pilihan anda : ");
    scanf("%d", &pil);

    if (pil == 1)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Persegi ===\n");
        int s, hasil;
        printf("Masukkan Nilai Sisi : ");
        scanf("%d", &s);
        printf("Luas Persegi = %d\n", Luas_Persegi(s));
        printf("Keliling Persegi = %d\n\n", Keliling_Persegi(s));
    }
    if (pil == 2)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Persegi Panjang ===\n");
        int p, l, hasil;
        printf("Masukkan Nilai panjang : ");
        scanf("%d", &p);
        printf("\nMasukkan Nilai Lebar : ");
        scanf("%d", &l);
        printf("Luas Persegi = %d\n", Luas_Persegi_Panjang(p,l));
        printf("Keliling Persegi = %d\n\n", Keliling_Persegi_Panjang(p,l));
    }
    if (pil == 3)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Lingkaran ===\n");
        float phi, r, hasil;
        printf("Masukkan Jari-jari : ");
        scanf("%f", &r);
        phi = 3.14;
        printf("Luas Lingkaran = %.2f\n", Luas_Lingkaran(phi, r));
        printf("Keliling Lingkaran = %.2f\n\n",  Keliling_Lingkaran(phi,r));
    }
    if (pil == 4)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Jajar Genjang ===\n");
        int a, t, s;
        printf("Masukkan Nilai Alas : ");
        scanf("%d", &a);
        printf("\nMasukkan Nilai Tinggi : ");
        scanf("%d", &t);
        printf("\nMasukkan Nilai Sisi Miring : ");
        scanf("%d", &s);
        printf("Luas Jajar Genjang = %d\n", Luas_Jajar_Genjang(a,t));
        printf("Keliling Luas Jajar Genjang = %d\n\n", Keliling_JajarGenjang(a,s));
    }
    if (pil == 5)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Trapesium ===\n");
        int a, b,c,d,t;
        printf("Masukkan Nilai Atas : ");
        scanf("%d", &a);
        printf("\nMasukkan Nilai Bawah : ");
        scanf("%d", &b);
        printf("\nMasukkan Nilai Tinggi : ");
        scanf("%d", &c);
        printf("\nMasukkan Nilai Sisi Kanan : ");
        scanf("%d", &d);
        printf("\nMasukkan Nilai Sisi Kiri : ");
        scanf("%d", &t);
        printf("Luas Trapesium = %.2f\n", Luas_Trapesium(a,b,t));
        printf("Keliling Trapesium = %d\n\n", Keliling_Trapesium(a,b,c,d,t));
    }
    if (pil == 6)
    {
        system("cls");
        printf("=== Menghitung Luas dan Keliling Layang-Layang ===\n");
        float d1, d2;
        int a, b;
        printf("Masukkan Nilai Diagonal 1 : ");
        scanf("%f", &d1);
        printf("\nMasukkan Nilai Diagonal 2 : ");
        scanf("%f", &d2);
        printf("\nMasukkan Nilai Sisi Miring Atas : ");
        scanf("%d", &a);
        printf("\nMasukkan Nilai Sisi Miring Bawah : ");
        scanf("%d", &b);
        printf("Luas Layang-Layang = %.2f\n", Luas_LayangLayang(d1,d2));
        printf("Keliling Layang-Layang = %d\n\n", Keliling_LayangLayang(a,b));
    }

    do
    {
        printf("Kembali ke Menu? (Enter M/m)\n");
        printf("Keluar? (Enter E/e)\n");
        scanf("%s", &M);
        if (M == 'M' || M == 'm')
        {
            system("cls");
            goto menu;
        }
        else
        {
            exit(0);
        }
    } while (M != 'M' || M != 'm' || M != 'E' || M != 'e');

    return 0;
}


//function(fungsi)

int Luas_Persegi(int s)
{
    return (s * s);
}
int Keliling_Persegi(int s)
{
    return (4 * s);
}
int Keliling_Persegi_Panjang(int p, int l)
{
    return (2 * (p + l));
}
int Luas_Persegi_Panjang(int p, int l)
{
    return (p * l);
}
float Luas_Lingkaran(float phi, float r)
{
    return (phi * r * r);
}
float Keliling_Lingkaran(float phi, float r)
{
    return (2 * phi * r);
}
int Luas_Jajar_Genjang(int a, int t)
{
    return (a * t);
}
int Keliling_JajarGenjang(int a, int s)
{
    return ( 2*(a*s));
}
float Luas_Trapesium(int a, int b, int t)
{
    return ((a + b) * t /2);
}
int Keliling_Trapesium(int a, int b, int d,int c,int t)
{
    return (a+b+d+t);
}
float Luas_LayangLayang(int d1, int d2)
{
    return (d1 * d2 * 0.5);
}
int Keliling_LayangLayang(int a, int b)
{
    return (2 *a+b);
}