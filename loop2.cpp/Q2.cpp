//WAP to print the sum of a given number and its reverse.

#include<iostream>
using namespace std;
int main(){
    int i,rev=0,dig;
    int n,sum,a;
    cout<<"Enter the value:";
    cin>>n;
    a=n;

   for(i=0;i<=n;i++){
        rev=rev*10;
        dig=n%10;
        rev=rev+dig;
        n=n/10;
    }
    sum=a+rev;
    cout<<"Total:"<<" "<<sum;
    
}