#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = temperatura * 9 / 5 + 32;
	printf("Temperature: %d degrees\nFahrenheit: %f degrees\n", temperatura, F);
	return 0;
}

