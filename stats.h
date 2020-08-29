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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(float mean,float median,unsigned char min ,unsigned char max);
/**
 * 
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * <Add Extended Description Here>
 *
 * @param <mean> : the mean of ann array
 * @param <median> <median of an array>
 * @param <min> <the smallest number in array>
 * @param <max> <the largest number in array>
 *
 * @return <return nothing but printg values>
 */

void print_array (unsigned char test[] ,unsigned char size );
/**
 * 
 *  Given an array of data and a length, prints the array to the screen.
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <return nothing but printg array elements>
 */

void  sort_array (unsigned char test[],unsigned char size );
/**
 * 
 *Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element the       *largest value, and the last element (n-1)the smallest value. )
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <return nothing >
 */

unsigned char find_maximum(unsigned char test[],unsigned char size);
/**
 * 
 *  Given an array of data and a length, returns the maximum.
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <return the maximum number>
 */
unsigned char find_minimum(unsigned char test[],unsigned char size);
/**
 * 
 *  Given an array of data and a length, returns the minimum.
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <return the minimum number>
 */
float find_mean(unsigned char test[],unsigned char size);
/**
 * 
 *  Given an array of data and a length, returns the mean.
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <return the mean value >
 */
float find_median(unsigned char test[],unsigned char size);
/**
 * 
 *  Given an array of data and a length, returns the median value.
 * <Add Extended Description Here>
 *
 * @param <test[]> :  unsigned char pointer to an n-element data array
 * @param <size> <An unsigned integer as the size of the array>
 * @return <returns the median value >
 */
#endif 
/* __STATS_H__ */
