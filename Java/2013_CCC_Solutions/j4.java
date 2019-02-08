import java.util.Arrays;
import java.util.Scanner;

public class ccc13j4 {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int time = s.nextInt();
		int runs = s.nextInt();
		int[] list = new int[runs];
		for (int i =0; i < runs; i++) {
			list[i] = s.nextInt();
		}
		Arrays.sort(list);
		int index = 0;
		while (time >0) {
			time -= list[index];
			index++;
		}
		if (time == 0)index++;
		System.out.println(index-1);
	}
}
