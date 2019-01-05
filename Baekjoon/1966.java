import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int test_case = sc.nextInt();
		
		for(int t = 0; t < test_case; t++) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			
			List<Integer> priority = new LinkedList<Integer>();
			List<Integer> index = new LinkedList<Integer>();
			
			for(int i = 0; i < n; i++) {
				priority.add(sc.nextInt());
				index.add(i);
			}
			
			int count = 0;
			while(!priority.isEmpty()) {
				int resultIndex = -1;
				if(Collections.max(priority) == priority.get(0)) {
					resultIndex = index.get(0);
					priority.remove(0);
					index.remove(0);
					count++;
				} else {
					priority.add(priority.get(0));
					priority.remove(0);
					index.add(index.get(0));
					index.remove(0);
				}
				if(resultIndex == m) {
					System.out.println(count);
					break;
				}
			}
		}
		sc.close();
	}

}
