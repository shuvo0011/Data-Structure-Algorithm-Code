package data;

public class main {

	public static void main(String[] args) {
		
		int n[]= new int[20000];
		for (int i=0; i<13000;i++) {
			//System.out.println(i);
			n[i]=i;
		}
		
		int v=0;
		
		
		for(int x : n){
			if(x == 11000){
		        v = x;
		        break;
		    }
		}

		System.out.println(v);

	}

}
