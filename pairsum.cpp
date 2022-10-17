#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int st=0; 
    int end= n-1;
    while(st<end){
        if(arr[st] +arr[end] == k){
            cout<<st<<" "<<end;
            return 1;
        }
        else if(arr[st] +arr[end]< k){
            st++;
        }
        else
            end--;
    }
    return 0;
}

int main(){
    int n, k;
    cin>>n;

    cout<<"Enter the sum: ";
    cin>>k;

    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    pairsum(arr,n,k);
}