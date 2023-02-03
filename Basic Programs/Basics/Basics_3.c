
#include<stdio.h>
#include<limits.h>

/*@

	requires \valid(a) && \valid(b);
	requires \separated(a,b);


	assigns *a;
	assigns *b;


	ensures *a ==\old(*b) && *b==\old(*a);

*/




int swap(int *a , int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
return 0;
}





void main()
{
int a, b;

a=20;
//@assert a==20;
b=45;
//@assert b==45;


swap(&a, &b);
//@assert a==45 && b==20;

}
