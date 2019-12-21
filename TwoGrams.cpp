#include <iostream>
#include <vector>
#include <thread>
#include <cstring>
#include <map>

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
  std::cin >> n;
  string s,ans;
  std::cin >> s;
  map<string,int> m;

  long long max = NINF;

  fo(i,0,n-1){
    string temp = s.substr(i,2);
    m[temp]++;

    if(m[temp] > max){
      ans = temp;
      max = m[temp];
    }
  }

  std::cout << ans << '\n';

  return 0;
}
