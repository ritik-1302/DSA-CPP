#include <iostream>
using namespace std;


int numberOfDigits(long number){
   
   if(number==0)
   {
       return 0;             //base case for resucrion
    }
return 1+numberOfDigits(number/10);

}


int main(){

    int a=1234;

    int digits=numberOfDigits(a);

    cout<<"number of digits in a number is "<<digits;


  }



