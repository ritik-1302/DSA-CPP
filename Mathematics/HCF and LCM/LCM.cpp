#include <iostream>
using namespace std;


int gcd(int a,int b){
   
   if(b==0){
       return a;

   }

   return gcd(b,a%b);


}


int lcm(int a,int b ){

    return (a*b)/gcd(a,b);           //a*b=gcd(a,b)*lcm(a,b)
}



int main(){

int result=lcm(10,15);

cout<<"result is "<<result;



}