package main;

public class Main {
	
	public static void main (String[] args) {
		Book bookJava = new Book("Java como programar", 100.0f, "Bookman");
		Book bookC = new Book("C++ como programar", 120.0f, "Bookman");
		Pencil pencil = new Pencil("Lapis", 5.0f);
		
		Store myStore = new Store();
		myStore.addItem(bookJava);
		myStore.addItem(bookC);
		myStore.addItem(pencil);
		
		for (int i = 0; i < 3; i++) {
			myStore.addItem(new Pencil("Lapis na promo", 2.5f));
		}
		
		System.out.println(myStore.toString());
		
		System.out.println("O livro de Java ser� vendido");
		
		System.out.println("_____________________________");
		myStore.sellItem(bookJava);

		System.out.println(myStore.toString());
		
		
		//Item[] myStore = new Item [3];
		//myStore[0] = bookJava;
		//myStore[1] = bookC;
		//myStore[2] = pencil;
		
		//for (int i = 0; i < 3; i++) {
		//	System.out.println(myStore[i].toString());
		//}
	
	}
	
}