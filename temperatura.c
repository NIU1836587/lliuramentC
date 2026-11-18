#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = temperatura * 9 / 5 + 32;
	printf("Temperature: %d degrees\nFahrenheit: %f degrees\n", temperatura, F);

	if (temperatura >= 20) {
		printf("Temperature: %d degrees\nHigh temperature\n", temperatura);
	} else {
		printf("Temperature: %d degrees\nLow temperature\n", temperatura);
	}
	return 0;
}

