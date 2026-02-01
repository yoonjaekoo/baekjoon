#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<string> words;
        string w;
        while(ss >> w) words.push_back(w);

        for(int j = 2; j < words.size(); j++){
            cout << words[j] << " ";
        }
        cout << words[0] << " " << words[1] << "\n";
    }
}
