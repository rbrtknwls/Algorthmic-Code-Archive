import java.util.Scanner;

public class which_alien {

	public static void main(String[] args) {
		Scanner eyes = new Scanner(System.in);
		int antennas = eyes.nextInt();
		int num = eyes.nextInt();
		if (antennas >= 3 && num <= 4) {
			System.out.println("TroyMartian");
		}
		if (antennas <= 6 && num >= 2) {
			System.out.println("VladSaturnian");
		}
		if (antennas <= 2 && num <= 3) {
			System.out.println("GraemeMercurian");
		}

	}

}
