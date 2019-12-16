// URL: https://codeforces.com/problemset/problem/1245/B

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
            else if( a !=0){
              ans.append('R');
              a--;
            }
            else{
              c--;
              ans.append('S');
            }
        }

        if(s.charAt(k) == 'P'){
          if(c != 0){
            ans.append('S');
            c--;
            win++;
          }
          else if( a !=0){
            ans.append('R');
            a--;
          }
          else{
            b--;
            ans.append('P');
          }
        }

        if(s.charAt(k) == 'S'){
          if(a != 0){
            ans.append('R');
            a--;
            win++;
          }
          else if( b !=0){
            ans.append('P');
            b--;
          }
          else{
            c--;
            ans.append('S');
          }
        }
      }

      if(win >= (n/2) + 1){
        System.out.println("YES");
        System.out.println(ans);
      }
      else{
        System.out.println("NO");
      }

    }
  }
}
