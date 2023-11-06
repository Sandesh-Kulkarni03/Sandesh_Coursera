/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * File : Kulkarni_Coursera 
 * Brief :  This programme aims to create a simple application,
 * that performs statistical analysis on a dataset.
 *
 * 
 *
 * Author : Sandesh Kulkarni
 * Date :  05-11-2023 
 * *
 */



#include <stdio.h>
#include <stdlib.h>
//Header file with function prototype
#include "stats.h"



/* Function to swap two elements in an array
 * Input : The input for the swap function is two pointers to unsigned char variables.
 * Output : The output of the swap function is the values of the variables pointed to 
 * by 'a' and 'b' after the swap operation is performed.
 */
void swap(unsigned char *a, unsigned char *b)
{
     unsigned char temp = *a;
      *a = *b;
      *b = temp;
}

/* Function to sort an array in descending order using the bubble sort algorithm
 * Input : The input for the function sort_array is an array of unsigned characters (unsigned char arr[]) 
 * and an integer representing the size of the array (int size).
 * Output : The function sorts this array in descending order using the bubble sort algorithm.
 */ 
void sort_array(unsigned char arr[], int size)
{
       	for (int i = zero; i < size -one; i++)
	{
		for (int j = zero; j < size - i - one; j++) 
		{
			if (arr[j] < arr[j + one]) 
			{
				 swap(&arr[j], &arr[j + one]);
			}
		}
	}
}

/*Function to find the maximum value in the array
 * Input : const unsigned char *data is the input data on which maximum value is found 
 * and int size represents the size of the array.
 * Output  : The output is to find the maximum value in the input array and return it as an unsigned char.
 */
unsigned char find_maximum(const unsigned char *data, int size) 
{
     unsigned char max = data[zero];
     for (int i = one; i < size; i++)
     {
     	 if (data[i] > max)
	 {
         	max = data[i];
         }
     }
     return max;
}

/* Function to find the minimum value in the array
 * Input : const unsigned char *data is the input data on which minimum value is found 
 * and int size represents the size of the array.
 * Output : The output of the function is an unsigned char value, 
 * which is the minimum value found within the array.
 */ 
unsigned char find_minimum(const unsigned char *data, int size)
{
     unsigned char min = data[zero];
     for (int i = one; i < size; i++)
     {
     	if (data[i] < min) 
	{
        	min = data[i];
        }
     }
     return min;
}

/* Function to find the mean of the array
 * Input : const unsigned char *data is pointer to an array of unsigned characters 
 * and int size represents the size of the array.
 * Output : The output of the function is an integer representing the mean of the elements 
 * in the data array.
 */
int find_mean(const unsigned char *data, int size)
{
     int sum = zero;
     for (int i = zero; i < size; i++)
     {
	 sum += data[i];
     }
	return sum / size;
}

/* Function to find the median of the array
 * Input : The input for the function is an array of unsigned characters (unsigned char arr[]),
 * const unsigned char *data is pointer to an array of unsigned characters,
 * and int size represents the size of the array. 
 * Output : The function calculates and returns the median of the elements in the arr array.
 * The median is the middle value of a sorted list. 
 */
int find_median(unsigned char arr[], const unsigned char *data, int size) 
{
       	sort_array(arr, size);

	if (size % 2 == zero)
       	{
        	int mid1 = arr[size / 2 - one];
		int mid2 = arr[size / 2];
		return (mid1 + mid2) / 2;
	}
       	else
       	{
		return arr[size / 2];
        }
}

/* Print the ststistical calcualtions done on the array
 * Input : The input for the function is an array of unsigned characters (unsigned char arr[]),
 * const unsigned char *data is pointer to an array of unsigned characters,
 * and int size represents the size of the array. 
 * Output : The function calculates and prints maximum, minimum, mean and median.
 */
int print_statistics(unsigned char arr[], unsigned char *data, int size)
{
	//Find the maximum, minimum, mean and median
	unsigned char max = find_maximum(data, size);
	unsigned char min = find_minimum(data, size);
	int mean = find_mean(data, size);
	int median = find_median(data, data, size);
	
	printf("Maximum: %d\n", max);
 	printf("Minimum: %d\n", min);
 	printf("Mean: %d\n", mean);
 	printf("Median: %d\n", median);
}  

/*Print original unsorted array
 * Input : A pointer to the first element of an array of unsigned characters
 * and int size represents the size of the array.
 * Output : The function will print the elements of the array in an unsorted order.
 */ 
void print_array(const unsigned char *data, int size)
{	
	printf("Unsorted Data :\n");
	for(int i = zero ; i < size ; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
} 


int main() 
{
	int size;
	        
	// Input array 
	unsigned char data[] = {34,201,190,154,8,194,2,6,
		  		  114,88,45,76,123,87,25,23,
				  200,122,150,90,92,87,177,244,
				  201,6,12,60,8,2,5,67,7,87,
				  250,230,99,3,100,90};

							
	size = sizeof(data) / sizeof(data[zero]);
	
	//Print original unsorted array
	print_array(data, size);
	
	//Sort the data in decending order
	sort_array(data, size);

	/* Print the sorted array
	 * Output : The sorted data is printed in ascending order.
	 */
        printf("Sorted Data:\n");

	for (int i = zero; i < size; i++)
	{
		printf("%d ", data[i]);
	}
	
	printf("\n");
	                                                         

	//Print Statistics
	print_statistics(data, data, size);

	return zero;
}                             
