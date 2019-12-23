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

  long a,k,q;
  std::cin >> a >> k>>q;
  long t[1000000];

  for (size_t i = 0; i < a; i++) {
    long x,y;
    cin >> x >> y;

    fo(j,x,y+1) t[j]++;
  }

  for (size_t i = 0; i < q; i++) {
    long x,y,c = 0;
    cin>>x>>y;

    fo(j,x,y+1) {
      if(t[j] >= k) c++;
    }
    std::cout << c << '\n';
  }
  return 0;
}
