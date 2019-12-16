// URL: https://codeforces.com/problemset/problem/1272/A

import java.io.*;
import java.util.*;

public class ThreeFriends{
    public static void main(String[] args) {
    int cases;
    Scanner S = new Scanner(System.in);

    cases = S.nextInt();

    for (int z = 0; z<cases ; z++) {
      int a,b,c;
      a = S.nextInt();
      b = S.nextInt();
      c = S.nextInt();

      int max = Math.max(Math.max(a,b),c);
      int min = Math.min(Math.min(a,b),c);
      int mid = (a+b+c) - (max + min);

      if(a == b && b ==c){
        System.out.println(0);
        continue;
      }
      if(min != mid) min++;
      else{
        min++;
        mid++;
      }
      if(min == mid && mid == max){
        System.out.println(0);
        continue;
      }
      if(max != mid) max--;
      else{
        max--;
        mid--;
      }

      System.out.println(Math.abs(max-min) + Math.abs(max-mid) + Math.abs(mid-min ));
  }
}
}
