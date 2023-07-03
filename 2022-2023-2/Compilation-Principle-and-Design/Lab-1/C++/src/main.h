#include <math.h>
#include <stdio.h>

#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

void randomArr(int* arr, int len);

int  partition(int* arr, int low, int high);
void quicksort(int* arr, int low, int high);
