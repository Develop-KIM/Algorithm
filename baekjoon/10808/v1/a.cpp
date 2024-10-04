// 문자를 입력
// 문자의 각 알파벳 카운트
// 출력 : 공백으로 구분

#include <bits/stdc++.h>
using namespace std;
string str;
int cnt[26];

int main(){
    cin >> str;
    for(int i : str) cnt[i - 'a']++;
    for(int i=0; i<26; i++) cout << cnt[i] << " ";
}