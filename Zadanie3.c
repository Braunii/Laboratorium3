// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Zdefiniowanie funkcji
#define KWADRAT(a)((a) * (a))
// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennych
    int a = 5;
    float b = 42.052;
    // Obliczenie kwadrat�w liczb
    int wynik1 = KWADRAT(a);
    float wynik2 = KWADRAT(b);
    // Wy�wietlenie kwadrat�w liczb
    printf("Kwadrat pierwszej liczby: %d\n", wynik1);
    printf("Kwadrat drugiej liczby: %.2f\n", wynik2);
    // Zatrzymanie konsoli
    system("pause");
    // Zwr�cenie 0
    return 0;
}
