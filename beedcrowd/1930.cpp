#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
    
    int x;
    int soma = 0;
    int n = 4;
    
    while(n--){
        cin >> x; soma+=x;
    }
    
    cout << soma-3 << endl;
 
    return 0;
}