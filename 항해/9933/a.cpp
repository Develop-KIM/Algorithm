#include <bits/stdc++.h>
using namespace std;

int N;
set<string> wordSet;

int main(){
    cin >> N;

    vector<string> words(N);

    for(int i=0; i<N; i++){
        cin >> words[i];
        wordSet.insert(words[i]);
    }

    for(const string& word : words){
       string reversedWord = word;
       reverse(reversedWord.begin(), reversedWord.end());
       if (wordSet.count(word) && wordSet.count(reversedWord)) {
            int length = word.length();
            char middleChar = word[length / 2];
            cout << length << " " << middleChar << '\n';
            break;
        }
    }
}