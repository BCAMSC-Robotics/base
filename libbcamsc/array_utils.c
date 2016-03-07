/**
 * @file array_utils.c
 * @author Ethan Ruffing <ethan@ethanruffing.com>
 * @since 2016-03-07
 *
 * Implementation of `array_utils.h`.
 */

#include "array_utils.h"

int min(int arr[], int len) {
	int m = arr[0];
	int i;

	for (i = 1; i < len; i++) {
		if (arr[i] < m)
			m = arr[i];
	}

	return m;
}

int max(int arr[], int len) {
	int m = arr[0];
	int i;
	
	for (i = 1; i < len; i++) {
		if (arr[i] > m)
			m = arr[i];
	}

	return m;
}

float minF(float arr[], int len) {
	float m = arr[0];
	int i;

	for (i = 1; i < len; i++) {
		if (arr[i] < m)
			m = arr[i];
	}

	return m;
}

float maxF(float arr[], int len) {
	float m = arr[0];
	int i;
	
	for (i = 1; i < len; i++) {
		if (arr[i] > m)
			m = arr[i];
	}

	return m;
}

float average(int arr[], int len) {
	long sum = 0;
	int i;
	
	for (i = 0; i < len; i++)
		sum += arr[i];
	
	return sum/((float)len);
}

float averageF(float arr[], int len) {
	double sum = 0;
	int i;
	
	for (i = 0; i < len; i++)
		sum += arr[i];

	return (float)(sum/len);
}

