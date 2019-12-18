#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  std::cin >> s;

  for (size_t i = 0; i < s.length() - 2; i++) {
    if(s[i] == s[i+1]){
      if(s[i+1] == s[i+2]){
        if(s[i] == 'z'){
          s[i+1] = 'a';
          continue;
        }
        s[i+1]++;
        continue;
      }
      else{
      if(s[i] == 'z'){
        s[i] = 'a';
        continue;
      }
      if(i!=0){
        s[i] = s[i-1]+1;
        continue;
      }else{
        s[i]++;
        continue;
      }
  }
    }
  }

  std::cout << s << '\n';

  return 0;
}
