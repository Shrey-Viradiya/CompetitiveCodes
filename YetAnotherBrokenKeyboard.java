import java.io.*;
import java.util.*;

public class Name {
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n,k;
    n = Integer.parseInt(br.readLine());
    k = Integer.parseInt(br.readLine());

    String str = br.readLine();
    String na = new String (s);
    StringBuffer s2 = new StringBuffer();

    for (int z = 0;z<k ;z++ ) {
      char ch= Integer.parseInt(br.readLine());
      s2.append(ch);
      na = na.replaceAll(ch,"");
    }

    
  }
}
