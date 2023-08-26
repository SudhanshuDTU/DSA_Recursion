#include<iostream>
using namespace std;

bool bs(int* arr,int s,int e,int key){
    int mid = (s+e)/2;

    //base case
    if(arr[mid]==key){
        return true;
    }
    if(s>e){
        return false;
    }

    if(arr[mid]>key){
        return bs(arr,s,mid-1,key);
    }
     else if(arr[mid]<key){
        return bs(arr,mid+1,e,key);
    }

   

 }

int main(){
    int arr[3]={1,2,4};
    cout<<bs(arr,0,2,9);
    
}