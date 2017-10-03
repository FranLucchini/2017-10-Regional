/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */
import java.util.*;
import java.io.*;

class nlehmann_naive {
    static public void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        long meblinsX[] = new long[N];
        long meblinsY[] = new long[N];
        for (int i = 0; i < N; ++i) {
            st = new StringTokenizer(br.readLine());
            meblinsX[i] = Long.parseLong(st.nextToken());
            meblinsY[i] =  Long.parseLong(st.nextToken());
        }

        long r = 0;
        while(true) {
            long count = 0;
            for (int i = 0; i < N; ++i)
                if(r*r >= dist2(meblinsX[i], meblinsY[i]))
                    count++;
            if (count >= K)
                break;
            r++;
        }
        System.out.println(r);
    }

    static long pow2(long a) {
        return a * a;
    }

    static long dist2(long x, long y) {
        return pow2(x) + pow2(y);
    }
}
