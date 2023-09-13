//Print first ‘n’ fibonacci numbers.

#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,sum=0,i;
    n1=0,n2=1;
    cout<<"Enter number:";
    cin>>n;
    cout<<n2<<" ";
    for(i=1;i<n;i++){
        sum=n1+n2;
        n1=n2;
        n2=sum;     
        cout<<sum<<" ";
   
    }
    

}