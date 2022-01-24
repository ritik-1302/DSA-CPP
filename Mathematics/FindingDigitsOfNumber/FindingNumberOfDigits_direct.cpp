#include <iostream>
#include <math.h>
using namespace std;


int numberOfDigits(long number){
   
  return floor(log10(number)+1);
   
}


int main(){

    int a=1234;

    int digits=numberOfDigits(a);

    cout<<"number of digits in a number is "<<digits;


  }



