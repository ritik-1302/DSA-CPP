#include <iostream>
using namespace std;

void oddApperaing(int arr[],int n){
 
    int XOR=0,res1=0,res2=0;

for(int i=0;i<n;i++){
    
    XOR=XOR^arr[i];
}

int sn=XOR&~(XOR-1);

for(int i=0;i<n;i++){
    if((arr[i]&sn)!=0){

        res1=res1^arr[i];

    }else{

        res2=res2^arr[i];

    }

}

cout<<res1<<endl;
cout<<res2<<endl;

}


int main(){

int arr[]={
3,4,3,4,8,4,4,32,7,7
};


oddApperaing(arr,10);




}