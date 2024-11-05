#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p=0, y=0;
    bool answer = true;
    
    for (char ch : s){
        if(ch == 'p' || ch == 'P'){
            p++;
        } else if(ch == 'y' || ch == 'Y'){
            y++;
        }
        if(p != y){
            return answer = false;
        }
    }
    return answer;
}