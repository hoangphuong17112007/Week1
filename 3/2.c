#include <stdio.h>
void binarysort(int A[], int n){
	int count;
	for (int i=0; i < n; i++){
		if(A[i]==0){
			count++;
		}
	}
	int k=0;
	while(count--){
		A[k++] = 0;
	}
	while(k<n){
		A[k++] = 1;
	}
	for(k=0; k<n; k++){
		printf("%d ", A[k]);
	}
}
int main(){
	int A[] = {0,1,0,0,1,1,0,0,1};
	int n = 10;
	binarysort(A, n);
	return 0;
}