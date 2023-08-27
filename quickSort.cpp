#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){
int pivot= arr[s];
int count = 0;
for(int i=s+1;i<=e;i++){
    if(arr[i]<= pivot){
        count++;
    }
} 

//place pivot at correct place
int pivotIndex = s + count;
swap(arr[pivotIndex],arr[s]);
  
// left and right part smbhal lo
int i=s;
int j = e;

while(i< pivotIndex && j>pivotIndex){
   while(arr[i]<= pivot){
      i++;
   }
   while(arr[j]>pivot){
    j--;
   }

   if(i< pivotIndex && j>pivotIndex){
      swap(arr[i++],arr[j--]);
   }

}

return pivotIndex;

}


void quickSort(int arr[],int s,int e){
 //base case
 if(s>=e){
    return;
 }
 //partiton krenge

 int p = partition(arr,s,e);

 //left part sort kro
 quickSort(arr,s,p-1);
 //right part sort kro
 quickSort(arr,p+1,e);


}




int main(){
    int arr[5] = {5,4,3,2,1};
   quickSort(arr,0,4);

   for(int i=0;i<5;i++){
    cout<<arr[i];
   }
}