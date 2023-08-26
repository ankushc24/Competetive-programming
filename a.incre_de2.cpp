#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  for(int j=0;j<t;j++){
    int x1,y1,n;
    cin>>x1>>y1>>n;
    bool check=true;
      vector <int>a(n);
      a[0] = x1;
      a[n-1] = y1;
      int z=1;

      for(int i=n-2;i>0;i--){
        a[i] = a[i+1] - z;
        if(a[i]<=1){
            check=false;
            break;
        }
        z+=1;
      }
    int num;
    num=a[1]-z;
    if(num<1){
        check=false;
    }
    if(check==false){
        cout<<-1<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
  
