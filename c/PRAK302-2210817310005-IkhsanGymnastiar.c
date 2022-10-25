#include <stdio.h>
int main(){
int bil;
    printf("Masukkan Nilai :");
    scanf("%d", &bil);
    if (bil >=80 ){
        printf ("A");
    }if (bil <=79 && bil >=70 ){
        printf ("B");
    }if (bil <=69 && bil >=60 ){
        printf ("C");
    }if (bil <=59 && bil >=50 ){
        printf ("D");
    }else if (bil <50 ){
        printf ("E");
    }
    return 0;
}