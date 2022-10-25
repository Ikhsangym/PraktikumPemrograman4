#include <stdio.h>
int main(){
    int aa, bb, cc;
    printf("Masukan 3 nilai :");scanf("%d %d %d", &aa, &bb, &cc);
    if(aa > bb && aa > cc && bb > cc){
        printf("%d %d %d", cc, bb, aa);
    } else if(aa > bb && aa > cc && bb < cc){
        printf("%d %d %d", bb, cc, aa);
    } else if(bb > aa && bb > cc && aa > cc){
        printf("%d %d %d", cc, aa, bb);
    } else if(bb > aa && bb > cc && aa < cc){
        printf("%d %d %d", aa, cc, bb);
    } else if(cc > aa && cc > bb && aa > bb){
        printf("%d %d %d", bb, aa, cc);
    } else{
        printf("%d %d %d", aa, bb, cc);
    }
    return 0;
}