#include <bits/stdc++.h>

using namespace std;

int main() {
        long long n,x,y,q;
        vector<long long> a,l,s;

        cin >> n >> x >> y;

        for ( int i=0; i <= n; i++){
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }

        cin >> q;
        
        for ( int i = 0; i < q; i++){
            long long temp;
            cin >> temp;
            l.push_back(temp);
        }

        for (int i=n; i >= 0; i--){
            for( int j = i-1; j>=0; j--){
                s.push_back(2*(a[i] - a[j]) + 2*y);
            }
        }

        sort(s.begin(), s.end()); 

        for (int i = 0; i < q; i++){
            int flag = 0;
            for (int j = 0; j < s.size(); j++){
                if (l[i] % s[j] == 0){
                    cout<<s[j]<<'\n';
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) 
                cout << "-1" << '\n' ;
        }

    	return 0;
}