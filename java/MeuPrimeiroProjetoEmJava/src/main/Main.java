package main;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class Main {
	
	public static void main (String[] args) {
//		Vector<String> myVector = new Vector<>();
//		
//		myVector.addItem("Borracha");
//		myVector.addItem("Quadro Branco");
//		myVector.addItem("Caneta");
//		
//			
//		new Printer<>(myVector).printAll();
//		
//		Store<Book> myBookStore = new Store<>();
//		myBookStore.addItem(new Book("Java como programar", 100.0f, "Bookman"));
//		myBookStore.addItem(new Book("C++ como programar", 120.0f, "Bookman"));
//		
//		new Printer<>(myBookStore).printAll();
		
		try {

			ObjectInputStream input = new ObjectInputStream(new FileInputStream("src/output.txt"));
			Store <Book> myBookStore = (Store<Book>) input.readObject();
			input.close();
			
			new Printer<Book>(myBookStore).printAll();

//			ObjectOutputStream output = new ObjectOutputStream(new FileOutputStream("src/output.txt"));
//			output.writeObject(myBookStore);
//			output.close();
			
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
		
		
//		Book bookJava = new Book("Java como programar", 100.0f, "Bookman");
//		Book bookC = new Book("C++ como programar", 120.0f, "Bookman");
//		Pencil pencil = new Pencil("Lapis", 5.0f);
//		
//		Store<Item> myStore = new Store<>();
//		myStore.addItem(bookJava);
//		myStore.addItem(bookC);
//		myStore.addItem(pencil);
//		
//		Store<Book> myBookStore = new Store<>();
//		myBookStore.addItem(bookJava);
//		myBookStore.addItem(bookC);
//		
//		System.out.println(myStore.toString());
//		System.out.println(myBookStore.toString());
//
//		
//		for (int i = 0; i < 3; i++) {
//			myStore.addItem(new Pencil("Lapis na promo", 2.5f));
//		}
//		
//		System.out.println("------ITENS DISPON�VES------");
//		System.out.println(myStore.toString());
//		
//		System.out.println("O livro de Java ser� vendido");
//		System.out.println("------------------------------");
//		myStore.sellItem3(bookJava);
//		
//		System.out.println("Livro vendido");
//		System.out.println("------------------------------");
//		
//		System.out.println("------ITENS DISPON�VES------");
//		System.out.println(myStore.toString());
//		
//	
//		System.out.println("O livro de Java ser� vendido novamente");
//		System.out.println("------------------------------");
//		myStore.sellItem3(bookJava);
//		
//		System.out.println("Livro vendido novamente");
//		System.out.println("------------------------------");
//
//		System.out.println("------ITENS DISPON�VES------");
//		System.out.println(myStore.toString());
//		
//	
//		Item[] myStore = new Item [3];
//		myStore[0] = bookJava;
//		myStore[1] = bookC;
//		myStore[2] = pencil;
//		
//		for (int i = 0; i < 3; i++) {
//			System.out.println(myStore[i].toString());
//		}
	
}