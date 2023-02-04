
// Nikunj Jain
#include<stdio.h>

/*@
	requires n>0;
	
	ensures \result == n*(n+1)/2;
*/
int sum(int n)

{
int i=0;
int sum =0;

/*@
	loop invariant sum== i*(i-1)/2;
	loop invariant 1<=n<=n+1;
	loop assigns i , sum;
	loop variant n-i;
*/
while(i<=n)
{
sum=sum+i;
i++;
}

return sum;
//@ assert i==5;
}





int main()
{

int a;

a=sum(5);
//@ assert a==15;

}

