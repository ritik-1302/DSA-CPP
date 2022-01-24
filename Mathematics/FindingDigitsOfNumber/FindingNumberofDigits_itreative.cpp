#include <iostream>
using namespace std;


int numberOfDigits(long number){
    int count=0;
    while(number!=0){
        number=number/10;
        ++count;
    }

return count;

}


int main(){

    int a=1234;

    int digits=numberOfDigits(a);

    cout<<"number of digits in a number is "<<digits;


  }