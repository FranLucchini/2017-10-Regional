import java.util.*;
import java.lang.*;
import java.io.*;

public class CorrectBernardo {
  public static boolean f(int a, int b){
    if(a == 3 || a == 4 || a == 7) return false;
    if(a == 1 || a == 2 || a == 5 || a == 0 || a == 8) return (a == b);
    return (a == 6 && b == 9) || (a == 9 && b == 6);
  }
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    String[] sarray = br.readLine().split(" ");
    int[] array = new int[n];
    for (int i = 0; i < n; ++i ) {
      array[i] = Integer.parseInt(sarray[i]);
    }
    boolean invertible = true;
    for(int i = 0; i < n; ++i){
      if(!f(array[i], array[n-1-i])) {invertible = false; break;}
    }
    System.out.println((invertible ? "Mauricio" : "Camilo"));
  }
}
