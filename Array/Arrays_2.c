
#include<stdio.h>
/*@
	requires \valid_read(a+(0..n-1));
	ensures \exists integer k1,k2;(0<=k1<n&&0<=k2<n&&k1!=k2)==>(a[k1]>=0&&a[k2]<0);
	behavior pos:
		assumes c>=0;
		ensures \result==1;
	behavior neg:
		assumes c<0;
		ensures \result==-1;
	
	complete behaviors;
	disjoint behaviors;
*/

int check(int a[], int n, int c) {
	int i = 0;
	int count_p = 0;
	int count_n = 0;
	/*@	
		loop invariant 0<=i<=n;
		loop invariant \exists integer k;0<=k<(i-1)&&a[k]>=0==>count_p+1;
		loop invariant \exists integer k;0<=k<(i-1)&&a[k]<0==>count_n+1;
		loop assigns i,count_p,count_n;
		loop variant n-i;
	*/
	while(i<n) {
		if(a[i]>=0)
			count_p++;
		else
			count_n++;
		i++;
	}
	c = count_p - count_n;
	//@assert c==count_p-count_n;
	if(c>=0) 
		//@assert c>=0;
		return 1;
	else
		//@assert c<0;
		return -1;
}

void main() {
	int a[] = {4, -10, 7, -3, 4};
	int res = check(a, -3, 4);
	//@assert res==1;
}
