package src;

import java.util.Random;
import java.util.Scanner;

import src.algorithm.quicksort;

public class Main {
	
	public static int[] randomArr(int length) {
		
		int[] arr = new int[100001];
		
		for (int i = 0; i < length; i++) {
			
			arr[i] = i + 1;
		}
		
		Random random = new Random();
		for (int j = length - 1; j > 0; j--) {
			
			int index = random.nextInt(length);
			
			int temp   = arr[index];
			arr[index] = arr[j]    ;
			arr[j]     = temp      ;
		}
		
		return arr;
	}
	
	public static void main(String [] args) {
		
		long start_time, end_time;
		long total_time, avg_time;
		
		avg_time = 0;
		
		quicksort qs = new quicksort();
		
		for (int i = 1; i <= 100; i++) {
			
			int   len = 100000;
			int[] arr = randomArr(len);
			
			start_time = System.currentTimeMillis();
			arr        = qs.quicksort(arr, 0, len - 1);
			end_time   = System.currentTimeMillis();
		
			total_time = end_time - start_time;
			avg_time   = avg_time + total_time;
			
			System.out.printf("%3d : Run Time: %2d ms\n", i, total_time);
		}
		
		System.out.printf("Avg Time: %d ms", avg_time / 100);
		
		Scanner input = new Scanner(System.in);
		System.out.print("\nPress Enter to quit...");
		input.nextLine();
		System.exit(0);
	}
}