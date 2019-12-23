#include <iostream>
#include <vector>
#include <cstring>
#include <functional>
#include <thread>

#define pb push_back
using namespace std;

void fun(string s,string &s2){
  for (size_t i = 0; i < s.length() - 2; i++) {
    if(s[i] == s[i+1]){
      if(s[i+1] == s[i+2]){
        if(s[i] == 'z'){
          s[i+1] = 'a';
          continue;
        }
        s[i+1]++;
        continue;
      }
      else{
      if(s[i] == 'z'){
        s[i] = 'a';
        continue;
      }
      if(i!=0){
        s[i] = s[i-1]+1;
        continue;
      }else{
        s[i]++;
        continue;
      }
  }
    }
  }
  s2 = s;
}

int main(int argc, char const *argv[]) {
  string s;
  std::cin >> s;

  if(s.length()>4)
  {
  string s2;

  thread t1(    fun,s.substr(s.length()/2,s.length()),std::ref(s2)  );

  s=s.substr(0,s.length()/2);

  for (size_t i = 0; i < s.length() - 2; i++) {
    if(s[i] == s[i+1]){
      if(s[i+1] == s[i+2]){
        if(s[i] == 'z'){
          s[i+1] = 'a';
          continue;
        }
        s[i+1]++;
        continue;
      }
      else{
      if(s[i] == 'z'){
        s[i] = 'a';
        continue;
      }
      if(i!=0){
        s[i] = s[i-1]+1;
        continue;
      }else{
        s[i]++;
        continue;
      }
  }
    }
  }

  try{
    // code
  }  catch(...){
    t1.join();
    throw;
  }

  t1.join();

  std::cout << s << s2 <<'\n';
}
else{
  for (size_t i = 0; i < s.length() - 2; i++) {
    if(s[i] == s[i+1]){
      if(s[i+1] == s[i+2]){
        if(s[i] == 'z'){
          s[i+1] = 'a';
          continue;
        }
        s[i+1]++;
        continue;
      }
      else{
      if(s[i] == 'z'){
        s[i] = 'a';
        continue;
      }
      if(i!=0){
        s[i] = s[i-1]+1;
        continue;
      }else{
        s[i]++;
        continue;
      }
  }
    }
  }
}

  return 0;
}
