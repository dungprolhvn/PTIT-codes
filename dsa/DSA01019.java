import java.util.*;

public class DSA01019 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            haHaHa(n);
            t--;
        }
        sc.close();
    }

    public static void haHaHa(int n) {
        n = n - 2;
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append('A');
        }
        while (true) {
            boolean print = true;
            for (int i = 0; i < sb.length() - 1; i++) {
                if (sb.charAt(i) == 'H' && sb.charAt(i + 1) == 'H') {
                    print = false;
                    break;
                }
            }
            if (print)
                System.out.println("H" + sb.toString() + "A");
            int j = n - 1;
            while (j > 0 && sb.charAt(j) != 'A')
                j--; // exclude the first 'A'
            if (j <= 0)
                break;
            sb.setCharAt(j, 'H');
            for (int i = j + 1; i < n; i++) {
                sb.setCharAt(i, 'A');
            }
        }
    }
}
