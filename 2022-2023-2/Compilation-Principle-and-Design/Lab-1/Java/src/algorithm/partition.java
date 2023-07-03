package src.algorithm;

public class partition {
	
	private int[] _arr;
	
	private int   low ;
	private int   high;
	
	private int   x   ;
	
	private int[] _partition(int[] arr, int low, int high) {
		
		int i     = low - 1;
		int pivot = arr[high];
		
		int temp;
		
		for (int j = low; j < high; j++) {
			
			if (arr[j] <= pivot) {
				
				i = i + 1;
				
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
		temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high ] = temp;
		
		this.x = i + 1;
		
		return arr;
	}
	
	public int[] getArray() { return this._partition(this._arr, this.low, this.high); }
	public int   getX    () { return this.x                                         ; }
	
	public partition() {}
	public partition(int[] _arr, int low, int high) {
		
		this._arr = _arr;
		
		this.low  = low ;
		this.high = high;
	}
}