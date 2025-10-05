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
 // loop through array items and printf each one
}

int find_mean(unsigned char *test, int size) {
  // find sum of all items and divivde by array length
}

int find_max(unsigned char *test, int size) {
  // return first item in reverse-sorted array
}

int find_min(unsigned char *test, int size, int max) {
  // return last item in reverse-sorted array
}

void sort_array(unsigned char *test, int size) {
  // Implement sorting algo
  // Call this function before calculating other parameters
}

int find_median(unsigned char *test, int size) {
  // if array has even items, then average the two center items
  // if array has odd items, return middle item.
}

void print_statistics(int max, int min, int median, int mean) {
  // print each parameter
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
