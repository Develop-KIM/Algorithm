#include <bits/sidc++.h>
using namespace std;

int main(const char* t, const char* p){
    int cnt = 0;
    int tLen = strlen(t), pLen = strlen(p);

    for(int i=0; i<tLen-pLen; i++){
        char subStr[20];
        strncpy(subStr, t + i, pLen);

        if(strcmp(subStr, p) <= 0) cnt++;
    }

    return cnt;
}