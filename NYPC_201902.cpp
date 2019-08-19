#include <stdio.h>

int main() {

    int N, i;
    scanf("%d", &N);
    int remain[N], need[N];
    for(i=0; i<N; i++) scanf("%d", &remain[i]);
    for(i=0; i<N; i++) scanf("%d", &need[i]);
    int beyul[N];
    for(i=0; i<N; i++) {
        if(need[i]!=0)
        beyul[i] = remain[i]/need[i];
        else
        beyul[i] = 100010100;

    }
    int minimun=1000000;

    for(i=0; i<N; i++) if(minimun>beyul[i]) minimun=beyul[i];

    printf("%d", minimun);

    return 0;
}