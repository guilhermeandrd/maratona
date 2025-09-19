#include <stdio.h>
#include <iostream>

using namespace std;
 
int main() {
    char s = 'S';
    
    int n=8;
    while(n--){
        int x;
        cin >> x;
        if(x==9) s = 'F';
    }
    
    cout << s << endl;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}