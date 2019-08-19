#include <stdio.h>

int main() {
	
    int N, K, i, j;
    scanf("%d %d", &N, &K);
    if(K<=N) printf("%d %d", K, 1);

    int gap=N-1, x=N, y=1, pm=-1, xy=1, term=0, gapcheck=0; //y일때 1 x일때 -1 플러스할때 1 뺼때 -1
    for(i=0; i<N*N-N; i++){
        if(xy==1 && pm==-1) {
            y++;
            gapcheck++;
            //printf("%d %d\n", x, y);
        }
        else if(xy==-1 && pm==-1) {
            x--;
            gapcheck++;
            //printf("%d %d\n", x, y);
        }
        else if(xy==1 && pm==1) {
            y--;
            gapcheck++;
            //printf("%d %d\n", x, y);
        }
        else if(xy==-1 && pm==1) {
            x++;
            gapcheck++;
            //printf("%d %d\n", x, y);
        }
        if(gapcheck==gap) {xy=xy*(-1); term++; gapcheck=0;}
        if(term==2){term=0; pm=pm*(-1); gap--;}
        if(i+N+1==K) {printf("%d %d", x, y); i=N*N-N;}

    }

 	return 0;
}