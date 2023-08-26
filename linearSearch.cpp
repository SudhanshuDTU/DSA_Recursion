#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
   //base case 
   if(n==0){
    return false;
   }

   //rec case

  if(arr[0]==key){
    return true;
  }
  else{
    return linearSearch(arr+1,n-1,key);
  }


}

int main(){
int arr[5] = {1,2,3,4,5};
int key = 3;
cout<<linearSearch(arr,5,key);
}