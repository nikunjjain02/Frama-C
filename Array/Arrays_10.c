
#include<stdio.h>
/*@
	requires n>=0&&\valid(a+(0..n-1));
	requires l>=0&&u<=n;
	assigns a[l..u-1];
	ensures \forall integer p;l<=p<u==>a[p]==k;
	ensures \forall integer q;q<l&&q>=u==>a[q]==\old(a[q]);
*/
void modify(int a[], int n, int l, int u, int k) {
	int i = l;
	/*@
		loop invariant l<=i<=u;
		loop invariant \forall integer r;l<=r<i==>a[r]==k;
		loop assigns i,a[l..u-1];
		loop variant u-i;
	*/
	while(i<u) {
		a[i] = k;
		i++;
	}
}

void main() {	
	int a[] = {10, 20, 30, 40, 30, 20, 50, 60, 90};
	modify(a, 90, 20, 50, 80);
}
		
