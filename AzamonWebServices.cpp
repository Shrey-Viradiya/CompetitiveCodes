#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int cases;
  std::cin >> cases;

  for (size_t i = 0; i < cases; i++) {
    string a,b;
    cin >> a >> b;

    if(a.compare(b) < 0){
      std::cout << a << '\n';
      continue;
    }else{
      for (size_t i = 0; i < a.length(); i++) {
        for (size_t j = i+1; j < a.length(); j++) {
          if(a[j] < a[i]){
            char t = a[j];
            a[j] = a[i];
            a[i] = t;

            // a[j] = a[j] ^ a[i];
            // a[i] = a[j] ^ a[i];
            // a[j] = a[j] ^ a[i];

            if (a.compare(b) < 0) {
              std::cout << a << '\n';
              goto result;
            }
            else{
              // a[j] = a[j] ^ a[i];
              // a[i] = a[j] ^ a[i];
              // a[j] = a[j] ^ a[i];
              char t = a[j];
              a[j] = a[i];
              a[i] = t;
            }
          }
        }
      }
      std::cout << "---" << '\n';
    }
    result:
      continue;
    }

  return 0;
}
