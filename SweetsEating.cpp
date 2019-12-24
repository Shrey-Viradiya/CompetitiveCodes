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

  int n,m;std::cin >> n>>m;
  int s[n] = {0};
  fo(i,0,n) {
    std::cin >> s[i];
  }

  sort(s, s+n);
  long long sum = 0;
  int k = 0;
  long long temp[m] = {0};
  for (size_t i = 1; i <= n; i++) {
    if(i<=m){
      sum+=s[i-1];
      temp[k] += s[i-1];
      k = (k+1)%m;
    }
    else{


      temp[k] += s[i-1];
      sum+=temp[k];
      k = (k+1)%m;
    }
    std::cout << sum << ' ';
  }

  return 0;
}
