// https://codeforces.com/group/t5l3p8XLes/contest/263436/problem/B
#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  int n,m;
  cin >> n >> m;
  std::vector<string> v;

  for (size_t i = 0; i < n; i++) {
    /* code */
    string x;
    cin >> x;
    v.pb(x);
  }

  std::vector<std::vector<int>> v1;

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      if (v[i][j] == '*') {
        std::vector<int> v2;
        v2.pb(i+1);
        v2.pb(j+1);
        v1.pb(v2);
      }
    }
  }

  if(v1[0][0] == v1[1][0] ){
    std::cout << v1[2][0] << ' ';
  }else if(v[0][0] == v1[2][0] ){
    std::cout << v1[1][0] << ' ';
  }else if(v1[2][0] == v1[1][0] ){
    std::cout << v1[0][0] << ' ';
  }
  if(v1[0][1] == v1[1][1] ){
    std::cout << v1[2][1] << ' ';
  }else if(v1[0][1] == v1[2][1] ){
    std::cout << v1[1][1] << ' ';
  }else if(v1[2][1] == v1[1][1] ){
    std::cout << v1[0][1] << ' ';
  }



  return 0;
}
