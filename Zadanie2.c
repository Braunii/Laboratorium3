// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Zdefiniowanie PI
#define PI 3.14
// Zdefiniowanie funkcji potrzebnych do programu
#define POLE_KOLA(r)((PI) * ((r) * (r)))
#define MAX(a,b)((a > b) ? (a):(b))

// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennych
    float promien = 5.0;
    float pole = POLE_KOLA(promien);
    float b = 100.0;
    // Wy�wietlenie pola ko�a
    printf("Pole kola wynosi %.2f\n", pole);
    // Obliczenie wi�kszej liczby
    float wieksza_liczba = MAX(pole, b);
    // Wy�wietlenie wi�kszej liczby
    printf("Liczba %.2f jest wieksza\n", wieksza_liczba);
    // Zatrzymanie konsoli
    system("pause");
    // Zwr�cenie 0
    return 0;
}
