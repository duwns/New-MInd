#include <stdio.h>

//우산
int main() {

   int N, M, Bz, i;
   scanf("%d %d %d", &N, &M, &Bz);
   int Bumb[N]={0,};
   int movement[200], R[200];
   int result=0;

   for(i=0; i<M; i++) scanf("%d %d", &movement[i], &R[i]);
   if(R[0]==1){
      Bumb[movement[0]]=1; 
      result++;
     }
   for(i=0; i<M; i++){
       
      if(Bumb[movement[i]]==0 && R[i+1]==1){
        Bumb[movement[i+1]]++; 
        result++;
      }
      else if(Bumb[movement[i]]>=1 && R[i+1]==1){ 
        Bumb[movement[i+1]]++; 
        Bumb[movement[i]]--;
      }

   }

   printf("%d ", result);

  return 0;
}