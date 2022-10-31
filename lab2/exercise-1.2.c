#include<stdio.h> 

void main() { 
 
 int r, b; 
 printf("Radius:"); 
 scanf("%d", &r); 
 printf("Hole width and height:"); 
 scanf("%d", &b); 
 printf("Is it possible to cut a square hole of this size in this circle?");
 
 if (r>b) 
	printf("\r\nYes"); 
 else (r<=b), 
	printf("\r\nNo"); 
}