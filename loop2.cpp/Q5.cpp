//Write a program to print out all Armstrong numbers between 1 and 500.

#include<iostream>
using namespace std;
int main(){
    int i,dig,cube,sum,temp;
    for(i=1;i<=500;i++){
        temp=i,sum=0;
        while(temp>0){
            dig=temp%10;
            cube=dig*dig*dig;
            sum=sum+cube;
            temp=temp/10;


        }
        if (i == sum) {
            cout << i << endl;
            }

        
    }
}