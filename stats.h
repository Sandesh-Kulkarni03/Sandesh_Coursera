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
  * Brief : This programme aims to create a simple application, that 
  * performs statistical analysis on a dataset. 
  *
  * 
  * Author : Sandesh Kulkarni
  * Date : 05-11-2023
  *
  */


#include <stdio.h>
#define zero 0
#define one 1

// Function to swap two elements in an array
void swap(unsigned char *a, unsigned char *b);

// Function to sort an array in descending order using the bubble sort algorithm
void sort_array(unsigned char arr[], int size);

//function to find the maximum value in the array
unsigned char find_maximum(const unsigned char *data, int size); 

// Function to find the minimum value in the array
unsigned char find_minimum(const unsigned char *data, int size);

// Function to find the mean of the array
int find_mean(const unsigned char *data, int size);

// Function to find the median of the array
int find_median(unsigned char arr[], const unsigned char *data, int size); 

// Print the statistics
int print_statistics(unsigned char arr[], unsigned char *data, int size);
  
//Print Given array
void print_array(const unsigned char *data, int size);
                                                     
                             
