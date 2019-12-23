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

int a,m;

cin >> a >> m;

// a = a%10;

if(m == 0 || a%m == 0){
  std::cout << "Yes" << '\n';
  return 0;
}

int r[m] = {0};


while(a%m != 0){
  if(r[a%m] != 0){
    break;
  }
  else{
    r[a%m] = 1;
    a = a + a%m;
  }
}

if (a%m == 0) {
  std::cout << "Yes" << '\n';
}
else{
std::cout << "No" << '\n';
}

  return 0;
}
