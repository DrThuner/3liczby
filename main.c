#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    printf("Pierwsza liczba:");
    scanf(" %d", &firstNumber);

    printf("Druga liczba:");
    scanf(" %d", &secondNumber);

    printf("Trzecia liczba:");
    scanf(" %d", &thirdNumber);

    // Wskazuje liczbe mniejszą i największa

    if ((firstNumber > secondNumber) && (firstNumber > thirdNumber) && (secondNumber > thirdNumber)) {

        printf("\nNajmniejsza liczba: %d", firstNumber);
        printf("\nLiczba posrodku: %d", secondNumber);
        printf("\nNajwieksza liczba: %d", thirdNumber);

    } else if ((secondNumber > firstNumber) && (secondNumber > thirdNumber) && (firstNumber > thirdNumber)) {

        printf("\nNajmniejsza liczba: %d", secondNumber);
        printf("\nLiczba posrodku: %d", firstNumber);
        printf("\nNajwieksza liczba: %d", thirdNumber);

    } else if ((thirdNumber > secondNumber) && (thirdNumber > firstNumber) && (secondNumber > firstNumber)) {

        printf("\nNajmniejsza liczba: %d", thirdNumber);
        printf("\nLiczba posrodku: %d", secondNumber);
        printf("\nNajwieksza liczba: %d", firstNumber);

    } else if ((thirdNumber > secondNumber) && (thirdNumber > firstNumber) && (firstNumber > secondNumber)) {

        printf("\nNajmniejsza liczba: %d", thirdNumber);
        printf("\nLiczba posrodku: %d", firstNumber);
        printf("\nNajwieksza liczba: %d", secondNumber);

    }
    return 0;
}





