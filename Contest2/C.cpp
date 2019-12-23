#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// threading function


int main(int argc, char const *argv[]) {
  int n;std::cin >> n;

  // std::vector<int> v;
  bool add = true;
  int moves = 0;
  int sum = 0;
  int last;

  for (size_t i = 0; i < n; i++) {
    int t; std::cin >> t;
    sum+= t;
    last = t;
    if(t == 1){
      moves+=1;

      if(add == false) add = true;
    }else if(t==0 && add && sum!=0){
      moves+=1;
      add = false;
    }
  }

  if(sum == 0) cout << "0" << endl;
  else if(last == 0) std::cout << moves -1 << '\n';
  else std::cout << moves << '\n';
  return 0;
}
