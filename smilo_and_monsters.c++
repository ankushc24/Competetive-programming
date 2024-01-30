#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007

int main() {
    int test_cases = 1;
    cin >> test_cases;

    for (int t = 0; t < test_cases; t++) {
        int num_soldiers;
        cin >> num_soldiers;
        vector<int> soldier_strengths(num_soldiers);

        // Input soldier strengths
        for (int i = 0; i < num_soldiers; i++) {
            cin >> soldier_strengths[i];
        }

        // Sort the soldiers in ascending order of strength
        sort(soldier_strengths.begin(), soldier_strengths.end());

        int left = 0;
        int right = num_soldiers - 1;
        int current_strength = 0;
        int total_attacks = 0;

        while (left < right) {
            if (current_strength + soldier_strengths[left] <= soldier_strengths[right]) {
                current_strength =current_strength+ soldier_strengths[left];
                total_attacks =total_attacks+ soldier_strengths[left];
                left+=1;
            } else {
                total_attacks += (soldier_strengths[right] - current_strength);
                total_attacks =total_attacks+ 1;
                soldier_strengths[left] -= (soldier_strengths[right] - current_strength);
                current_strength = 0;
                right--;
            }
        }

        if (left == right) {
            if (soldier_strengths[left] == 1) {
                total_attacks =total_attacks+ 1;
            } 
            else if ((soldier_strengths[left] - current_strength) % 2 == 1) {
                total_attacks += ((soldier_strengths[left] - current_strength) / 2 + 1);
                total_attacks =total_attacks+ 1;
            } 
            else {
                total_attacks =total_attacks+ ((soldier_strengths[left] - current_strength) / 2);
                total_attacks =total_attacks+ 1;
            }
        }

        // Output the total number of attacks needed
        cout << total_attacks;
        cout<<endl;
    }
}
