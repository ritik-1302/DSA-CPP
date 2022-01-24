#include <iostream>
using namespace std;

int numberOfZerosInFactorial(int number){      
                          
    int count=0;                         

    for(int i=5;i<=number;i=i*5){        
      
      count=count+number/i;        


    }

    return count;


    


}


int main(){
  
  int a=251;

  int result=numberOfZerosInFactorial(a);              


  cout<<"number of Zeros is "<<result;






}