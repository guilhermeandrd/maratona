#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    int n, maximumN = 0; cin >> n;

    char c, last;

    string maximum, curr;

    unordered_map<string, int> check;



    for(int i = 0; i < n; i ++){

        cin >> c;

        if(i){
            curr = "";

            curr += last;

            curr += c;
            check[curr]++;

            if(check[curr]>maximumN){
                maximum = curr;
                maximumN = check[curr]; 
            }
        }

        last = c;
    }

    cout << maximum;
    
}