package main;

public class Iterator<T> {
	
	private T[] elements;
	private int numberOfElements;
	private int position;
	
	public Iterator(T[] elements, int numberOfElements) {
		this.elements = elements;
		this.numberOfElements = numberOfElements;
		this.position = 0;
	}

	
	public boolean hasNext() {
		return position < numberOfElements;
	}
	
	public T next() {
		return elements[position++];
	}
}
