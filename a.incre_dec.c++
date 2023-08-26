#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  for(int j=0;j<t;j++){
    int x1,y1,n;
    cin>>x1>>y1>>n;
    if((y1-x1)>=(n*(n-1)/2)){
      vector <int>a(n);
      a[0] = x1;
      a[n-1] = y1;
      int z=1;

      for(int i=n-2;i>0;i--){
        a[i] = a[i+1] - z;
        z+=1;
      }

      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
    else{
      cout<<-1;
      cout<<endl;
    }
    
  }
  return 0;
}