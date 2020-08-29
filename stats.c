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
 * @file <state.c> 
 * @brief <simple program that prints tha statistcs of an un sorted array >
 * 
 * <Add Extended Description Here>
 *
 * @author Abdalla Hatem
 * @date   28-8-2020 
 *
 */

#include <stdio.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

        float mean = find_mean(test, SIZE);
        float median = find_median(test, SIZE);
        unsigned char min = find_minimum(test, SIZE);
        unsigned char max = find_maximum(test, SIZE);
  /* Statistics and Printing Functions Go Here */
        print_statistics(mean, median, min, max);
        printf("\nArray before sorting : \n");
        print_array(test, SIZE);

        printf("\nArray after sorting in descending order : \n");
        sort_array(test, SIZE);  
	print_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(float mean,float median,unsigned char min ,unsigned char max){
	printf("Mean: %f \n", mean);
	printf("Median: %f \n", median);
	printf("Minimum: %u \n", min);
	printf("Maximum: %u \n", max);
}

void print_array (unsigned char test[] ,unsigned char size ){
    for(char i=0;i<size;i++){
       printf("%d \t ",test[i] );
    }   
}
void sort_array (unsigned char test[],unsigned char size ){
	unsigned char temp ;
	for(char i=0;i<size;i++ ){
	   for(char j=i;j<size;j++){
		   if(test[i]<test[j]){
			   temp=test[i];
			   test[i]=test[j];
			   test[j]=temp;
		   }
	   }
	}

}
unsigned char find_maximum(unsigned char test[],unsigned char size){
         unsigned char max= test[0];
	 for(char i=0;i<size;i++){
	   if(max<test[i]){
	     max=test[i];
	   }
	 }
	 return max;
}
unsigned char find_minimum(unsigned char test[],unsigned char size){
        unsigned char mini= test[0];
         for(char i=0;i<size;i++){
           if(mini>test[i]){
	    mini=test[i];
           }
	 }
	   return mini;
}
float find_mean(unsigned char test[],unsigned char size){
     float mean=0;
     for(char i=0;i<size;i++){
       mean+=test[i];
     }
     mean/=size;
     return mean;
}
float find_median(unsigned char test[],unsigned char size){
   unsigned char temp ;
   float mid=0 ;
        for(char i=0;i<size;i++ ){
	    for(char j=i;j<size;j++){
                if(test[i]<test[j]){
	          temp=test[i];
		  test[i]=test[j]; 
		  test[j]=temp;        
	      	}
           }
        }
	if(size%2==0){
	  mid =test[(size/2)-1]+test[size/2];
	 return mid/2; 
	}else{
		mid=test[size/2];
		return mid/2;
	}
}

