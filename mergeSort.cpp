#include<iostream>
using namespace std;

void mergeTwosorted(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s +1;
    int len2 = e-mid;
    
    //create two arrays 
    int* arr1 = new int[len1];
    int* arr2 = new int[len2];

    //copy values
    int k=s;

    for(int i=0;i<len1;i++){
        arr1[i] = arr[k++];
    }
    k = mid + 1;

    for(int i=0;i<len2;i++){
        arr2[i] = arr[k++];
    }

    //merge 2 sorted array

    int i = 0;
    int j = 0;
    k=s;

    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
             arr[k++] = arr2[j++];
        }
    }
   
   while(i<len1){
     arr[k++] = arr1[i++];
   }
   while(j<len2){
     arr[k++] = arr2[j++];
   }

   delete [] arr1;
   delete [] arr2;

}



void mergeSort(int*arr,int s,int e){
     //base case
     if(s>=e){
        return;
     }

     //rec case
     int mid = (s+e)/2;
 
     mergeSort(arr,s,mid); //left part sort krna hai

     mergeSort(arr,mid+1,e); //right part sort krna hai

     mergeTwosorted(arr,s,e);
}

int main(){
    int arr[5] = {5,4,3,2,1};

    mergeSort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


}