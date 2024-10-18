// 짝짓기, 폭발이 나오면 stack을 생각하자

#include <bits/stdc++.h>
using namespace std;
int N, ret;
string str;

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> str;
        stack<char> stk; 
        for(char a : str){
            if(stk.size() && stk.top() == a) stk.pop();
            else stk.push(a);
        }
        if(stk.size() == 0) ret++;
    }
    cout << ret << '\n';
}