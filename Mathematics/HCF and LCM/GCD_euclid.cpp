#include <iostream>
using namespace std;

int gcd(int a ,int b){

 while(a!=b){
     if(a>b){
         a=a-b;

     }else{
         b=b-a;

     }
 }

 return a;

}

int main(){

int result =gcd(10,15);


cout<<"GCD IS "<<result;


}
