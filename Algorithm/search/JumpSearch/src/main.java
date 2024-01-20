import java.util.Scanner;

public class main {
	
	
	public int jumpSearch(int x, int[] a) {
		
		int n = a.length;
		int m = (int) Math.floor(Math.sqrt(n));
		
		while()
		

		
		 return -1;
	}
	

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int[] a = new int[20];
	
		
		for(int i=0;i<20;i++) {     // input data in array for search
			a[i]=i;
		}
		for(int i=0;i<20;i++) {    
			System.out.print(a[i]+ " ");
		}
		System.out.println();
		int x = input.nextInt();		
		
		main m = new main();
		int result = m.jumpSearch(x,a);
		
		if(result==-1) {
			System.out.println("not found");
		}else {
			System.out.println(result);
		}

	}

}