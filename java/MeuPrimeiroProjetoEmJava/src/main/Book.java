package main;

import java.io.Serializable;

public class Book extends Item implements Serializable{
	private String publisher;
	
	public Book (String name, float price, String publisher) {
		super(name, price);
		this.publisher = publisher;
	}
	
	public String getPublisher () {
		return publisher;
	}
	
	public String toString () {
		return getName() + " - " + getPublisher() + " - " + getPrice() + " reais.";
	}
}
