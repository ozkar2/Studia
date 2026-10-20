#include <stdio.h>

int main(void) {
    float purchaseNet;
    float markupPercent;

    printf("Podaj cenę zakupu w netto ");
    scanf("%f", &purchaseNet);
    printf("Podaj narzut w procentach ");
    scanf("%f",&markupPercent);

    if (markupPercent < 0) {
        printf("Narzut musi być większy od 0");
        return 0;
    }

     float sellingPrice = purchaseNet * (1 + markupPercent/100);
    printf("Cena brutto to %.2f", sellingPrice);

}