// unsolved

import java.io.*;
import java.util.*;

public class AsSimpleasOneandTwo {
  public static void main(String[] args) throws IOException{
    int c;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    c = Integer.parseInt(br.readLine());

    for (int i=0;i<c ;i++ ) {
      String s = new String(br.readLine());
      int cnt = 0;
      List<Integer> x = new ArrayList<Integer>();

      if(s.contains("twone")){
        int j= 0;
        while(j != -1){
          j = s.indexOf("twone",j+5);
          x.add(j+3);
          cnt++;
        }
      }
      if(s.contains("one")){
        int j= 0;
        while(j != -1){
          j = s.indexOf("one",j+3);
          x.add(j+2);
          cnt++;

        }
      }
      if(s.contains("two")){
        int j=0;
        while(j!=-1){
          j = s.indexOf("two",j+3);
          x.add(j+2);
          cnt++;

        }
      }

      System.out.println(cnt);
      for (int l = 0; l < x.size() ; l++) {
        System.out.print(x.get(l) + " ");
      }
      System.out.println();
    }
  }
}
