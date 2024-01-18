import java.util.*;

public class DSA01024 {
    private String[] name;
    private int n, k;
    private int[] c;
    
    public DSA01024(int n, int k, TreeSet<String> s) {
        this.name = s.toArray(new String[0]);
        this.n = name.length;
        this.k = k;
        this.c = new int[k + 1];
        c[0] = 0;
    }

    // Print name combination based on combination array c
    void printComb() {
        for (int i = 1; i <= k; i++) {
            System.out.print(name[c[i] - 1] + " ");
        }
        System.out.println();
    }

    // Try
    void Try(int i) {
        for (int j = c[i-1] + 1; j <= (n - k + i); j++) {
            c[i] = j;
            if (i == k) {
                printComb();
            }
            else {
                Try(i + 1);
            }
        }
    }

    // Main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        TreeSet<String> s = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            String tmp = sc.next();
            s.add(tmp);
        }
        DSA01024 solution = new DSA01024(n, k, s);
        solution.Try(1);
        sc.close();
    }
}
