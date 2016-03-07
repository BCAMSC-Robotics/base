/**
 * @file array_utils.h
 * @author Ethan Ruffing <ethan@ethanruffing.com>
 * @since 2016-03-07
 *
 * A collection of utilities for manipulating arrays.
 */

#ifndef ARRAY_UTILS_H_
#define ARRAY_UTILS_H_

/**
 * Determines the minimum value in an array of integers.
 *
 * @param[in] arr
 *     The array to examine
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The minimum value in the array
 */
int min(int arr[], int len);

/**
 * Determines the maximum value in an array of integers.
 *
 * @param[in] arr
 *     The array to examine
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The maximum value in the array
 */
int max(int arr[], int len);

/**
 * Determines the maximum value in an array of floats.
 *
 * @param[in] arr
 *     The array to examine
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The maximum value in the array
 */
float minF(float arr[], int len);

/**
 * Determines the minimum value in an array of integers.
 *
 * @param[in] arr
 *     The array to examine
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The minimum value in the array
 */
float maxF(float arr[], int len);

/**
 * Determines the average (arithmetic mean) of an array of integers.
 *
 * @param[in] arr
 *     The arrary of integers to find the average of
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The average of the values in the array.
 */
float average(int arr[], int len);

/**
 * Determines the average (arithmetic mean) of an array of floats.
 *
 * @param[in] arr
 *     The arrary of floats to find the average of
 * @param[in] len
 *     The number of items in the array
 * @return
 *     The average of the values in the array.
 */
float averageF(float arr[], int len);

#endif /* ARRAY_UTILS_H_ */

