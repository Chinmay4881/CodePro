#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ,n,z,revnum=0;
    cout <<" enter  number: "<<endl;  
    cin>> num;
    n=num;
    while(num!=0){
      z=  num%10;
        revnum = revnum*10 +z;
       num =  num/10;
    }
    cout<<revnum;
if(revnum==n)
         cout<<"true"<<endl;
    
    else
        cout<<"false"<<endl; 
    
}