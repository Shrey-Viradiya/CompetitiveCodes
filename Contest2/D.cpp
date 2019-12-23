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
  int n;cin >>n;

  long minx,miny,maxx,maxy;

  std::cin >> minx >> miny;
  maxx = minx;
  maxy = miny;

  for (size_t i = 0; i < n-1; i++) {
    long x,y;
    cin >> x >>y;

    if(x>maxx){
      maxx = x;
    }
    if(x<minx){
      minx = x;
    }

    if(y>maxy) maxy = y;
    if(y<miny) miny = y;
  }

  long dx,dy;

  dx = maxx - minx;
  dy = maxy - miny;

  long long max = dx>dy?dx:dy;

  if(max == 0) std::cout << "1" << '\n';
  else std::cout << max*max << '\n';
  return 0;
}
