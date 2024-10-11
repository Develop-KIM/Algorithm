#include <bits/stdc++.h>
using namespace std;
int N, ast;
string str, ori_str, prf, suf;

int main(){
    cin >> N >> ori_str;

    ast = ori_str.find('*');
    prf = ori_str.substr(0, ast);
    suf = ori_str.substr(ast + 1);

    cout << ast << '\n';
    cout << prf << '\n';
    cout << suf << '\n';

    for(int i=0; i<N; i++){
        cin >> str;
        if(prf.size() + suf.size() > str.size()){
            cout << "NE" << '\n';
            continue;
        }

        if(prf == str.substr(0, prf.size()) && str.substr(str.size() - suf.size()) == suf) cout << "DA" << '\n';
        else cout << "NE" << '\n';
    }
}
