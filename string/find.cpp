#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "love is";
    a += " pain!";
    auto it = a.find("is");
    auto its = a.find("pa");

    cout << it << '\n';
    cout << its << '\n';

    return 0;
}