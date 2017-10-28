import java.util.*;
import java.io.*;

class ralonso {
    static public void main(String args[]) throws Exception {
        Scanner in = new Scanner(System.in);
        int w;
        long d, r = 0L;
        d = in.nextLong();
        w = in.nextInt();
        if (--w > 4L) {
            r += 7L - w;
            w = 0;
        }
        r += d + (w + d) / 5L * 2L;
        System.out.println(r);
    }
}
