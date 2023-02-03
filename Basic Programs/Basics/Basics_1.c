
#include <stdio.h>



/*@ 
	requires n > 0;
	ensures \result == 0|| \result == 2|| \result == 1;
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
            return 0;
        }
    }
}

int main()
{
int a=50;
int b;
b=check_number(50);

return 0;
}

