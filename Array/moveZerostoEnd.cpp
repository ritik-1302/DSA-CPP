#include <iostream>
using namespace std;

void moveZero(int arr[],int n){
    int count=0;

    for(int i=0;i<n;i++){
        
        if(arr[i]!=0){

            swap(arr[i],arr[count]);
            count++;



        }
    }

}

int main()
{
    int arr[]={
        1,2,0,0,0,3,5,3,0,0,0
    };
    moveZero(arr,11);
    
    for(int i=0;i<11;i++){

        cout<<arr[i]<<" ";
    }
    
    return 0;
}
