#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long x,y;cin >> x>>y;

        if(x == 1 && y>1) std::cout << "NO" << '\n';
        else if(x>=4 || x>=y) std::cout << "YES" << '\n';
        else if((x == 2 || x == 3) && y >3) std::cout << "NO" << '\n';
        else if((3*(x-1))/2 == x) std::cout << "NO" << '\n';
        else std::cout << "YES" << '\n';
    }


    return 0;
}
