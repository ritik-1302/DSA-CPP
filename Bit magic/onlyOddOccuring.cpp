#include <iostream>
using namespace std;

int findOdd(int arr[],int n){


 int res =0;
 for(int i=0;i<n;i++){
     res=res^arr[i];

 }
 return res;



}

int main(){

int arr[]={
    4,3,4,4,4,5,5
};
int i=7;

int result=findOdd(arr,i);

cout<<result;




}