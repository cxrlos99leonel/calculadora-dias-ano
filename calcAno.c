#include <stdio.h>

void calcAno(int anos, int *meses, int *dias);

int main(){
    int anos, meses, dias;

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    calcAno(anos, &meses, &dias);
    
    printf("Anos: %d", anos);
    printf("\nMeses: %d", meses);
    printf("\nDias: %d", dias);
}

void calcAno(int anos, int *meses, int *dias){
    *meses = anos * 12;
    *dias = anos * 365;
}