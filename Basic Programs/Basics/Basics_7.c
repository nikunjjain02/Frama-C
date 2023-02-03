
#include<stdio.h>

/*@ requires n > 0;
  ensures \result * \result <= n < (\result + 1) * (\result + 1);
*/


int int_sqrt(int n) {
    int i;
    for (i = 0; i * i <= n; i++);
    return i - 1;
}


int main()
{

int a ;

a=4;

int_sqrt(a);

}


