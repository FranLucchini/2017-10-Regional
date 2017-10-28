import java.io.*;
import java.util.*;

class cubiertos_linear {
    static public void main(String args[]) throws Exception {
        Scanner in = new Scanner(System.in);
        int T[] = new int[3];
        T[0] = in.nextInt();
        T[1] = in.nextInt();
        T[2] = in.nextInt();

        int C[] = new int[3];
        C[0] = in.nextInt();
        C[1] = in.nextInt();
        C[2] = in.nextInt();

        if (T[0] > C[0]) {
            int temp[] = T;
            T = C;
            C = temp;
        }

        int minCost = 1 << 30;
        for (int i = T[0]; i <= C[0]; ++i)
            minCost = Math.min(minCost, (i - T[0])*T[1] + (C[0] - i)*C[2]);

        System.out.println(minCost);
    }

}
