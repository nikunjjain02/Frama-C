
#include<stdio.h>


/*@ 
   requires n > 0;
   ensures \result == n + 1;
*/


int increment(int n) {
    return n + 1;
}


int main()
{

int a , b;
a = 50;

b= increment(a);

//@assert b==51;

}

