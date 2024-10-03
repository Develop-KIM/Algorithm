#include <bits/stdc++.h>
using namespace std;
int N, M;
string str;
map<string, int> mapStr;
map<int, string> mapInt;

int main(){
    cin >> N >> M;

    for(int i=1; i<=N; i++){
        cin >> str;
        mapStr[str] = i;
        mapInt[i] = str;
    }

    for(int i=1; i<=M; i++){
        cin >> str;
        bool isNumber = true;
        for (char c : str) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }

        if (isNumber) cout << mapInt[stoi(str)] << '\n';
        else{
            if(islower(str[0])) str[0] = toupper(str[0]);
            cout << mapStr[str] << '\n'; 
        }
    }
}