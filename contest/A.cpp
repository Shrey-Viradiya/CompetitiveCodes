#include <iostream>
#include <vector>
#include <thread>
#include <map>
#include <cstring>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// threading function


int main(int argc, char const *argv[]) {
  int n;std::cin >> n;

  if(n&1){
    std::cout << n+9 << " " << 9 << '\n';
  }
  else{
    std::cout << n+4 << " " << 4 << '\n';
  }

  return 0;
}
