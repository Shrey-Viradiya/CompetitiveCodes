#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  std::cin >> s;

  int k = s.length();
  for (size_t i = k-1; i >= 0; i--) {
    s+=s[i];
  }

  std::cout << s << '\n';
}
