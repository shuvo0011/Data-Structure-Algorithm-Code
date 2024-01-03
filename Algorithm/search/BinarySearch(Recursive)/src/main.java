import java.util.Scanner;

public class main {
	
	
	public int binarySearch(int x, int[] a, int l, int h) {
		
		if(h>=l) {
			int mid = (l+h)/2;
			//System.out.println(mid);
			if(a[mid]==x) {
				return mid;
			}
			else if(a[mid]<x) {
				return binarySearch(x, a, mid+1, h);
			}else {
				return binarySearch(x, a, l, mid-1);
			}
		}
		
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
		int result = m.binarySearch(x,a,0,a.length-1);
		
		if(result==-1) {
			System.out.println("not found");
		}else {
			System.out.println(result);
		}

	}

}