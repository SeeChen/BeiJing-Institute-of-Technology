#include "main.h"

int main() {
	
	clock_t start_time, end_time;
	double  total_time, avg_time;
	
	avg_time = 0;
	
	for (int x = 1; x <= 100; x++) {
		
		int arr[100001];
		int len = 100000;
		
		randomArr(arr, len);
	
		start_time = clock();
		quicksort(arr, 0, len - 1);
		end_time = clock();
	
		total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
	
		cout << right << setw(3) << x << ": Run Time: " << right << setw(2) << total_time * 1000 << " ms\n";
		avg_time += total_time * 1000;
	}
	
	cout << "Avg Time: " << avg_time / 100 << " ms" << endl;
	
	system("pause");
	return 0;
}

void randomArr(int* arr, int len) {
	
	for (int i = 0; i < len; i++) {
		
		arr[i] = i + 1;
	}
	
	srand((unsigned) time(NULL));
	for (int j = len - 1; j > 0; j--) {
		
		int index = (rand() % (j - 0 + 1)) + 0;
		
		int temp   = arr[index];
		arr[index] = arr[j];
		arr[j]     = temp;
	}
}

void quicksort(int* arr, int low, int high) {
	
	int mid;
	
	if (low < high) {
		
		mid = partition(arr, low, high);
		
		quicksort(arr, low    , mid - 1);
		quicksort(arr, mid + 1, high   );
	}
}

int partition(int* arr, int low, int high) {
	
	int i     = low - 1;
	int pivot = arr[high];
	
	int temp;
	
	for (int j = low; j < high; j++) {
		
		if (arr[j] <= pivot) {
			
			i = i + 1;
			
			temp   = arr[i];
			arr[i] = arr[j];
			arr[j] = temp  ;
		}
	}
	
	temp       = arr[i + 1];
	arr[i + 1] = arr[high ];
	arr[high ] = temp      ;
	
	return (i + 1);
}