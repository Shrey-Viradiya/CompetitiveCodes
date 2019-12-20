import java.util.*;

public class c{
  public static void main(String[] args) {
    String s;
    Scanner sc = new Scanner(System.in);

    s = sc.nextLine();

    int k =s.length();

    StringBuffer s2 = new StringBuffer(s);

    for (int i=k-2; i>=0;i-- ) {
      s2.append(s.charAt(i));
    }

    System.out.println(s2.toString());
  }
}
