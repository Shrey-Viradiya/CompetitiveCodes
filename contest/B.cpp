#include <iostream>
#include <vector>
#include <thread>
#include <map>
#include <set>
#include <cstring>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// threading function


int main(int argc, char const *argv[]) {
  int n;
  long m;

  std::cin >> n >> m;

  set <int> a,b;

  for (size_t i = 0; i < n; i++) {
    /* code */
    long l;
    std::cin >> l;
    a.insert(l);
  }

  for (size_t i = 0; i < n; i++) {
    /* code */
    long l;
    std::cin >> l;
    b.insert(l);
  }

  int x = 0;
set<int> t;

  while(!a.empty()){


      set<int> :: iterator it= a.end();
      it--;

      if(b.find(((*it) + x)%m) != b.end()){
        t.insert((*it));
        a.erase(*it);
      }

      else{

        x++;

        while(!t.empty()){
          set<int> :: iterator i= t.end();
          i--;
          a.insert((*i));
          t.erase((*i));
        }
      }
    }

    std::cout << x << '\n';

  return 0;
}
