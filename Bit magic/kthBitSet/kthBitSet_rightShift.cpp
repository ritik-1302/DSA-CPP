#include <iostream>
using namespace std;

void kthBit(int n,int k){

    if(((n>>(k-1))&1)==1){

        cout<<"yes";
    }
    else{

        cout<<"no";

    }

}

int main(){


kthBit(13,3);


}
