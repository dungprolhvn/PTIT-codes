import java.util.*;

public class DSA01006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            genRevPerm(n);
            System.out.println();
            t--;
        }
        sc.close();
    }
    public static void genRevPerm(int n) {
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = n - i;
        }
        while (true) {
            for (int i = 0; i < n; i++) {
                System.out.print(p[i]);
            }
            System.out.print(" ");
            int j = n - 2;
            while (p[j] < p[j + 1]) {
                j--;
                if (j < 0)
                    break;
            } 
            if (j < 0) break;
            int k = n - 1;
            while (p[j] < p[k]) k--;
            int tmp = p[j];
            p[j] = p[k];
            p[k] = tmp;
            int s = j + 1, e = n - 1;
            while (s < e) {
                tmp = p[s];
                p[s] = p[e];
                p[e] = tmp;
                s++; e--;
            }
        }
    }
}