#include "stats.h"
#include <stdio.h>
#include <stdlib.h>

// takes in array and its length
// returns max
int find_maximum(int arr[],int n)
{
    int i; 
     
    // Initialize maximum number 
    int max = arr[0]; 
  
    // Traverse array from the second number and 
    // compare every number with biggest seen so far   
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
}
 
// takes in array and its length
// returns min
int find_minimum(int arr[],int n)
{
    int i; 
     
    // Initialize minimum number 
    int min = arr[0]; 
  
    // Traverse array from the second number and 
    // compare every number with smallest seen so far   
    for (i = 1; i < n; i++) 
        if (arr[i] < min) 
            min = arr[i]; 
  
    return min; 
}

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
 
// takes in array and its length
// returns median
int find_median(int arr[],int n) 
{
    qsort (arr, n, sizeof(int), compare);
    return arr[n/2];
}

// takes in array and its length
// returns mean
int find_mean(int arr[],int n) 
{
    int i;
    int sum;
    for (i = 1; i < n; i++)
	sum += arr[i];
    return sum/n;
}

// prints array numbers
// takes in array and its length
// return void
void print_array(int arr[],int n)
{
    int i;
    for (i = 1; i < n; i++)
	printf("%d",arr[i]);
}


// prints array statistics
// takes in array and its length
// return void
void print_statistics(int arr[],int n)
{
    printf("max in array is %d\n", find_maximum(arr,n));
    printf("min in array is %d\n", find_minimum(arr,n));
    printf("median in array is %d\n", find_median(arr,n));
    printf("mean in array is %d\n", find_mean(arr,n));
}

// tests the funcitons with an array
int main()
{
    int arr[] = {10, 324, 45, 90, 9808}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    print_statistics(arr,n);
    return 0;
}
