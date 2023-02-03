
#include<stdio.h>
/*@ requires a > 0 && a < 10000;
	@ ensures \result == a && \result > b
	|| \result == b && \result > a
	|| \result == a && \result == b;
*/

int max1(int a, int b) {
	return (a > b) ? a : b ;
    }
	

	int main() {
		int a = 45;
		int b = 55;
		int res = max1(a, b);
		//printf("The max is:: %d", res);
	   return 0;
	}
