#include <bits/stdc++.h>
using namespace std;
int arr[26];
string str;

int main(){
    cin >> str;

    for(char c : str) arr[c - 'a']++;
    for(int i=0; i<26; i++) cout << arr[i] << " ";
}