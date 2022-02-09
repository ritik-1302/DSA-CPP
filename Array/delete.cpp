#include <iostream>
using namespace std;

int deleteElement(int arr[],int n,int x){

    int i ;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;

        }
    }

    if(i==n){
        return n;

    }

    for(int j=i;j<n-1; j++){
        arr[j]=arr[j+1];
        }

    return (n-1);


}

int main(){
 int arr[]={1,2,3,4,5};
  
  cout<<deleteElement(arr,5,3)<<"\n";

  for(int i=0;i<4;i++){
      cout<<arr[i];

  }


}