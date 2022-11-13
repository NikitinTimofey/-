#include <stdio.h>
 
int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    int arr[N], i, j, count=0;
    for(i=0; i<N; i++) scanf("%d", &arr[i]);
    for(i=0; i<N-1; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(arr[i]>arr[j]) count+=1;
        }
    }
    printf("Number of inversions in the array = %d", count);
    return 0;
}