#include<iostream>
using namespace std;

void reverseString(int i,int j,string& s){
    //base case
    if(i>j){
        return;
    }

    swap(s[i],s[j]);
    i++,j--;
    return reverseString(i,j,s);

}

int main(){
    string s = "men";
    reverseString(0,s.size()-1,s);

    cout<<s;


}