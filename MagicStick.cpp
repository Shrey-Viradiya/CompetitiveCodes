#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin >> x>>y;

        if((x == 1 && y!=1) || (3*(x-1)/2 == x) ) std::cout << "NO" << '\n';
        else std::cout << "YES" << '\n';
    }


    return 0;
}
