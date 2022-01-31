import java.util.Scanner;

public class ex1array {
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Informe o tamanho >1 para a lista:");
		
		int N = scanner.nextInt();
		
		System.out.println("Informe " + N + " números inteiros");
		
		int [] myArray = new int [N];
		
		for (int i = 0; i < N; i++) {
			myArray[i] = scanner.nextInt();
		}
		
		int greatest = myArray[0];
		
		for (int i = 1; i < N; i++) {
			if (myArray[i] > greatest) {
				greatest = myArray[i];
			}
		}
		
		System.out.println("O maior elemento é igual a: " + greatest);
		
		scanner.close();
	}
}