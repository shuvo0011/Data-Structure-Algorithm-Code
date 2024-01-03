import java.util.Random;
import java.util.Scanner;

public class Main {

	public void insertionSort(int[] a) {
	
		int n = a.length;
//		System.out.println(j);
		for(int i=0; i<n-1; i++) {
			int j=i+1;
			if(a[i]>a[j]) {
				while(j>0 && a[j]<a[j-1]) {
					int t = a[j];
					a[j]= a[j-1];
					a[j-1]=t;
					j--;
				}
			}
			
		}
	}
	
	
	
//	 below code is also right .. if we not check if(a[i]>a[j] it also true .
	
//	public void insertionSort(int[] a) {
//		
//		int n = a.length;
//
//		
//		for(int i=0; i<n-1; i++) {
//			int j=i+1;
//			System.out.println(j);
//			while(j>0 && a[j]<a[j-1]) {
//				int t = a[j];
//				a[j]= a[j-1];
//				a[j-1]=t;
//				j--;
//			}			
//		}
//	}
//	
	
	
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