#include <iostream>
using namespace std;

bool isPowOfTwo(int n){

    return (n!=0)&&((n&(n-1))==0);
}

int main(){

    bool result=isPowOfTwo(4);

if(result){

    cout<<"true";
}
else{

    cout<<"false";

}

}

