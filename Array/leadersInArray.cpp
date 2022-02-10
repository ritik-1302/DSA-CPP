#include <iostream>
using namespace std;

void leaders(int arr[],int n){
    int curr_leader=arr[n-1];

    cout<<curr_leader;

    for(int i =n-2;i>=0;i--){

    if(curr_leader<arr[i]){
        
        curr_leader=arr[i];
        cout<<curr_leader;

    }

    }


}
int main(){
 int arr[]={
     5,6,4,8,3,8,5
 };

 leaders(arr,7);



}