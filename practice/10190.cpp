#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m;
    
    while (cin >> n >> m) {

        if (n < 2 || m < 2 || n < m) {
            cout << "Boring!\n";
            continue;
        }
        
        vector<long long> sequence;
        sequence.push_back(n);
        
        bool is_boring = false;
        
        // 連續除法，直到 n 變成 1
        while (n > 1) {
            if (n % m == 0) {
                n /= m;
                sequence.push_back(n);
            } else {
                is_boring = true;
                break;
            }
        }

        if (is_boring) {
            cout << "Boring!\n";
        } else {
            for (size_t i = 0; i < sequence.size(); ++i) {
                cout << sequence[i] << (i == sequence.size() - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    
    return 0;
}
