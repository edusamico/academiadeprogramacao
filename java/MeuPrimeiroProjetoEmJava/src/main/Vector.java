package main;

public class Vector<T> implements Iterable<T>{
	private Object[] myElements;
	private int numberOfElements; 
	
	public Vector() {
		myElements = new Object[3];
		numberOfElements = 0;
	}
	
	public void addItem(T newItem) {
		if (numberOfElements == myElements.length) {
			Object [] myNewArray = new Object [myElements.length * 2];
			for (int i = 0; i < numberOfElements; i++) {
				myNewArray[i] = myElements[i];
			}
			myElements = myNewArray;
			
		}
		myElements[numberOfElements] = newItem;
		numberOfElements++;
	}
	
	public void printAll () {
		for (int i = 0; i < numberOfElements; i++) {
			System.out.println(myElements[i]);
		}
	}
	
	public Iterator<T> iterator() {
		return new Iterator<T>((T[]) myElements, numberOfElements); 
	}
}
