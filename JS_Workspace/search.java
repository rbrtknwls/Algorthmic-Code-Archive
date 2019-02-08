
public class search {
	
	public static int LinearSearch(int [] intArr, int Value) {
		/**A method that will search a list (slowly) and return the index, 
		or -1 if it does not find the number */
		for (int i = 0; i < intArr.length; i++)
			if (intArr[i] == Value) return(i);
		return(-1);
	}
	public static int BinarySearch(int[] intArr, int Value) {
		/** Used for find a value in a sorted list, allowing you
		 * to find the value faster **/
		//Logic
		/**go to the middle of the Arr, check the value, then either
		 * go to the right if its bigger or left if smaller go to the next half
		 *  **/
		int min = 0;
		int max = intArr.length-1;
		while (min <= max) {
			if ((min+max)/2 < Value) min = (min+max)/2;
			else if ((min+max)/2 > Value) max = (min+max)/2;
			else return (min+max)/2;
		}
		return(-1);
	}
	public static void main(String[] args) {

	}

}
