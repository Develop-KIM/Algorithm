#include <bits/stdc++.h>
using namespace std;
int N, ast;
string str, ori_str, pre, suf;

int main(){
    cin >> N;
    cin >> ori_str;

    ast = ori_str.find('*');
    pre = ori_str.substr(0, ast);
    suf = ori_str.substr(ast + 1);
    
    // cout << ast << '\n';
    // cout << pre << '\n';
    // cout << suf << '\n';

    for(int i=0; i<N; i++){
        cin >> str;
        if(pre.size() + suf.size() > str.size()){
            cout << "NE\n";
            continue;
        } 
        if(pre == str.substr(0, pre.size()) && suf == str.substr(str.size() - suf.size())) cout << "DA" << '\n';
        else cout << "NE" << '\n';
    }
    return 0;
}
