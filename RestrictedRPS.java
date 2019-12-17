// URL: https://codeforces.com/problemset/problem/1245/B
// solved

import java.util.*;

public class RestrictedRPS{
  public static void main(String[] args) {
    int cases;
    Scanner S = new Scanner(System.in);

    cases = S.nextInt();

    for (int i=0 ;i<cases ; i++ ) {
      int a,b,c,n;
      String s;

      n = S.nextInt();
      a = S.nextInt();
      b = S.nextInt();
      c = S.nextInt();
      s = S.next();
      int win = 0;

      StringBuffer ans = new StringBuffer(s.length());
      for (int k = 0; k < s.length() ; k++) {
        if(s.charAt(k) == 'R'){
            if(b != 0){
              ans.append('P');
              b--;
              win++;
            }
            else {ans.append('?');}
        }

        if(s.charAt(k) == 'P'){
          if(c != 0){
            ans.append('S');
            c--;
            win++;
          }
          else{ans.append('?');}
        }

        if(s.charAt(k) == 'S'){
          if(a != 0){
            ans.append('R');
            a--;
            win++;
          }
          else{ans.append('?');}
        }
      }

      if(win >= (n/2) + n%2){
        System.out.println("YES");
        for(int z = 0;z < ans.length(); z++){
          if(ans.charAt(z) != '?'){
            System.out.print(ans.charAt(z));
            continue;
          }
          else{
            if(a !=0){
              System.out.print('R');
              a--;
              continue;
            }else if(b!=0){
              System.out.print('P');
              b--;
              continue;
            }
            else{
              System.out.print('S');
              c--;
              continue;
            }
          }
        }
        System.out.println();
      }
      else{
        System.out.println("NO");
      }

    }
  }
}
