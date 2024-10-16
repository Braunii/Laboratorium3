// Do³¹czenie potrzebnych bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych a i b
    int a = 15;
    int b = 10;

    /* Instrukcja warunkowa - porównuje liczby a i b.*/
    if(a > b){
        printf("Liczba a jest wieksza od liczby b.\n");
    }
    else if(a < b){
        printf("Liczba a jest mniejsza od liczby b.\n");
    }
    // Jeœli a nie jest ani wiêksze ani mniejsze od b to to oznacza ¿e liczby s¹ równe
    else{
        printf("Liczby a i b sa takie same.\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}
