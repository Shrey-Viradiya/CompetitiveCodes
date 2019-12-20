#include <iostream>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>

#define pb push_back
using namespace std;

int main(int argc, char const *argv[]) {
  long n;std::cin >> n;

  int p=0;
  int id=0;
  // std::cout << l << '\n';
  while(n){

    if(n%10 == 4){
      id+= 1*pow(2,p);
    }
    else{
      id+= 2*pow(2,p);
    }
    p++;
    n/=10;
  }

  std::cout << id << '\n';

  return 0;
}
