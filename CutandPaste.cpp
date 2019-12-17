// URL: https://codeforces.com/problemset/problem/1280/A
// unsolved


#include <iostream>
#include <string>
using namespace std;
int main(){

  int cases;
  cin>>cases;
  for (size_t i = 0; i < cases; i++) {
    int x;
    string s;
    long long len = 0;

    cin>>x>>s;

    len = 0;

    for (int l = 1; l <= x; l++) {
      if(len<x){
       string c;
       c = s.substr(l);
       s = s.substr(0,l);
       for (int k = 0; k < s[l-1] - 48 ; k++) {
         s += c;
         if(s.length() >= x){
           len = (l + ((s[l-1] - 48)* c.length())) % (1000000007);
           break;
         }
         len = s.length();
       }

     }
     else{
       len = (l + ((s[l-1] - 48)* (len-l))) % (1000000007);
     }
     // len = len % (1000000007);
    }

    // len = len % (1000000007);
    std::cout << len << '\n';
  }
}
