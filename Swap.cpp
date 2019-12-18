#include <iostream>
#include <chrono>
using namespace std;
using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;
using std::chrono::duration_cast;

int main(int argc, char const *argv[]) {
  long a,b;
  a = 151616516;
  b = 161984136;

  auto start = high_resolution_clock::now();

  for (size_t i = 0; i < 5000000000; i++) {
    /* code */
  }{long t =a;
  a = b;
  b =t;}

  auto end = high_resolution_clock::now();

  std::cout << a << " " <<b << '\n';
  std::cout << duration_cast<milliseconds>(end - start).count() << '\n';

  start = high_resolution_clock::now();

  for (size_t i = 0; i < 5000000000; i++) {
    /* code */
  }{a^=b;
  b^=a;
  a^=b;}
  end = high_resolution_clock::now();
  std::cout << a << " " << b << '\n';
  std::cout << duration_cast<milliseconds>(end - start).count() << '\n';

  return 0;
}
