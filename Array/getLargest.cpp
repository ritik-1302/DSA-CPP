#include <iostream>
using namespace std;

int getLargest(int arr[],int n){

    int res=0;

    for(int i=1;i<n;i++){

        if(arr[i]>arr[res]){
            res=i;

        }
    }

    return res;

     

}

int main(){
   
   int arr[]={
       1,2,3,4,5
   };

   cout<<getLargest(arr,5);
   

}