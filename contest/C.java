import java.util.*;
public class C{
  public static void main(String[] args) {
    int n,k;
    String s;

    Scanner S = new Scanner(System.in);

    n = S.nextInt();
    k = S.nextInt();
    S.flush();
    s = S.nextLine();

    boolean change = false;

    StringBuffer ans = new StringBuffer();

    for (int i=0;i<k ;i++ ) {
      if(s.charAt(i) == s.charAt(i+k)){
        ans.append(s.charAt(i));
      }
      else{
        if(s.charAt(i) != '9')  ans.append(s.charAt(i) +1);
        else {
          char temp  ;
          temp = ans.charAt(ans.length()-1);
          ans.deleteCharAt(ans.length()-1);
          ans.append(temp+1);
 ans.append('0');}
      }
    }

    while(ans.length() < n)
    {
      ans.append(ans);
    }
  }
}
