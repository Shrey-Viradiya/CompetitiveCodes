#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;


int main(int argc, char const *argv[]) {
  TESTCASE{
    float n,d;
    std::cin >> n>>d;

    if(n==d){
      std::cout << "YES" << '\n';
      continue;
    }
    int min = INT_MAX;

    for (int x = 0; x < n; x++) {

      if( x + ceil(d / (x + 1)) <= min){
        min = x + ceil(d / (x + 1));
      }
    }

    if(min <= n){
      std::cout << "YES" << '\n';
    }
    else{
      std::cout << "NO" << '\n';
    }



  }

  return 0;
}
