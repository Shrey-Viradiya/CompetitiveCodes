#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// inline string NumLet(int num){
//   string col="";
//   while(num>0){
//     int y = (num-1)%26;
//     col = (char)(y+65) + col;
//     num = (num - (y +1))/26;
//   }
//   return col;
// }

inline string NumLet(int c){
  string s1;
  int i=0;
  while(c>0)
  {
      int x = c%26;
      if(x==0)
      {
          s1.push_back('Z');
          c = (c/26)-1;
      }
      else
      {
          s1.push_back('A' + (x-1)) ;
          c = c/26;
      }
  }
  reverse(s1.begin(), s1.end());
  return s1;
}

inline int LetNum(string c){
  int c1 = 0;
  fo(i,0,c.length())
  {
      c1 *= 26;
      c1 += c[i] - 'A' + 1;
  }

  return c1;
}

int main(int argc, char const *argv[]) {

  TESTCASE{
    string s;
    std::cin >> s;
    regex r("R([[:digit:]]+)C([[:digit:]]+)");
    smatch ma;

    if(regex_search(s,ma,r)){
      int o = 0;
      string shit = ma[2];
      o=stoi(shit);

      std::cout << NumLet(o) << ma[1] << '\n';
    }
    else{
      regex rx("([A-Z]*)([[:digit:]]+)");
      smatch ma2;

      regex_search(s,ma2,rx);

      std::cout << "R" << ma2[2] << "C" << LetNum(ma2[1]) << '\n';
    }

  }

  return 0;
}
