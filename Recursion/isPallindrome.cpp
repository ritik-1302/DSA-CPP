#include <iostream>
using namespace std;

bool isPallindrome(string &str,int start,int end){

 if(start>=end){
     return true;

 }

 return (str[start]==str[end])&&isPallindrome(str,start+1,end-1);


}

int main(){
   string str="abbb";

   if(isPallindrome(str,0,3)){
       cout<<"String is Pallindrome";

   }else{
       cout<<"String is not Pallindrome";

   }

}