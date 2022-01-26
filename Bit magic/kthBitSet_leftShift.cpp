#include <iostream>
using namespace std;


void kthBit(int n ,int k ){

    if(n&(1<<(k-1)))
    {
        cout<<"yes";

    }
    else{
        cout<<"no";

    }

}

int main(){


kthBit(5,3);

}