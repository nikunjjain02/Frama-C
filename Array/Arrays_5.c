
#include<stdio.h>

/*@
	requires n>=0&&\valid(a+(0..n-1));
	assigns a[0..n-1];
	ensures \forall integer k1,k2;0<=k1<=k2<n==>a[k1]<=a[k2];
*/
void bubbleSort(int a[], int n) {
	int temp;
	/*@
		loop invariant 0<=i<=n-2;	
		loop invariant \forall integer k1,k2;n-i<=k1<=k2<n==>a[k1]<=a[k2];
		loop assigns i,a[0..n-1];
		loop variant n-1-i;
	*/
	for(int i = 0; i < n-1; ++i) {
		/*@
			loop invariant 0<=j<n-i-1;

			loop assigns j,temp,a[0..n-1];
			loop variant n-i-1-j;
		*/
		for(int j = 0; j < n-i-1; ++j) {
			if(a[j]>a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void main() {
	int a[] = {2, 9, 6, 8, 4, 89};
	bubbleSort(a, 6);
}
