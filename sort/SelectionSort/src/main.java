import java.util.Random;
import java.util.Scanner;


public class main {

	
	public void selectionSort(int[] a) {
		
		int n = a.length;
		
		for(int i=0; i<n; i++) {
			int m=i;
			for(int j=i+1;j<n; j++) {
				if(a[j]<a[m]) {   // for descending order ==  a[j]>a[m]
					m=j;
				}
			}
			
			int t = a[i];
			a[i]=a[m];
			a[m] = t;
		}
		
	}
	
	
	
	
	public static void main(String[] args) {
		
		Random random = new Random();
		
		int[] a = new int[20];
		
		for(int i=0;i<20;i++) {
			a[i] = random.nextInt(20);
		}
		
		for(int i=0;i<20;i++) {
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
		main m = new main();
		m.selectionSort(a);
		
		for(int i=0;i<20;i++) {
			System.out.print(a[i]+" ");
		}
		
	}

}
