#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    int n; cin >> n;

    while(n-- ){
        int a, b, c; cin >> a >> b >> c;

        if(c == a + b) cout << "+" << endl;
        else cout << "-" << endl;
    }

    return 0;
}