#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  int a,b;std::cin >> a >> b;
  int c = 0;

  while(a<=b){
    c++;
    a*=3;
    b*=2;
  }

  std::cout << c << '\n';

  return 0;
}
