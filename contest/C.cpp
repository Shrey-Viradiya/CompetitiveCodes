#include <iostream>
#include <vector>
#include <thread>
#include <map>
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

int n,k;cin >> n >>k;
string s;
std::cin >> s;

string ans = "";

for (size_t i = 0; i < k; i++) {
  /* code */
  if(s[i] == s[i+k] || (i+k) >=n){
    ans += s[i];
  }
  else{
    // if(ans[i-2] == '9') ans[i-3]++;
    // ans+=(s[i]+1);

    ans+= s[i];
    i++;
    if(s[i]!='9')  ans+= s[i] + 1;
    else{
      i--;
      ans[i]++;
      ans+='0';
    }
  }
}

while(ans.length() < n){
  ans+=ans;
}

ans = ans.substr(0,n);

std::cout << ans << '\n';
}
