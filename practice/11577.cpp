#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        string dummy;
        getline(cin, dummy);
        
        while (t--) {
            string s;
            getline(cin, s);
            
            vector<int> freq(26, 0);
            int max_freq = 0;
        
            for (char c : s) {
                if (isalpha(c)) {
                    char lower_c = tolower(c);
                    int idx = lower_c - 'a';
                    freq[idx]++;
                    
                    max_freq = max(max_freq, freq[idx]);
                }
            }
            for (int i = 0; i < 26; ++i) {
                if (freq[i] == max_freq) {
                    cout << (char)(i + 'a');
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
