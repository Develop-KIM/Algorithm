#include <bits/stdc++.h>
using namespace std;
string str;

int main(){
    getline(cin, str);

    for(char& c : str){
        if(c >= 'A' && c <= 'Z'){
            if(c + 13 > 'Z') c -= 13;
            else c += 13;
        } else if(c >= 'a' && c <= 'z'){
            if(c + 13 > 'z') c -= 13;
            else c += 13;
        }
    }
    cout << str;
}