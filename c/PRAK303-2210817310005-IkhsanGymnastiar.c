#include <stdio.h>
int main(){
    int bil;
    printf("Masukan bilangan :");scanf("%d", &bil);
    if(bil == 0){
        printf("nol");
    } else if(bil > 0){
        printf("positif");
    } else{
        printf("negatif");
    }
    return 0;
}