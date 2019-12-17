// URL: https://codeforces.com/problemset/problem/1280/A
// solved


#include <iostream>
#include <string>
#define MOD 1000000007
using namespace std;
int main(){

  int cases;
  cin>>cases;
  for (size_t i = 0; i < cases; i++) {
     int n;
     string s;
     int cur=0,len,rcnt;
     cin>>n>>s;
     len=s.length();
     string right;
     while(cur < n)
     {
         cur++;
         int c=s[cur-1]-'0';
         if(c==1)
             continue;
         if(s.length() < n)
             right=s.substr(cur,s.length()-cur);
         rcnt=(len-cur+MOD)%MOD;
         c--;
         while(c--)
         {
             if(s.length() < n)
                 s+=right;
             len=(len+rcnt)%MOD;
         }
     }
     cout<<len<<endl;
  }
}
