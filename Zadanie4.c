// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennych
    int a = 5;
    int b = 10;
    int c = 15;
    // Wy�wietlenie najwi�kszej zmiennej za pomoc� warunk�w
    if (a > b && a > c){
        printf("Liczba a jest najwieksza\n");
    }
    else if (b > a && b > c){
        printf("Liczba b jest najwieksza\n");
    }
    else if (c > a && c > b){
        printf("Liczba c jest najwieksza\n");
    }
    else if (a == b && a == c){
        printf("Liczby sa rowne\n");
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwr�cenie 0
    return 0;
}
