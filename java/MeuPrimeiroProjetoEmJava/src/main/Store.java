package main;

public class Store<T extends Item> implements Iterable<T> {
	private Item[] myItems;
	private int quantItems; 
	
	public Store() {
		myItems = new Item[3];
		quantItems = 0;
	}
	
	public void addItem(T newItem) {
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
	
	public void sellItem3 (T sale) {
		try {
			sellItem2(sale);
		} catch (ItemNotFoundException e) {
			System.out.println("***********************************************");
			System.out.println("**************a exceção foi lançada************");
			System.out.println("***************mas o programa NÃO**************");
			System.out.println("***************será interrompido!**************");
			System.out.println("***********************************************");
			
			
		}
	}
	
	public void sellItem2 (Item item) throws ItemNotFoundException {
		sellItem(item);
	}
	
	public void sellItem (Item item) throws ItemNotFoundException {
		int position = -1;
		for (int i = 0; i < quantItems; i++) {
			if (item == myItems[i]) {
				position = i;
			}
		}
		if (position == -1) {
			//item não encontrado
			throw new ItemNotFoundException();
		} else {
			for (int i = position + 1; i < quantItems; i++) {
				myItems[i - 1] = myItems[i];
			} 
			quantItems--;
		}
	}
	
	public Iterator <T> iterator () {
		return new Iterator<T>((T[]) myItems, quantItems);
	}
	
	public String toString() {
		String ret = "";
		for (int i = 0; i < quantItems; i++) {
			ret = ret + myItems[i].toString() + "\n";
		}
		return ret;
	}
}
