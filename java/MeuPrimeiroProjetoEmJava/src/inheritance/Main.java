package inheritance;
import java.util.Scanner;

public class Main {
	
	public static void main (String[] args) {
		System.out.println("digite um n�mero");
		try (Scanner scanner = new Scanner(System.in)){
			int N = scanner.nextInt();
			if (Numbers.isPrime(N)) {
				System.out.println("O n�mero � primo");
			} else {
				System.out.println("O n�mero n�o � primo");
			}
		}
	}
}