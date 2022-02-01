package main;

public abstract class Item {
	private String name;
	private float price;
	
	public Item (String name, float price) {
		this.name = name;
		this.price = price;
	}
	
	public float getPrice() {
		return price;
	}
	
	public String getName() {
		return name;
	}
	
	public String toString () {
		return getName() + " - " + getPrice() + " reais.";
	}
	
}
