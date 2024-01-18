import java.util.*;

public class DSA03001 {
    private final int[] money = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};


    int change(int amount) {
        int count = 0;
        int i = 9;
        while (amount > 0) {
            if (amount < money[i]) {
                i--;
            }
            count += (amount / money[i]);
            amount %= money[i];
        }
        return count;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        DSA03001 solution = new DSA03001();
        while (t>0) {
            int n = sc.nextInt();
            System.out.println(solution.change(n));
            t--;
        }
        sc.close();
    }
}