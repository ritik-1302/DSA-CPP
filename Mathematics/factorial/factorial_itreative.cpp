#include <iostream>
using namespace std;


int factorial(int number){

    int res=1;
    for(int i=2;i<=number;i++){
        res=res*i;

    }
    return res;

}


int main(){
 
 int result=factorial(5);

 cout<<"factorial of the number is "<<result;




}