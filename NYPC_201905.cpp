#include <stdio.h>
#include <string.h>

//ID확인

int check(char email[]){
    
    int golnum=0;
    int i;
    int len = strlen(email);
    if(email[0]==64 || email[len-1]==64) return 0;
    for(i=0; i<len; i++){
        if(!( (email[i]>=48 && email[i]<=57) || (email[i]>=65 && email[i]<=90) || (email[i]>=97 && email[i]<=122) || email[i]==45 || email[i]==46 || email[i]==64) ) {
            return 0;
        }
        if(email[i]==64){
            golnum++;
            //printf("%c", email[i]);
        } 

    }
    if(golnum==1 && len>=3) return 1;
    else return 0;

}

int main() {
    
    int N, i, j;
    int result[100];
    scanf("%d", &N);
    for(i=0; i<N; i++) { 
        char email[100];
        scanf("%s", email);
        result[i] = check(email);
    }
    for(i=0; i<N; i++) {
        if(result[i]==0) printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}