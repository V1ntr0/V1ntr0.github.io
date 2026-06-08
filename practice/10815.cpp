#include <iostream>
#include <string>
#include <set>
#include <cctype> // 為了使用 isalpha() 和 tolower()

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<string> dictionary;
    string word;
    string temp = "";

    while (cin >> word) {
        for (char c : word) {
            if (isalpha(c)) {
                temp += tolower(c);
            }
            else {
                if (!temp.empty()) {
                    dictionary.insert(temp);
                    temp = "";
                }
            }
        }
        if (!temp.empty()) {
            dictionary.insert(temp);
            temp = "";
        }
    }

    for (const string& w : dictionary)
        cout << w << "\n";
  
    return 0;
}
