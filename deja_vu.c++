/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> x(q);

        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<q;j++){
            cin>>x[j];
        }

        for(int j=0;j<q;j++){
            int num=pow(2,x[j]);
            for(int k=0;k<n;k++){
                if(a[k]%num==0){
                    a[k]+=pow(2,x[j]-1);
                }
            }
        }

        for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main() {
    int test_cases; 
    cin >> test_cases;

    for (int t = 0; t < test_cases; t++) {
        int n, q; // Number of elements and queries
        cin >> n >> q;

        vector<int> elements(n); // Array of elements
        vector<int> queries(q);  // Array of queries
        unordered_map<int, int> index_map; // Map to store query indices

        for (int i = 0; i < n; i++) {
            cin >> elements[i];
        }

        vector<int> processed_queries; // Processed query values

        for (int i = 0; i < q; i++) {
            cin >> queries[i];
            if (processed_queries.empty() || processed_queries.back() > queries[i]) {
                processed_queries.push_back(queries[i]);
            }
        }

        for (int i = 0; i < processed_queries.size(); i++) {
            for (int j = 0; j < n; j++) {
                int least_significant_bit = __builtin_ctz(elements[j]);
                if (processed_queries[i] <= least_significant_bit) {
                    elements[j] += (1 << (processed_queries[i] - 1));
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << elements[i] ;
            cout<<" ";
        }
        cout << endl;
    }

    return 0;
}
