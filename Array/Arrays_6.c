

#include<stdio.h>
/*@
	requires n>=0&&\valid(arr+(0..n-1));
	assigns arr[0..n-1];
	ensures \forall integer k1,k2;0<=k1<=k2<n==>arr[k1]<=arr[k2];
*/

void insertionSort(int arr[], int n)
{
	int i, key, j;
	/*@
		loop invariant 1<=i<=n;
		loop invariant \forall integer p;0<=p<i==>key==arr[p];
		loop invariant \forall integer k1,k2;0<=k1<=k2<i==>arr[k1]<=arr[k2];
		loop assigns key,i,arr[0..n-1];
		loop variant n-i;
	*/
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		/*@
			loop invariant j>=0;
			loop invariant \forall integer k;0<=k<j&&arr[k]>key==>arr[k+1]==arr[k];
			loop assigns j,arr[0..n-1];
		*/
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	insertionSort(arr, 5);	
}
