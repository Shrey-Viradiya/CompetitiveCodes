#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define int long long

using namespace std;

// threading function


signed main(int argc, char const *argv[]) {

  TESTCASE{
    int A,B;
    std::cin >> A>>B;


      int n=0;
      int W = B;
      while(B>0){
        n++;
        B/=10;
      }
      int nines = 9;
      int p = n;
      p--;
      while(p){
        nines = 10*nines+9;
        p--;
      }
      if(nines > W){
        n = n-1;
      }

      std::cout << A*n << '\n';
    }


  return 0;
}
