#include <bits/stdc++.h>

using namespace std;


int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);
    
    int n=0;

    cin >> n;

    while(n--){
        int x=0;
        cin >> x;
        for(int i=1;i<=x;i++){
            cout << i*i << " ";
        }
        cout << endl;
    }

    return 0;
}