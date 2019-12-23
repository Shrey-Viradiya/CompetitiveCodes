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

  int x,y;
  std::cin >> x >> y;

  for (size_t i = 0; i < x; i++) {
    for (size_t j = 0; j < x; j++) {
      if(i==j)  std::cout << y << ' ';
      else std::cout << "0" << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}
