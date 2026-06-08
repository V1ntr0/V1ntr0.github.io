#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<bool> visited(n, false);
        
        bool is_jolly = true;
        int count = 0;
        
        for (int i = 0; i < n - 1; ++i) {
            int diff = abs(a[i] - a[i+1]);
            
            // 檢查差值是否在 1 ~ n-1 範圍內，且之前沒出現過
            if (diff >= 1 && diff <= n - 1 && !visited[diff]) {
                visited[diff] = true;
                count++;
            } else {
                is_jolly = false;
                break;
            }
        }
        
        if (is_jolly && count == n - 1) {
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n";
        }
    }
    
    return 0;
}
