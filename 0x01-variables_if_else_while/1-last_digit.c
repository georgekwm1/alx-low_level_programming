#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit= n % 10
	  printf("Last digit of %d", n , "is %d");
	if (digit>5); {
	  printf("and is greater than 5 %d");
	    }
	else if (digit==0); {
          printf("and is 0 %d");
            }
	else (digit<5, digit!=0); {
          printf("and is less than 6 and not 0 %d");
            }
	return (0);
}
