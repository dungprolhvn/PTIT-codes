import java.util.*;
public class DSA01007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t>0) {
            int n = sc.nextInt();
            genAB(n);
            t--;
        }
        sc.close();
    }
    public static void genAB(int n) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append('A');
        }
        while (true) {
            System.out.print(sb.toString() + " ");
            int j = n - 1;
            while (j >= 0 && sb.charAt(j) != 'A') j--;
            if (j < 0) break;
            sb.setCharAt(j, 'B');
            for (int i = j + 1; i < n; i++) {
                sb.setCharAt(i, 'A');
            }
        }
        System.out.println();   
    }
}
