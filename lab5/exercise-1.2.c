#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
#define n 10 
int main () 
{ 
  int a[n], i, sum, s=0, j, m; 
   
  srand(time (NULL)); 
   
  for (i=0; i<n; i++) 
   a[i]=rand()%10; 
   printf ("\n"); 
   
  for (i=0; i<n; i++) 
   printf ("%d ",a[i]); 
  
 for (i=0; i<n; i++) 
  if (a[i]<1) 
   s++;  
 // Минимальный элемент  
 int min=a[0]; 
 
 for (int i=0; i<n; i++) 
  if (a[i] < min) 
         min = a[i];  
// Упорядочивание элементов 
// if (a[i]=min) 
//  sum =  
  
  // Сумма элементов матрицы 
  float q=0; 
   for (i=0;i<n;i++) 
    q+=a[i];  
     
   printf("\n\nSum of matrix elements = %.2f\n", q); 
  
 printf("\nNumber of elements equal to 0: %d", s); 
 printf("\nmin: %d", min); 
   
  getchar(); 
   
return (0); 
}
