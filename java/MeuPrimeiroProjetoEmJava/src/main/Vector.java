package main;

public class Vector<T> {
	private Object[] myElements;
	private int quantElements; 
	
	public Vector() {
		myElements = new Object[3];
		quantElements = 0;
	}
	
	public void addItem(T newItem) {
		if (quantElements == myElements.length) {
			Object [] myNewArray = new Object [myElements.length * 2];
			for (int i = 0; i < quantElements; i++) {
				myNewArray[i] = myElements[i];
			}
			myElements = myNewArray;
			
		}
		myElements[quantElements] = newItem;
		quantElements++;
	}
	
	public void printAll () {
		for (int i = 0; i < quantElements; i++) {
			System.out.println(myElements[i]);
		}
	}
}
