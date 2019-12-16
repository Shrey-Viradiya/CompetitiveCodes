#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int cases;
  cin >> cases;

  for (size_t i = 0; i < cases; i++) {
    int a,b,c;
    cin >> a >> b >> c;
    int  x = max(max(a,b),c);
    int z = min(min(a,b),c);
    int y = (a+b+c)-(x+z);

    if(a==b && a==c) { cout << 0 << endl; continue;}
    if(z!=y) z++;
    else {z++; y++;}
    if(x==y && x==z) { cout << 0 << endl; continue;}
    if(x!=y) x--;
    else {x--; y--;}

    cout << (x-y)+(x-z)+(y-z) << endl;
  }
  return 0;
}
