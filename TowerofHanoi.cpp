#include<iostream>
using namespace std;
void toh(char src,char help,char dest,int n){
    //base case
    if(n==0){
        return;
    }

    //rec case
    toh(src,dest,help,n-1);
    cout<<"move dick no"<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(help,src,dest,n-1);

}
int main(){
 int n;
 cin>>n;
 toh('A','B','C',n);
}