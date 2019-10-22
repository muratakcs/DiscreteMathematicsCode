public class Counter {
	public static void main(String [] args) {
		int counter = 0;
		for(int i=0; i<30; i++) {
			for(int j=0; j<i-2; j++) {
				for(int k=0; k<j-3; k++) {
					counter++;
					System.out.printf("%d: %d %d %d\n",counter,i,j,k);
				}
			}
		}
	}
}
