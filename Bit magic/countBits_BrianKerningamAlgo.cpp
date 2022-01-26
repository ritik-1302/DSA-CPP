#include <iostream>
using namespace std;

int countBit(int n ){

    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;

    }

    return res;

}

int main(){
   
int n=countBit(5);

cout<<n;



}