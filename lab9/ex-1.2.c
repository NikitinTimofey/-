#include <stdio.h>
#include <stdlib.h>

const char* FILENAME_IN = "f.txt";
const char* FILENAME_OUT = "g.txt";
const int NUM_NUMBERS = 20;

int main() {
	int numbers[NUM_NUMBERS];
	int positive_count = 0, negative_count = 0;
	FILE *file_in = fopen(FILENAME_IN, "r"), *file_out = fopen(FILENAME_OUT, "w");
	
	for (int i = 0; i < NUM_NUMBERS; i++) {
		fscanf(file_in, "%d", &numbers[i]);
		if (numbers[i] > 0) {
			positive_count++;
		} else {
			negative_count++;
		}
	}
	
	if (positive_count != negative_count) {
		printf("Error: the number of positive and negative numbers does not match\n");
		return 1;
	}
	
	for (int i = 0; i < positive_count; i++) {
		fprintf(file_out, "%d %d ", numbers[i], numbers[i + positive_count]);
	}
	
	fclose(file_in);
	fclose(file_out);
	
	return 0;
}
