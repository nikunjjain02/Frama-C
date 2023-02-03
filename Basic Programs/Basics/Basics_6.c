

#include<stdio.h>
/*@ requires n > 0;
  @ ensures \result == 1 || \result == 2|| \result == 3;
*/



int check_number(int n) {
    if (n % 2 == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        if (n % 3 == 0) {
            return 2;
        }
        else {
            return 3;
        }
    }
}

int main()
{
int a;

a=20;

check_number (a);


}

