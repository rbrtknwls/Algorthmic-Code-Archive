import java.util.ArrayList;
import java.util.Scanner;

public class s2 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int nCase = s.nextInt();
		for (int i = 0; i < nCase; i++) {
			ArrayList<Integer> Num = new ArrayList<Integer>();
			String holder = s.next();
			for (int it = 0; it < holder.length(); it++) {
				Num.add(Integer.valueOf(holder.substring(it, it+1)));
			}
			String val = "";
			for (int valu = 0; valu < Num.size(); valu++) {
				val += Num.get(valu);
			}
			System.out.println(val);
			while(Num.size()>2) {
				int store = 0;
				store = Num.get(Num.size()-1);
				Num.remove(Num.size()-1);
				if (store <= Num.get(Num.size()-1)){
					Num.set(Num.size()-1, Num.get(Num.size()-1)-store);
				}else {
					Num.set(Num.size()-1, 10 - (store-Num.get(Num.size()-1)));
					int index = Num.size()-2;
					while (Num.get(index) == 0) {
						Num.set(index, 9);
						index--;
					}
					Num.set(index, Num.get(index)-1);
					
				}
				if (Num.get(0) == 0) Num.remove(0);			
				val = "";
				for (int valu = 0; valu < Num.size(); valu++) {
					val += Num.get(valu);
				}
				System.out.println(val);
				
			}
			if (Integer.valueOf(val) % 11 ==  0) {
				System.out.println("The number "+ holder + " is divisible by 11.");
			}else {
				System.out.println("The number "+ holder + " is not divisible by 11.");
			}
		}
	}
}
