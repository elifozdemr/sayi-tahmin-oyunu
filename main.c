#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayi,i,tahmin,hak=10;
    srand(time(NULL));
    sayi=rand()%100+1;
    printf("1 ile 100 arasinda bir sayi giriniz\n");
    printf("Toplam 10 hak vardir\n");
    for (i=1;i<=hak;i++) {
        printf("%d tahmininizi yapiniz: ",i);
        scanf("%d",&tahmin);
        if (tahmin>sayi) {
            printf("Daha kucuk bir sayi giriniz\n");
        }
        else if (tahmin<sayi) {
            printf("Daha buyuk bir sayi giriniz\n");
        }
        else{
            printf("Tebrikler %d'inci tahminde dogru bulundunuz\n",i);
        break;
        }
        if (i==hak) {
            printf("Uzgunum tahmin hakkiniz bitti tutulan sayi %d'idi",sayi);
        }
    }
    return 0;
}