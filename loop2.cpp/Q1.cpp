//WAP to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n,dig,i,sum=0;
    cout<<"Enter your number";
    cin>>n;
    for(i=1;i<=n;i++){
        dig=n%10;//4556%10=6
        if(dig%2==0){
            sum=sum+dig;
           }
        n=n/10;        
    }
    cout<<"sum:"<<" "<<sum;
}