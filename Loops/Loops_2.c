
// Nikunj Jain

#include<stdio.h>
#include<limits.h>
/*@
  requires INT_MIN<n<INT_MAX;
  assigns \nothing;
  ensures \result == \old(n)+10;   
*/
int sum(int n)
{
  int i = 1;
  int s = 0;
  //@ assert s == 0;
  /*
     loop invariant 1<=i<=n+1;
     loop invariant s == \at(s,Pre)+i;
     loop assigns s,i;
     loop variant n - 1;
  */
 
 while(i<=10)
 {
  s = s+1;
  //@ assert s < INT_MAX;
   i++;
 }
  return s;
}



int main()
{
   int x = 10;
   //@ assert x == 10;
   int c = sum(x);
   return 0;
}
