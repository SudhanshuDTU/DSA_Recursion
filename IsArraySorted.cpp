#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int n){
    //base case
   if(n==1){
    return true;
   }
   

    //rec case
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isArraySorted(arr+1,n-1);
    }
   

    return false;
}
int main(){
    int arr[] = {3,4,6,9};
    int n=4;
    cout<<isArraySorted(arr,n);
}