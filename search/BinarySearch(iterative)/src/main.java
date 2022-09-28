import java.util.Scanner;

public class main {
	
	
	public int binarySearch(int x, int[] a, int l, int h) {
		
		int mid = (l+h)/2;
		//System.out.println(mid);
		while(x!=a[mid]) {
			if(l>=h) {
				return 0;
			}
			//System.out.println(mid);
			if(x>a[mid]) {
				l = mid+1;
			}else {
				h=mid-1;
			}
			mid = (l+h)/2;
		}
		
		return mid;
	}
	

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int[] a = new int[20];
		
		
		for(int i=0;i<20;i++) {     // input data in array for search
			a[i]=i;
		}
		for(int i=0;i<20;i++) {     // input data show
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
		int x = input.nextInt();
		
		main m = new main();
		int result = m.binarySearch(x,a,0,a.length-1);
		
		if(result==0) {
			System.out.println("not found");
		}else {
			System.out.println(result);
		}

	}

}
