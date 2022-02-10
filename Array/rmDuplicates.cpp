#include <iostream>
using namespace std;

int rmDuplicates(int arr[],int n){
    int res=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }


    return res;


}

int main()
{

    int arr[]={
        1,2,2,2,3,4,4,4
    };

    int a=rmDuplicates(arr,8);

    for(int i=0;i<a;i++){
        cout<<arr[i];
        
    }


    
    return 0;
}
