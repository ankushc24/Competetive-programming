#include <iostream>

using namespace std; 
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,x;
        cin>>n>>x;
        if(n==1||n==2){
            cout<<n<<endl;
        }
        else{
            int arr[100][100];
            int a=1,b=0;
            for(int j=n-2;j>=1;j--){
                
                b++;
                if(b==x){
                    a++;
                    b=0;
                }

            }
            if((n-2)%x==0){
                cout<<a-1<<endl;
            }
            else{
            cout<<a<<endl;
            }
        }

    }

}