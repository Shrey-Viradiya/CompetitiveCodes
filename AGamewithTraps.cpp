// https://codeforces.com/contest/1260/problem/D
// unsolved // problem in test case 4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  int m,n,k,t;
  cin >> m >> n >> k >> t;

  int tres = t- (n + 1);
  int tm = tres/2;

  // std::cout << tm << '\n';

  int sol[m] = {0};
  for (size_t i = 0; i < m; i++) {
    cin>> sol[i];
  }

  int maxd = -1;

  for (size_t i = 0; i < k; i++) {
    int l,r,d;
    std::cin >> l >> r >>d;

    if(r<=tm) continue;
    else{
      if(maxd < d) maxd = d;
    }
  }
  // std::cout << maxd << '\n';

  int count = 0;

  for (size_t i = 0; i < m; i++) {
    if(sol[i] >= maxd)
    {
      count++;
    }
  }

  std::cout << count << '\n';
  return 0;
}
