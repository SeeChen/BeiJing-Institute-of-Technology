package src.algorithm;

import src.algorithm.partition;

public class quicksort {
	
	public int[] quicksort(int[] arr, int low, int high) {
		
		int mid;
		
		if (low < high) {
			
			partition _partition = new partition(arr, low, high);
			
			arr = _partition.getArray();
			mid = _partition.getX();
			
			quicksort(arr, low    , mid - 1);
			quicksort(arr, mid + 1, high   );
		}
		
		return arr;
	}
}