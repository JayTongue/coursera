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
 * @file stats.c
 * @brief Assignment submission for Module 1
 *
 * Implements seven functions besides main():
 * print_statistics(): prints stats of an array including min, man, mean, and med
 * print_array(): given array of data and length, prints the array to screen
 * find_median(): given array of data and length, returns the median value
 * find_mean(): given array of data and length, returns the mean value
 * find_maximum(): given array of data and length, returns the max val
 * find_minimum(): given array of data and length, returns the min val
 * sort_array(): given array of data and lendth, sorts array in reverse value.
 *
 * @author Justin Tung
 * @date 2025-10-04
 *
 */


#include <stdio.h>
#include "stats.h"

#define SIZE 40 //size of array

void print_array(unsigned char *test, int size) {
  printf("Starting Array: ");
  for (char i=0; i < size; i++) {
    printf("%d ", test[i]);
  }
}

int find_mean(unsigned char *test, int size) {
  int total = 0;
  for (int i=0; i < size; i++) {
    total = total + test[i];
  }

  return total/size;

}

int find_max(unsigned char *test, int size) {
  return test[0];
}

int find_min(unsigned char *test, int size, int max) {
  return test[size-1];
}

void sort_array(unsigned char *test, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (test[j] < test[j + 1]) { //sort GREATEST to least
        // Swap
        int temp = test[j];
        test[j] = test[j + 1];
        test[j + 1] = temp;
      }
    }
  }
}

int find_median(unsigned char *test, int size) {
  if (size % 2 != 0) {
    return test[size/2];
  } else {
    return (test[size/2-1] + test[size/2]) /2;
  };
}

void print_statistics(int max, int min, int median, int mean) {
  printf("\nMean: ");
  printf("%d ", mean);
  printf("| Max: ");
  printf("%d ", max);
  printf("| Min: ");
  printf("%d ", min);
  printf("| Median: ");
  printf("%d \n", median);
}


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int mean;
  int max;
  int min;
  int median;

  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  sort_array(test, SIZE);

  mean = find_mean(test, SIZE);
  max = find_max(test, SIZE);
  min = find_min(test, SIZE, max);
  median = find_median(test, SIZE);

  print_statistics(max, min, median, mean);

}

/* Add other Implementation File Code Here */
