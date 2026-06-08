#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            cin.ignore(); // 讀取數字後的換行符，避免影響 getline
            
            vector<string> current(n);
            vector<string> target(n);
            
            // 目前狀態（由上到下）
            for (int i = 0; i < n; ++i) {
                getline(cin, current[i]);
            }
            
            // 目標狀態（由上到下）
            for (int i = 0; i < n; ++i) {
                getline(cin, target[i]);
            }
            
            int curr_idx = n - 1;
            int tart_idx = n - 1;
            
            while (curr_idx >= 0) {
                if (current[curr_idx] == target[tart_idx]) {
                    // 如果名字相同，代表這隻烏龜的相對位置是對的，目標指標往上移
                    tart_idx--;
                }
                curr_idx--;
            }
            
        
            for (int i = tart_idx; i >= 0; --i) {
                cout << target[i] << "\n";
            }
            cout << "\n"; 
        }
    }
    return 0;
}
