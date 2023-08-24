#include<iostream>
using namespace std;
int DecreasingOrder(int n){
    //base case
    if(n==0){
       return 0;
        
    }
    
    //rec case
    cout<< n<<" ";
    return DecreasingOrder(n-1);
}
int IncreasingOrder(int n,int temp){
    //base case
   
    if(temp==n+1){
       return 0;
        
    }
    
    //rec case
    cout<< temp<<" ";
    temp++;
    return IncreasingOrder(n,temp);
}

int main(){
    int n;
    cin>>n;
    DecreasingOrder(n);
    cout<<endl;
    IncreasingOrder(n,1);

}