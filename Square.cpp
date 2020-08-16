#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while( t-- ){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;

    if( a!=c && a!=d && b!=c && b!=d){
      std::cout << "No" << '\n';
    }
    else if( (a == c && b+d == a) || (a == d && b+c == a) || (b==c && a+d == b) || (b==d && a+c==b) ){
        std::cout << "Yes" << '\n';
    }
    else {
      std::cout << "No" << '\n';
    }
  }
  return 0;
}
