#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int n){
    //base case
   if(n==1){
    return true;
   }
   

    //rec case
    if(isArraySorted(arr,n-1) and arr[n-2]<=arr[n-1]){
        return true; 
    }
    return false;
}
int main(){
    int arr[] = {3,4,6,9};
    int n=4;
    cout<<isArraySorted(arr,n);
}