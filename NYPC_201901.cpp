#include <stdio.h>
#include <string.h>

int main() {

    int lencheck=0, bigE=0, smallE=0, numcheck=0, specheck=0;

    int i;
    char password[100];
    scanf("%s", &password);
    int len=strlen(password);
    if(len>=8 && len<=15) lencheck=1;

    for(i=0; i<len; i++)
    {
        if(password[i]>=65 && password[i]<=90) bigE=1;
        if(password[i]>=97 && password[i]<=122) smallE=1;
        if(password[i]>=48 && password[i]<=57) numcheck=1;
        if((password[i]>=33 && password[i]<=47) || (password[i]>=58 && password[i]<=64) || (password[i]>=91 && password[i]<=96) || (password[i]>=123 && password[i]<=126)) specheck=1;
    }

    if(lencheck==1 && bigE==1 && smallE==1 && numcheck==1 && specheck==1) printf("valid");
    else printf("invalid");

    return 0;
}
