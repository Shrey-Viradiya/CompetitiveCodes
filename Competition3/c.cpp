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
  int n,m;
  std::cin >> n >> m;

  int sum = pow(n,m);

  while(m!=0){
    sum += (int)((--m)*pow(--n,m)) % 1000000007;
  }

  // sum = sum%1000000007;
  std::cout << sum << '\n';
  return 0;
}
