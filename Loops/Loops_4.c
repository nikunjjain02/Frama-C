

#include<stdio.h>
#include<limits.h>

/*@
 logic integer factorial(integer n) = (n<2)?1:n*factorial(n-1);
*/
/*@
  requires n<12;
  assigns \nothing;
  ensures \result == \result + factorial(n);
*/

int factorial(int n)
{

  if(n<2)
  {
   return 1;
  }

  int i = 1;
  int fact = 1;
  int s = 0;

  /*@
    loop invariant 1<=i<=n+1;
    loop invariant fact == factorial(i-1);
    loop assigns i,fact;
    loop variant n-i;
  */
  for(i=1;i<=n;i++)
  {
    fact = fact*i;
    s = s+fact;
  }
  return s;
}
int main()
{
  int a = 6;
  //@ assert a == 6;
  int c = factorial(a);
  //@assert c==720;
 
  return 0;
}
