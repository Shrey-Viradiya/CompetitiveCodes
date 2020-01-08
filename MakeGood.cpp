#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// threading function


int main(int argc, char const *argv[]) {
  TESTCASE{
    int n;
    std::cin >> n;
    long long sum = 0ll;
    long long x = 0ll;
    for (size_t i = 0; i < n; i++) {
      long long p;
      std::cin >> p;
      sum+=p;
      if(i==0) x = p;
      else  x^=p;
    }
    // if(x == sum/2){
    //   std::cout << "0\n" << '\n';
    // }
    // else{
      std::cout << "2" << '\n';
      std::cout << x << " " << (x+sum) << '\n';
    // }
  }
  return 0;
}
