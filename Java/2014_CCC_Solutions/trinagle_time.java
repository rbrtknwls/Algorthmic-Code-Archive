import java.util.Scanner;

public class trinagle_time {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int ang1 = scan.nextInt();
		int ang2 = scan.nextInt();
		int ang3 = scan.nextInt();
		
		if ((ang1 + ang2 + ang3) != 180) {
			System.out.println("Error");
		}
		else if (ang1 == ang2 && ang2 == ang3)
			System.out.println("Equilateral");
		else if (ang1 == ang2 || ang2 == ang3 || ang1 == ang3)
			System.out.println("Isosceles");
		else
			System.out.println("Scalene");
		

	}

}
