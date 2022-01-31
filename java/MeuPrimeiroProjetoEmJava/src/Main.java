import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Digite a primeira nota");
		
		int a = scanner.nextInt();
		
		boolean isValid = a < 0 || a > 10;
		
		if (isValid) {
			System.out.println("Nota inválida");
		} else {
			System.out.println("Digite a segunda nota");
			
			int b = scanner.nextInt();
			isValid = b < 0 || b > 10;
			if (isValid) {
				System.out.println("Nota inválida");
			} else {
				double average = (a + b) / 2.0;
				
				System.out.println("A média do aluno é: " + average);				
			}
		}
		scanner.close();
	}
}
