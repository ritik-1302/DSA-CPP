#include <iostream>
using namespace std;

bool isPallindrome(int number){

int rev=0;


for (int i=number;i!=0;i=i/10){

  int lastDigit=i%10;
  rev=rev*10+lastDigit;

}

return number==rev;



}

int main(){

int a=121;

if(isPallindrome(a)){
    cout<<"number is pallindorme";
}else{
    cout<<"number is not pallindrome";

}

}