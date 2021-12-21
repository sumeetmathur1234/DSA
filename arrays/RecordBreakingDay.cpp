#include <iostream>
using namespace std;
int main(){
    // Record Breaking Days
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    int max=arr[0];
    int ans=0;
    for(int i=1;i<n-1;i++){
        if( arr[i] > max){
            max=arr[i] ;
            if(arr[i]>arr[i+1]){
                ans++;
            }
        }
    }
    if(arr[0]>arr[1]){
        ans++;
    }
    if(arr[n-1]>max){
        ans++;
    }
    cout<<"Days: "<<ans;
    return 0;
}