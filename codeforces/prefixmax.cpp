#include <bits/stdc++.h>

using namespace std;


int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);
    
    int n=0;

    cin >> n;

    while(n--){
        int x=0;
        int m=0;
        cin >> x;
        int i=x;
        
        while(i--){
            int n=0;
            cin >> n;
            if (n>m) m=n;
        }
        cout << x*m << endl;
    }

    return 0;
}