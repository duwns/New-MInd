#include <stdio.h>

int result=0;
int f(int a, int height[], int number)
{
	int j, tmp=0;
	for(j=number; j>=0; j--)
	{
		if(height[j]>=height[number]) tmp+=height[number];
		else j=-1;
	}
	for(j=number+1; j<a; j++)
	{
		if(height[j]>=height[number]) tmp+=height[number];
		else j=a;
	}
	printf("%d\n", tmp);
	return tmp;
}

int main() {
  int a, i;
	scanf("%d", &a);
	int height[a];
	result = f(a, height, 0);
	for(i=1; i<a; i++) 
	{
		int compare=f(a, height, i);
		if(compare > result) result=compare;
	}
	
	printf("%d", result);
	return 0;
}
