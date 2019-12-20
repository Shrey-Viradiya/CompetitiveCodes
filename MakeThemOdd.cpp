// make them odd
// url: https://codeforces.com/contest/1277/problem/B

#include <iostream>
#include <vector>
#include <cstring>
#include <set>
#include <iterator>


#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {

  int t;
  cin >> t;

  for (size_t i = 0; i < t; i++) {
    int k;
    int count = 0;
    std::cin >> k;
    set <int> s;

    for (size_t j = 0; j < k; j++) {
      long l;
      std::cin >> l;
      s.insert(l);
    }

    while(!s.empty()){
      set<int> :: iterator it= s.end();
      it--;
      if((*it) & 1 == 1){
        s.erase((*it));
      }
      else{
        s.insert((*it) >> 1);
        s.erase((*it));
        count++;
      }
    }

    std::cout << count << '\n';
  }
  return 0;
}
