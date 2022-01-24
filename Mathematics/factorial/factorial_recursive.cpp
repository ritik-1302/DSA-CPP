#include <iostream>
using namespace std;

int factorial(int number){

   if(number==0){
       return 1;

   }

   return number*factorial(number-1);


}


int main(){
 
 int result=factorial(5);

 cout<<"factorial of the number is "<<result;




}