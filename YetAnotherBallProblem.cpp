// url: https://codeforces.com/problemset/problem/1118/E

#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  int n,k; cin>>n>>k;

  if(n > 1ll*k*(k-1) ){ std::cout << "NO" << '\n'; return 0 ;}
  std::cout << "YES" << '\n';
  int c = 0;
  for (int i = 0; i < n; i++) {
    std::cout << i%k+1 << " " << ((c+=(i%k == 0))+i%k)%k+1 << '\n';
  }

  return 0;
}
