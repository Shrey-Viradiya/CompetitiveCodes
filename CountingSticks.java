// URL: https://codeforces.com/problemset/problem/394/A

import java.io.*;

public class CountingSticks {
  static String ss(int x2){
    StringBuffer x = new StringBuffer();
    for (int i=0; i<x2; i++) {
      x.append("|");
    }
    return x.toString();
  }

  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    String x = br.readLine();
    String x2[] = x.split("[+=]");
    int num[] = new int[x2.length];

    for (int i=0; i<x2.length; ++i ) {
      num[i] = x2[i].length();
    }
    int count = 0;

    if((num[0]) + num[1]  == (num[2])) {
      System.out.println(x);
      count++;
    }

    if((num[0] + 1) + num[1]  == (num[2] - 1)) { System.out.println( (ss(num[0]+1)) + "+" + ss(num[1]) + "=" +  (ss(num[2]-1)) );
        // System.out.println((ss(num[0])) + "+" + ss(num[1]+1) + "=" +  (ss(num[2]-1)));
        count++;
        return ;
    }
    if((num[0] - 1) + num[1]  == (num[2] + 1)) {
      if(num[0] - 1 == 0){
        System.out.println((ss(num[0])) + "+" + ss(num[1]-1) + "=" +  (ss(num[2]+1)));
      }
      else{
      System.out.println( (ss(num[0]-1)) + "+" + ss(num[1]) + "=" +  (ss(num[2]+1)) );
    }
      //
      count++;
      return;
  }


    if(count == 0)  System.out.println("Impossible");
  }
}
