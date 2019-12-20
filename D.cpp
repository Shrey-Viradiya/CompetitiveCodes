#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  int c;
  std::cin >> c;

  long prev = 1000000000;

  for (size_t i = 0; i < c; i++) {
    /* code */
    long w,h;
    std::cin >> w >> h;
    long min = w < h?w:h;
    long max = w > h?w:h;
    if(max <= prev){
      prev = max;
      continue;
    }else if(min <= prev){
      prev = min;
      continue;
    }
      std::cout << "NO" << '\n';
      return 0;


  }
    std::cout << "YES" << '\n';

  return 0;
}
