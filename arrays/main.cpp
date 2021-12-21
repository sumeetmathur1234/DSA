#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int a=1;
    int max=2;
    int diff=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==diff){
            a++;
        }
        else if(arr[i+1]-arr[i]!=diff){
            if(a>max){
                max=a;
            }
            a=1;
        }
    }
    cout<<max;
    return 0;
    
}