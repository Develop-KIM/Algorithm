#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a < b;
}
vector<int> v = {3, 4, 10 , 11};
int main() {
    sort(v.begin(), v.end(), cmp);
    for(int i : v) cout << i << " ";
}