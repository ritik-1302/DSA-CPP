#include <iostream>
using namespace std;

int table[256];

void initialize(){
  
  table[0]=0;
  for(int i=1;i<256;i++){
      table[i]=(i&i)+table[i/2];

  }


}

int count (int n ){

int res=table[n&0xff];
n=n>>8;
res=res+table[n&0xff];
n=n>>8;
res=res+table[n&0Xff];
n=n>>8;
res=res+table[n&0xff];

return res;


}

int main(){

int result=count(5);

cout<<result;


}