// https://codeforces.com/contest/1260/problem/D
// unsolved // problem in test case 4

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  long m,n,k,t;
  cin >> m >> n >> k >> t;

  long tres = t- (n + 1);  // time reserved for person to move with its squad to boss is (n+1)
                          // tres is applied to diffuse all bombs
  long tm = tres/2;  // time tm is half of tres because tm time is for going ahead in the grid and tm is to come back to squad

  // std::cout << tm << '\n';

  long sol[m] = {0};
  for (size_t i = 0; i < m; i++) {
    cin>> sol[i];
  }

  long long maxd = LLONG_MIN;

  for (size_t i = 0; i < k; i++) {
    long l,r,d;
    std::cin >> l >> r >>d;

    if(r<=tm) continue;
    else{
      if(maxd < d) maxd = d;
    }
  }
  // std::cout << maxd << '\n';

  long count = 0;

  for (size_t i = 0; i < m; i++) {
    if(sol[i] >= maxd)
    {
      count++;
    }
  }

  std::cout << count << '\n';
  return 0;
}
