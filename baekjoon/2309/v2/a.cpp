#include <bits/stdc++.h>
using namespace std;
int heights[9], totalHeight;
pair<int, int> excluded;
vector<int> result;

void exclude(){
    for(int i=0; i<9; i++){
        for(int j=0; j<i; i++){
            if(totalHeight - heights[i] - heights[j] == 100) result = {i, j};
        }
    }
}

int main(){
    for(int i=0; i<9; i++){
        cin >> heights[i]; 
        totalHeight += heights[i];
    }

    exclude();

    for(int i=0; i<9; i++){
        if(excluded.first == i || excluded.second == i) continue;
        result.push_back(heights[i]);
    }
    sort(result.begin(), result.end());
    for(int i : result) cout << i << '\n';

    return 0;
}