package main;

public class Store {
	private Item[] myItems;
	private int quantItems; 
	public Store() {
		myItems = new Item[3];
		quantItems = 0;
	}
	
	public void addItem(Item newItem) {
		if (quantItems == myItems.length) {
			Item [] myNewArray = new Item [myItems.length * 2];
			for (int i = 0; i < quantItems; i++) {
				myNewArray[i] = myItems[i];
			}
			myItems = myNewArray;
			
		}
		myItems[quantItems] = newItem;
		quantItems++;
	}
	
	public boolean sellItem (Item item) {
		int position = -1;
		for (int i = 0; i < quantItems; i++) {
			if (item == myItems[i]) {
				position = i;
			}
		}
		if (position == -1) {
			//item n�o encontrado
			return false;
		} else {
			for (int i = position + 1; i < quantItems; i++) {
				myItems[i - 1] = myItems[i];
			} 
			quantItems--;
			return true;
		}
	}
	
	public String toString() {
		String ret = "";
		for (int i = 0; i < quantItems; i++) {
			ret = ret + myItems[i].toString() + "\n";
		}
		return ret;
	}
}