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

  string s = std::to_string(n);
  int count = -1;
  bool done = false;

  while(!done){
    count++;
  for (size_t i = 0; i < s.length(); i++) {
    if(s[i] == '8') {
      if(count != 0) done = true;
      break;
    }
  }
  n++;
  s =  std::to_string(n);
}

  std::cout <<count << '\n';
  return 0;
}
