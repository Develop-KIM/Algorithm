#include <bits/stdc++.h>
using namespace std;
int N, M;
stirng str;
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

        if (isNumber) {
            // 숫자인 경우 해당 번호에 해당하는 포켓몬 이름 출력
            cout << mapInt[stoi(str)] << '\n';
        } 
        if(isdigit(str[0])) cout << mapInt[stoi(str)] << '\n';
        else{
            if(islower(str)) str[0] = toupper(str[0]);
            cout << mapStr[stoi(str)] << '\n'; 
        }
    }
}