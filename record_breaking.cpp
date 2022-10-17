#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n+1];
    arr[n] =-1;
    
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int mx =-1;
    int ans=0;
    if(n==1){
        cout<<"1"<<endl;
    }

    for(int i = 0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]>mx){
            ans++;
        }
        mx= max(mx,arr[i]);
    } 
    cout<<"answer: "<<ans<<endl;
}