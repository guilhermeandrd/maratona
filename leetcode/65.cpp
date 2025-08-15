#include <iostream>
#include <cctype>

using namespace std;

bool isDecimal(string s, int l = 0){
    int quantDot = 0;

    char ant = ' ';

    if(!l){
        l = s.size();
    }
    
    for(int i = 0; i < l; i ++){

        //se for 0 e não for nenhum desses é falso

        if(s[i] == '.') quantDot++;

        if(quantDot > 1) return false;

        if(quantDot == 1 && s.size() == 1) return false;

        if(!i && (!isdigit(s[i]) && s[i] != '+' && s[i] != '-' && s[i] != '.')){
            return false;
        }

        if(i && (!isdigit(s[i]) && s[i] != '.')){
            return false;
        }

        if((ant == '-' || ant == '+') && s[i] == '.') return false;

        ant = s[i];
    }
    return true;
}

bool isInteger(string s, int l = 0){


    if(!l){
       l = s.size();
    }

    for(int i = 0; i < l; i ++){

        if(i == 0 && (!isdigit(s[i]) && s[i] != '+' && s[i] != '-')){
            return false;
        }

        if(i && (!isdigit(s[i]))){
            return false;
        }
    }
    return true;

}

bool isNumber(string s){
    
    if(s.find('e') == std::string::npos && s.find('E') == std::string::npos){
        if(isDecimal(s) || isInteger(s)) return true;
    }else if(s.find('E') == std::string::npos){
        size_t found = s.find('e');
        
        found++;
        
        string littles = s.substr(found);
        
        found --;
        
        if(isDecimal(s, found) || isInteger(s, found)){
            if(isInteger(littles)) return true;
        }
        
        
    }else{
        size_t found = s.find('E');
    
        found++;
    
        string littles = s.substr(found);
    
        found --;
    
        if(isDecimal(s, found) || isInteger(s, found)){
            if(isInteger(littles)) return true;
        }
    }
    
    return false;
}

int main() {

    string s;

    cin >> s;

        if(s.length() && isNumber(s)) cout << "true";
        else cout << "false";
    

    return 0;
}

/**
 * 
 * class Solution {
public:
    bool isNumber(string s) {
            if(s.find('e') == std::string::npos && s.find('E') == std::string::npos){
        if(isDecimal(s) || isInteger(s)) return true;
    }else if(s.find('E') == std::string::npos){
        size_t found = s.find('e');
        
        found++;
        
        string littles = s.substr(found);
        
        found --;

        if(littles == "") return false;
        
        if(isDecimal(s, found) || isInteger(s, found)){
            if(isInteger(littles)) return true;
        }
        
        
    }else{
        size_t found = s.find('E');
    
        found++;
    
        string littles = s.substr(found);
    
        found --;

        if(littles == "") return false;
    
        if(isDecimal(s, found) || isInteger(s, found)){
            if(isInteger(littles)) return true;
        }
    }
    
    return false;
    }

private:
bool isDecimal(string s, int l = 0){
    int quantDot = 0;

    char ant = ' ';

    if(!l){
        l = s.size();
    }
    
    for(int i = 0; i < l; i ++){

        //se for 0 e não for nenhum desses é falso

        if(s[i] == '.') quantDot++;

        if(quantDot > 1) return false;

        if(quantDot == 1 && (l == 1 || s.size() == 1)) return false;

        if(!i && (!isdigit(s[i]) && s[i] != '+' && s[i] != '-' && s[i] != '.')){
            return false;
        }

        if(i && (!isdigit(s[i]) && s[i] != '.')){
            return false;
        }

                    if((s[i] == '+' || s[i] == '-') && l == 1) return false;



        if((ant == '-' || ant == '+') && s[i] == '.' && l == 2) return false;

        ant = s[i];
    }
    return true;
}


    bool isInteger(string s, int l = 0){


        if(!l){
        l = s.size();
        }

        for(int i = 0; i < l; i ++){

            if(i == 0 && (!isdigit(s[i]) && s[i] != '+' && s[i] != '-')){
                return false;
            }

            if(i && (!isdigit(s[i]))){
                return false;
            }

            if((s[i] == '+' || s[i] == '-') && l == 1) return false;
        }
        return true;

    }


};
 */