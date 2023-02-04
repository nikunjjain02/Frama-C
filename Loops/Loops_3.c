

#include<stdio.h>
/*@
requires n>0;
ensures \result == n*(n+1)*(2*n+1)/6;
*/


int sum(int n)
{

int i=1;
int s=0;

/*@
loop invariant s == (i-1)*(2*i-1)*i/6;
loop invariant 1<=i<=n+1;
loop assigns i,s;
loop variant n-i;
*/

while(i<=n)
{

s=s+(i*i);
i++;

}

return s;
//@ assert i==10;

}



int main()

{

int a=5;
//@ assert a==5;

int res = sum(a);
//@ assert res==55;

}
