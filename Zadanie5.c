// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Zdefiniowanie makrodefinicji DEBUG
#define DEBUG

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych
    float a;
    float b;
    float pole;

    // Pobranie danych od u¿ytkownika
    printf("Podaj liczbe a: ");
    scanf("%f", &a);

    printf("Podaj liczbe b: ");
    scanf("%f", &b);

    // Wyœwietlenie informacji do debugowania gdy makrodefinicja DEBUG istnieje
    #ifdef DEBUG:
        printf("DEBUG: zmienna a: %.2f, zmienna b: %.2f\n", a, b);
        printf("Pole prostokata = a * b\n");
    #endif
    // Obliczenie pola
    pole = a * b;
    // Wyœwietlenie pola
    printf("Pole prostokata: %.2f\n", pole);
    // Zatrzymanie konsoli
    system("pause");
    // Zwrócenie 0
    return 0;
}
