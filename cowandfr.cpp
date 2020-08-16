#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define ll long long

using namespace std;

// threading function


int main(int argc, char const *argv[]) {

    TESTCASE{
        ll n,x;
        cin >> n >> x;
        vector<ll> a;
        
        while(n--){
            ll temp;
            cin >> temp;
            a.pb(temp);
        }

        sort(a.begin(),a.end());

        if(a[a.size() - 1] == x){
            cout << "1" << endl;
        }
        else if(a[a.size() - 1] > x){
            cout << "2" << endl;
        }
        else{
            ll hops;
            hops = x % a[a.size() - 1];
            ll w = a[a.size() - 1];
            a.pop_back();
            x = x - (hops * w);

            if( a[a.size() - 1] == x){
                x++;
            }
            else{
                x+=2;
            }
        }

    }

    return 0;
}
