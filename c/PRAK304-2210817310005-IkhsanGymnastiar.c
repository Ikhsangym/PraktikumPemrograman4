#include <stdio.h>
int main(){
    int bil;
    printf("Masukan angka 0-99 :");scanf("%d", &bil);
    if(bil == 0){
        printf("Nol");
    } else if(bil >= 1 && bil <= 9){
        printf("Satuan");
    } else if(bil >= 10 && bil <= 19){
        printf("Belasan");
    } else if(bil >= 20 && bil <= 99){
        printf("Puluhan");
    } else if(bil >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}