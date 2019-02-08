
public class sorting {
	public static int[] bubblesort(int[] arr) {
		/** Compare each value to its neighbor and switch if one
		 * is bigger, worst time complexity O(n^2) 
		 */
		for(int i = 0; i < arr.length; i ++) {
			for(int j = 0; j < arr.length-1; j++) {
				if(arr[j] > arr[j+1]) {
					int temp = 0;
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
			printarr(arr);
		}
		return (arr);
		
	}
    public static int[] selectionsort(int[] arr) {
		/** 1)Find largest value 2) Swap with last element
		 * 3) Reduce the size of the array
		 */
		for(int i = 0; i < arr.length-1 ; i--) {
			int largest = 0;
			int index = 0;
			for(int j = 0; j <= i; j++) {
				if (arr[j] > largest) {
					largest = arr[j];
					index = j;
				}
				arr[j] = arr[i];
				arr[i] = largest;
			}
			
			printarr(arr);
		}
		return (arr);
		
	}
	public static void printarr(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]+ ' ');
		}
	}
	public static void main (String[] args) {
		int[] Testcase = {0,1,2,3,5,1,2,3,4};
		int[] sorted = bubblesort(Testcase);
		for (int i = 0; i < sorted.length; i++) {
			System.out.println(sorted[i]+ ' ');
		}
	}
}
