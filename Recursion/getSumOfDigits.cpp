#include <iostream>
using namespace std;

int getSum(int n){

  if(n<=9){
      return n;

  }else{

      return getSum(n/10)+n%10;

  }

}

int main(){
    int n=2345;

    cout<<getSum(n);
    




}