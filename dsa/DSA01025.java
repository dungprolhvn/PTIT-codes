import java.util.*;
public class DSA01025 {
    public static void hoangGiaPTIT(int n, int k) {
        int[] c = new int[k];
        for (int i = 0; i < k; i++) c[i] = i;

        while (true) {
            for (int i = 0; i < k; i++) {
                System.out.print((char) (c[i] + 'A'));
            }
            System.out.println();
            int i = k - 1;
            while (i >= 0 && c[i] > (n - 1 - k + i)) i--;
            if (i < 0) break;
            c[i] += 1;
            for (int j = i + 1; j < k; j++) {
                c[j] = c[i] + j - i;
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t>0) {
            int n = sc.nextInt(), k = sc.nextInt();
            hoangGiaPTIT(n, k);
            t--;
        }
        sc.close();
    }
}
