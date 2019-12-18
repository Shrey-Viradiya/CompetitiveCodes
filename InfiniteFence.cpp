#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int cases;
  std::cin >> cases;

  for (size_t i = 0; i < cases; i++) {
    long r,b,k;
    bool x = false;
    std::cin >> r >> b>>k;

    // long z = r +k;
    //
    // if(z <= b)
    // {
    //   std::cout << "REBEL" << '\n';
    // }
    // else{
    //   std::cout << "OBEY" << '\n';
    // }
    if(k == 1){
      std::cout << "REBEL" << '\n';
    }

    int min = r < b ? r : b;
    int max = r < b ? b : r;
    if((max - __gcd(max,min) -1) / min+1 >= k){
      std::cout << "REBEL" << '\n';
    }
    else{
      std::cout << "OBEY" << '\n';
    }

  }
  return 0;
}
