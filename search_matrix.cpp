#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter n and m: ";
    cin>>n;
    cin>>m;

    int arr[n][m];
    cout<<"Enter the matrix-"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>arr[i][j];
        }  
    }

    int x;
    cin>>x;
    bool k = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]==x){
                cout<<i<<" "<< j <<endl;
                k = 1;
            }
        }    
    }
    
    if(k = 1){
        cout<<"Element found!!"<<endl;
    }
    else
        cout<<"Element doesn't exist!!"<<endl;
    return 0;
}