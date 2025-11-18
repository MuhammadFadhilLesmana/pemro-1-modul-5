#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    return nilai1 - nilai2;
}

int mutlak(int angka){
    if (angka < 0)
        return -angka;
    else
        return angka;
}

int main() 
    {
    int a, b, c, d;
    int Hasil;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    Hasil = mutlak(hitung(a,c)) + mutlak(hitung(b,d));
    printf("%d",mutlak(Hasil));

    return 0;
}
