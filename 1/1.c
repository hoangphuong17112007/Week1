#include <stdio.h>

void findPair(int n, int arr[], int target){
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if (arr[i] + arr[j] == target){
				printf("Pair found (%d; %d)\n", arr[i], arr[j]);
				return;
			}
		}
	}
	printf("Pair not found");
}
int main(){
	int n, arr[100], target;
	scanf("%d%d", &n, &target);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	findPair(n, arr, target);
	return 0;
} //thu tu lenh nhap vao phai theo thu tu scanf