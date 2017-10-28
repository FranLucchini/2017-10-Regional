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
      Scanner in = new Scanner(System.in);
      int D, W;
      D = in.nextInt();
      W = in.nextInt();

      W -= 1;
      int business_days = 0;
      int total_days = 0;
      if (W == 5 || W == 6) {
          total_days += 7 - W;
          W = 0;
      }
      while(business_days < D) {
          if (W < 4 || W == 6)
              business_days += 1;
          total_days += 1;
          W = (W + 1) % 7;
      }
      System.out.println(total_days);
  }
}
