#include<iostream>
using namespace std;
int pall(string s){
    int l=s[0];
    int n=s.length();
    int r=s[n-1];
    while(l<r){
        if(l!=r){
            return false;
            break;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    string s="Mahak Choudhari";
    
    cout<<s<<endl;
    bool a =pall(s);
    if(a){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    
}