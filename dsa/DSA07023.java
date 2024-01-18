import java.util.Scanner;
import java.util.Stack;

public class DSA07023 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); sc.nextLine();
        while (t > 0) {
            String line = sc.nextLine();
            Stack<String> st = new Stack<String>();
            String[] lineSplit = line.split(" ");
            for (String s : lineSplit) {
                st.push(s);
            }
            while (!st.empty()) {
                System.out.print(st.pop()+" ");
            }
            System.out.println();
            t--;
        }
        sc.close();
    }
}
