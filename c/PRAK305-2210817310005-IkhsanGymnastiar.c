#include <stdio.h>
int main(){
    int bil, hari, jam, menit, detik, hasilsisa1, hasilsisa2;
    printf("Masukan detik :");scanf("%d", &bil);
    hari = bil / 86400;
    hasilsisa1 = bil % 86400;
    jam =  hasilsisa1 / 3600;
    hasilsisa2 = bil % 3600;
    menit =  hasilsisa2 / 60;
    detik = bil % 60;
    if(bil >=0 && bil < 60 ){
            printf("00:00:%d", detik);
    } else if(bil >= 60 && bil <= 3599){
            printf("00:%d:%d", menit, detik);
    } else if(bil >= 3600 && bil <= 86399){
          printf("%d:%d:%d", jam, menit, detik);
    } else{
        printf("%d hari %d:%d:%d", hari, jam, menit, detik);
    }
    return 0;
}
