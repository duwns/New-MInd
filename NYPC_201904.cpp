#include <stdio.h>



int main() {

    int H, T, i;
    scanf("%d %d", &H, &T);
    int deltaH = H;

    for(i=0; i<T; i++){
        
        int a, h;
        scanf("%d %d", &a, &h);

        if(a==1){
            deltaH=deltaH-h;
        }
        else if(a==2){
            deltaH=deltaH+h;
        }
        else if(a==3){
            deltaH=deltaH+h;
            printf("%d", deltaH);
            i=T;
        }

    }

    return 0;
}