import java.util.Random;
import java.util.Scanner;

public class Main {

	public void bubbleSort(int[] a) {
	
		int n = a.length;
		
		for(int i=0; i<n-1; i++) {
			for(int j=0;j<n-1; j++) {
				if(a[j]>a[j+1]) {   // for descending order ==  a[j]<a[m]
					int t = a[j];
					a[j]=a[j+1];
					a[j+1] = t;
				}
			}
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
		
		Main m = new Main();
		m.bubbleSort(a);
		
		for(int i=0;i<20;i++) {
			System.out.print(a[i]+" ");
		}
	}
}