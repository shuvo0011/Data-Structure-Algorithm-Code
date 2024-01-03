import java.util.Random;
import java.util.Scanner;

public class Main {

	public void insertionSort(int[] a) {
	
		int n = a.length;
//		System.out.println(j);
		for(int i=1; i<n; i++) {
			int t = a[i];
			int j=i-1;
			while(j>=0 && t<a[j]) {
				a[j+1]= a[j];
				j--;
			}
			a[j+1]=t;
		}
	}
	
	
	

	
	public static void main(String[] args) {
		
		Random random = new Random();

		int t = 20;
		int[] a = new int[t];
		
		for(int i=0;i<t;i++) {
			a[i] = random.nextInt(20);
		}
		
		for(int i=0;i<t;i++) {
			System.out.print(a[i]+" ");
		}
		System.out.println();
		
		Main m = new Main();
		m.insertionSort(a);
		
		for(int i=0;i<t;i++) {
			System.out.print(a[i]+" ");
		}
	}
}