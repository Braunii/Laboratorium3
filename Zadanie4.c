// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych
    int a = 5;
    int b = 10;
    int c = 15;
    // Wyœwietlenie najwiêkszej zmiennej za pomoc¹ warunków
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
    // Zwrócenie 0
    return 0;
}
