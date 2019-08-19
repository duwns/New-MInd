#include <stdio.h>
#include <queue>

using namespace std;

//ATM
int main() {

  priority_queue<int,vector<int>,greater<int> > pq;
  int man, i;
  scanf("%d", &man);
  int tmp[man];
  for(i=0; i<man; i++){
    scanf("%d", &tmp[i]);
    pq.push(tmp[i]);
    printf("%d", pq.top());
  }

  int temp=0, res=0;
  for(i=0; i<man; i++){
    temp+=pq.top();
    res+=temp;
    pq.pop();
  }
  printf("%d", res);

  return 0;
}