// Misha and Changing Handles
// URl: https://codeforces.com/group/t5l3p8XLes/contest/263221/problem/D
#include <vector>
#include <iostream>
#define pb push_back

using namespace std;

int main(){
  vector<vector<string>> v;

  int n;
  cin >> n;

  string x,y;
  cin >>x>>y;
  vector<string> v3;
  v3.pb(x);
  v3.pb(y);
  v.pb(v3);

  for (size_t i = 1; i < n; i++) {
    string t1,t2;
    int ap = 0;
    cin >> t1 >> t2;

    for(auto it = v.begin() ; it!=v.end(); it++){
      if((*it).back() == t1){
        (*it).pop_back();
        (*it).pb(t2);
        ap = 1;
      }
    }

    if(ap == 0){
      vector<string> v2;
      v2.pb(t1);
      v2.pb(t2);
      v.pb(v2);
    }
  }
  std::cout << v.size() << '\n';

  for(auto it = v.begin();it!=v.end();it++){
    for (auto i = (*it).begin(); i < (*it).end(); i++) {
      std::cout << *i << " ";
    }
    std::cout << '\n';
  }


}
