package main;

public class Printer<T> {
	private Iterable<T> iterable;
	
	public Printer (Iterable<T> it) {
		this.iterable = it;
	}
	
	public void printAll() {
		Iterator<T> myIterator = iterable.iterator();
		while (myIterator.hasNext()) {
			System.out.println(myIterator.next().toString());
		}
	}

}
