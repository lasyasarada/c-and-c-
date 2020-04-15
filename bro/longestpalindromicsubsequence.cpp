
package com.epam.collections;
import java.util.Arrays;
import java.util.Scanner;
public class CustomCollectionList<CustomCollections> {
	private int size=0;
	private static final int initialcapacity=10;
    private Object[] list;

    public CustomCollectionList() {
 	   list=new Object[initialcapacity];
    }
    public void add(CustomCollections value) {
 	   if(size==list.length) {
 		   growSize();
 	   }
 	   list[size++]=value;
    }

    private void growSize() {
		int newlengthoflist=list.length*2;
		list=Arrays.copyOf(list, newlengthoflist);

	}
	public CustomCollections get(int index) {
 	   if(index>=size ||index<0) {
 		  throw new IndexOutOfBoundsException("Index Out of Range");
 	   }
 	   return (CustomCollections)list[index];
    }
	public CustomCollections remove(int index) {
		if(index>=size ||index<0) {
			throw new IndexOutOfBoundsException("Index error");
		}
		Object item=list[index];
		int num=list.length-(index+1);
		System.arraycopy(list, index+1, list, index, num);
		size--;
		return (CustomCollections)item;
	}
	public String toString()
	{
	     StringBuilder sb = new StringBuilder();
	     sb.append('[');
	     for(int i = 0; i < size ;i++) {
	         sb.append(list[i].toString());
	         if(i<size-1){
	             sb.append(",");
	         }
	     }
	     sb.append(']');
	     return sb.toString();
	}
	public static void main(String[] args) {
    	Scanner s=new Scanner(System.in);
		CustomCollectionList<Integer> customlist=new CustomCollectionList<Integer>();
		customlist.add(1);
		customlist.add(2);
		customlist.add(3);
		customlist.add(4);
		customlist.add(5);
		customlist.add(6);
		customlist.add(7);
		customlist.add(8);
		customlist.add(9);
		customlist.add(10);
		System.out.println(customlist);
		int count=1;
		while(count == 1) {
		 	System.out.println("Menu::");
		    System.out.println("\n1.Add an element,\n2.Remove an element,\n3.Fetch an element from an index position,\n4.Print the List.");
		    System.out.println("Select the option:");
		   	int option = s.nextInt();
		    switch(option) {
		       case 1:
		    	   System.out.println("Enter an element to add:");
		  		   int n=s.nextInt();
		  		   customlist.add(n);
		  		   System.out.println(customlist);
		  		   break;
		       case 2:
		  		   System.out.println("Enter a index to remove");
		  		   int index=s.nextInt();
		  		   System.out.println("The removed element from the list is "+customlist.remove(index));
		  		   System.out.println("The list after removing the element is "+customlist);
		  		   break;
		       case 3:
		    	   System.out.println("Enter an index position to fetch a value:");
		    	   int fetchfromindex=s.nextInt();
		    	   System.out.println("The element fetched from the list is "+customlist.get(fetchfromindex));
		    	   break;
		       case 4:
		    	   System.out.println("The list is ");
		    	   System.out.print(customlist);
		    	   break;
		       default:
		    	   System.out.println("Option invalid! \n");
		    	   break;
		    }
		    System.out.println("Do you want to continue?");
		    System.out.println("1.Yes\n2.No");
		    int cn1 = s.nextInt();
		    count = cn1;
		}
	}
}
