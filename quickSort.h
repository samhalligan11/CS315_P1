#pragma once
#ifndef quickSort_h
#define quickSort_h

void swap(double* a, double* b);

double partition(double arr[], double low, double high);

void quickSort(double arr[], double low, double high);

#endif