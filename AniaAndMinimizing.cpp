#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,k;
  std::cin >> n >> k;
  string s;
  std::cin >> s;

  if(n == 1 && k == 1){
    std::cout << "0" << '\n';
    return 0;
  }

  string res;
  if(s[0] != '1' && k!=0){
    res = '1';
    k--;
  }
  else{
    res = s[0];
  }

  for (size_t i = 1; i < n; i++) {
    if(s[i] != '0' && k!=0){
      res += '0';
      k--;
    }
    else{
      res+= s[i];
    }
  }

  std::cout << res << '\n';
  return 0;
}
