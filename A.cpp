#include <iostream>
#include <vector>
#include <cstring>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  long long aA = 0 , aL=0 , bA = 0 , bL=0;

  int c;
  std::cin >> c;

  for (size_t i = 0; i < c; i++) {
    /* code */
    int t,x,y;
    std::cin >> t  >> x >> y ;
    if(t == 1){
      aA += x;
      aL += y;
    }
    else{
      bA+=x;
      bL+=y;
    }
  }

  if(aA >= ((aA+aL)>>1)) std::cout << "LIVE" << '\n';
  else std::cout << "DEAD" << '\n';
  if(bA >= ((bA+bL)>>1)) std::cout << "LIVE" << '\n';
  else  std::cout << "DEAD" << '\n';

  return 0;
}
