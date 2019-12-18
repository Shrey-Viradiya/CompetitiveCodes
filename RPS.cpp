#include <iostream>
#include <vector>
#include <cstring>
#include <string>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<string> v;
  int x[3] = {0,0,0};
  string s;
  for (size_t i = 0; i < 3; i++) {
    cin>>s;
    v.pb(s);
  }

  for (size_t i = 0; i < 3; i++) {
    for (size_t j = i+1; j < 3; j++) {
      if (v[j] == "rock" && v[i] == "paper") {
        x[i]++;
      }else if (v[j] == "paper" && v[i] == "scissors") {
        x[i]++;
      }else if (v[j] == "scissors" && v[i] == "rock") {
        x[i]++;
      }else if (v[i] == "rock" && v[j] == "paper") {
        x[j]++;
      }else if (v[i] == "paper" && v[j] == "scissors") {
        x[j]++;
      }else if (v[i] == "scissors" && v[j] == "rock") {
        x[j]++;
      }
    }
  }

  if(x[0] == 2) std::cout << "F" << '\n';
  else if(x[1] == 2) std::cout << "M" << '\n';
  else if(x[2] == 2) std::cout << "S" << '\n';
  else std::cout << "?" << '\n';

  return 0;
}
