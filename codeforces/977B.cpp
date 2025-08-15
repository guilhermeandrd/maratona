#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    int n; cin >> n;

    string entrada; cin >> entrada;

    //tem que ser a sequencia de letra que mais aparece

    string par1;


    map<string, int> pares;

    for(int i=0; i < n; i++){

        //pegar o que vem depois
        int e = i;
        par1.push_back(entrada[e]);
        e = i + 1;         
        par1.push_back(entrada[e]);
        
        pares[par1]++;

        par1.clear();
        //pegar o que vem antes
        //ou sera que seria melhor fazer isso através de chars ant e atual prox
    }

    pair<string, int> par = *pares.begin();



    for(auto node : pares){
        if(node.second > par.second){
            par = node;
        }
    }


    cout << par.first << endl;


}