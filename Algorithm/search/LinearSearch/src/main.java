import java.util.Scanner;

public class main {

	
	public int linearSearch(int x,int[] a) {
		
		int index=0;
		
		for(int i=0;i<a.length;i++) {
			if(x==a[i]) {
				index = i;
			}
		}
		
		return index;
	}
	
	public static void main(String[] args) {
	
		Scanner input = new Scanner(System.in);
		
		int[] a = new int[20];
		
		int x = input.nextInt();
		
		for(int i=0;i<20;i++) {     // input data in array for search
			a[i]=i;
		}
		
		main m = new main();
		
		int index = m.linearSearch(x, a);
		
		System.out.println(index);
		
		
		
	}

}
