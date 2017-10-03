import java.util.*;
import java.io.*;

class nlehmann {
    public static void main(String args[]) throws Exception {
        Scanner in = new Scanner(System.in);
        int T, PT, RT;
        T = in.nextInt();
        PT = in.nextInt();
        RT = in.nextInt();

        int C, PC, RC;
        C = in.nextInt();
        PC = in.nextInt();
        RC = in.nextInt();

        if (T < C) System.out.println((C - T) * Math.min(PT, RC));
        else System.out.println((T - C) * Math.min(PC, RT));
    }
}
