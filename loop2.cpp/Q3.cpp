//Print the factorials of first ‘n’ numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
        x=x*i;
        cout<<x<<endl;

    }
}