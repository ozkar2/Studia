#include <stdio.h>

int main(void) {
    float amountPLN;
    float rate;

    printf("Wpisz swoj budzet w PLN\n");
    scanf("%f", &amountPLN);
    printf("Wpisz aktualny kurs\n");
    scanf("%f", &rate);
    if (amountPLN < 0) {
        printf("Budzet musi byc wiekszy od 0\n");
        return 0;
    }
    if (rate <= 0) {
        printf("Kurs musi byc wiekszy od 0");
        return 0;
    }
    float amountUSD = amountPLN / rate;
    printf("Twoj budzet w USD to %.2f ", amountUSD);
}