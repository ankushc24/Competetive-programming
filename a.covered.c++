#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int x=0;x<t;x++) {
        int n, k;
        cin >> n >> k;

        string str = "";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
                str += ('a' + j);
            }
        }

        cout << str << endl;
    }

    return 0;
}