
#include<stdio.h>
#include<limits.h>
/*@
 requires -1000<d<1000;
 ensures (d%10==0 ==> \result == d+5) || (d%10!=0 ==> \result == d-2);
*/
int check(int d)
{
  if(d%10==0)
  { return (d+5); }
  else 
 { return (d-2); }
}
void main()
{
  int a = 20;
  //@ assert a == 20;
  
  int b = check(a);
  //@ assert b == 25||23;
  int c = 34;
   //@ assert c == 34;
  int e = check(c);
 //@ assert e == 39||32;
  
}


