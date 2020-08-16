// Park Lighting

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
    int a,b;
    std::cin >> a >> b;

    if(a % 2 == 0){
      std::cout << (a/2) * b << '\n';
    }
    else if(b % 2== 0){
      std::cout << (b/2) * a << '\n';
    }
    else{
      std::cout << ((a/2) * b) + (b/2) +1 << '\n';
    }
  }
  return 0;
}
