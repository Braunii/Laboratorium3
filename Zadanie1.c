// Do��czenie potrzebnych bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennych a i b
    int a = 15;
    int b = 10;

    /* Instrukcja warunkowa - por�wnuje liczby a i b.*/
    if(a > b){
        printf("Liczba a jest wieksza od liczby b.\n");
    }
    else if(a < b){
        printf("Liczba a jest mniejsza od liczby b.\n");
    }
    // Je�li a nie jest ani wi�ksze ani mniejsze od b to to oznacza �e liczby s� r�wne
    else{
        printf("Liczby a i b sa takie same.\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwr�cenie 0
    return 0;
}
