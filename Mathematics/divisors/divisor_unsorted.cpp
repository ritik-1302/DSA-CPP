#include <iostream>
using namespace std;

void printDivisor(int n ){

    for(int i=1;i*i<=n;i++){

        if(n%i==0){

            cout<<i<<endl;

            if(i!=n/i){
                cout<<n/i<<endl;

            }
        }
    }

}


int main(){

printDivisor(44);


}
