#include<iostream>
using namespace std;
int sumOfArray(int arr[100],int n){
    //base case
    if(n==1){
        return arr[0];
    }

    //rec case
    return arr[n-1] + sumOfArray(arr,n-1);

}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<sumOfArray(arr, n);
}