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

  TESTCASE{
    int r,c;cin>>r>>c;
    // bool isALine = false;
    int line = -1;
    bool atEdge = false;
    bool atCor = false;
    bool isA = false;
    bool isP = false;

    char g[r][c];

    fo(i,0,r){
      fo(j,0,c){
        std::cin >> g[i][j];

        if(g[i][j] == 'A') isA = true;
        if(g[i][j] == 'P') isP = true;

        if((i == 0 || i == r-1 || j == 0 || j == c-1) && g[i][j] == 'A' ) atEdge = true;
        if(((i == 0 || i == r-1) && (j == 0 || j == c-1)) && g[i][j] == 'A' ) atCor = true;

      }

      // isALine = true;
      int temp;
      temp = line;
      line = i;

      if(temp != 0) {
        fo(j,0,c){
          if(g[i][j] == 'P'){
            // isALine = false;
            line = temp;
            break;
          }
        }
      }
      else{
        line = temp;
      }

    }

    // bool isALine2 = false;
    int line2 = -1;


    fo(i,0,c){
      // isALine2 = true;
      int temp;
      temp = line2;
      line2 = i;


      if(temp!= 0) {
        fo(j,0,r){
            if(g[j][i] == 'P') {
              // isALine2 = false;
              line2 = temp;
              break;
            }
        }
      }
      else{
        line2 = temp;
      }


    }


    // results

    if(!isA)  std::cout << "MORTAL" << '\n';
    else if(!isP) std::cout << "0" << '\n';
    else if((line == 0 || line == r-1)) std::cout << "1" << '\n';
    else if((line2==0||line2==c-1)) std::cout << "1" << '\n';
    else if(line!=-1 || line2!=-1) std::cout << "2" << '\n';
    else if(atCor) std::cout << "2" << '\n';
    else if(atEdge) std::cout << "3" << '\n';
    else std::cout << "4" << '\n';

  }

  return 0;
}
