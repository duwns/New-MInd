#include <stdio.h>

void merge(int list[], int left, int mid, int right) {
	int i, j, k;
	i=left;
	j=mid+1;
	k=left;
	int tmp_list[right+1];

	while(i<=mid && j<=right){
		if(list[i]<=list[j])
			tmp_list[k++] = list[i++];
		else 
			tmp_list[k++] = list[j++];

	}
	
	while(i<=mid || j<=right){
		if(i<=mid){
			tmp_list[k++] = list[i++];
		}
		if(j<=right){
			tmp_list[k++] = list[j++];
		}
	}

	for(i=left; i<=right; i++)
		list[i]=tmp_list[i];

	
}

void merge_sort(int list[], int left, int right) {
	
	if(right>left)
	{
		int mid = (left + right)/2;
		merge_sort(list, left, mid);
		merge_sort(list, mid+1, right);
		merge(list, left, mid, right);
	}
	
}

int main() {
	int N, i;
	scanf("%d", &N);
	int list[N];
	for(i=0; i<N; i++) scanf("%d", &list[i]);
	
	merge_sort(list, 0, N-1);
	
	for(i=0; i<N; i++) printf("%d ", list[i]);

 	return 0;
}
