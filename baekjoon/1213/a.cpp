#include <bits/stdc++.h>
using namespace std;
int cnt[200], flag;
string str, ret;
char mid;

int main(){
    cin >> str;

    for(char c : str){
        cnt[(int) c]++;
    }

    for(int i='Z'; i>='A'; i--){
        if(cnt[i]){
            if(cnt[i] & 1){
                mid = char(i);
                flag++;
                cnt[i]--;
            }
            if(flag==2) break;
            for(int j=0; j<cnt[i]; j+=2){
                ret = char(i) + ret; // 앞쪽 입력
                ret += char(i); // 뒤쪽 입력
            }
        }
    }
    if(mid) ret.insert(ret.begin() + ret.size() / 2, mid);
    if(flag==2) cout << "I'm Sorry Hansoo";
    else cout << ret;
}
