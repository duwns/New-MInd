#include <stdio.h>

int main() {
	int P, Q, W;
    scanf("%d %d %d", &P, &Q, &W);
    int x=0; 
    float y=-1.1;
    while(P*(x-1) + Q*y != W){
        y=(W-P*x)/Q;
        if(y-(int)y!=0) y=-1.1;
        x++;
    }
    printf("%d %d", x-1, (int)y);
 	return 0;
}