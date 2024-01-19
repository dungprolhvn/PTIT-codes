import java.util.*;

public class DSA02005 {
    private String s;
    private int n;
    private int[] p;
    private int[] chose;
    public DSA02005(String s) {
        this.s = s;
        this.n = s.length();
        this.p = new int[n];
        this.chose = new int[n];
    }


    private void printResult() {
        for (int i = 0; i < n; i++) {
            System.out.print(s.charAt(p[i]));
        }
        System.out.print(" ");
    }


    private void Try(int i) {
        for (int j = 0; j < n; j++) {
            if (chose[j]==0) {
                p[i] = j;
                chose[j] = 1;
                if (i == n - 1) {
                    printResult();
                }
                else {
                    Try(i + 1);
                }
                chose[j] = 0;
            }
        }
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            String s = sc.next();
            DSA02005 solve = new DSA02005(s);
            solve.Try(0);
            System.out.println();
            t--;
        }
        sc.close();
    }
}
