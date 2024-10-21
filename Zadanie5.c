// Dołączenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Zdefiniowanie makrodefinicji DEBUG
#define DEBUG

// Funkcja główna
int main()
{
    // Zdefiniowanie zmiennych
    float a;
    float b;
    float pole;

    // Pobranie danych od użytkownika
    printf("Podaj liczbe a: ");
    scanf("%f", &a);

    printf("Podaj liczbe b: ");
    scanf("%f", &b);

    // Wyświetlenie informacji do debugowania gdy makrodefinicja DEBUG istnieje
    #ifdef DEBUG
        printf("DEBUG: zmienna a: %.2f, zmienna b: %.2f\n", a, b);
        printf("Pole prostokata = a * b\n");
    #endif
    // Obliczenie pola
    pole = a * b;
    // Wyświetlenie pola
    printf("Pole prostokata: %.2f\n", pole);
    // Zatrzymanie konsoli
    system("pause");
    // Zwrócenie 0
    return 0;
}
