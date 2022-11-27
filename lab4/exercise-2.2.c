#include <conio.h>
#include <stdio.h>

void main() {
	int n;
	printf("Enter the amount of array elements: ");
	scanf("%d", &n);	
	int arr[n], i, j, s;
	printf("Enter the numbers:\n");
	for (i=0; i<n; i++) scanf("%d", &arr[i]);
	for (i=0; i<n; i++) if (arr[i] < arr[i-1]) s++;
	printf("Number of inversions = %d", s);
	getch();
}
