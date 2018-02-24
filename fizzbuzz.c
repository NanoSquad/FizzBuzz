// Fizzbuzz
// Yahia
// Feb 4 2018
// Runs Fizzbuzz on user input

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

int32_t main(void) {
		
	int32_t a;
	
	printf("Input an integer: ");
	scanf("%" SCNd32, &a);
	printf("You inputted: %" PRId32, a);
	printf("\n");
	
	uint8_t fizzbuzz_array[9] = "FizzBuzz";
	uint8_t fizz_array[5] = "Fizz";
	uint8_t buzz_array[5] = "Buzz";
	
	printf("The FizzBuzz sequence from 1 to %" PRId32, a);
	printf(" is: \n");
	
	for ( int32_t i = 1; i < a+1; i++ ) {
		if (i % 3 == 0 && i % 5 == 0) {
				printf("%s" , fizzbuzz_array);
		} else if (i % 3 == 0) {
				printf("%s", fizz_array);
		} else if (i % 5 == 0) {
				printf("%s", buzz_array);
		} else {
			printf("%" PRId32, i);
		}
		if ( i != a) {
			printf(", ");
		}
	}

	printf("\n");
	
	return 0;

}
