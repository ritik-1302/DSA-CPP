#include <iostream>
using namespace std;



int compare(int a,int b,int c){
    
    if(a>b&&a>c){
        return a;

    }else if(b>a&&b>c){
        return b;

    }
    else{
        return c; 
    }


}


int maxPiece(int n,int a,int b,int c){

if(n==0){
    return 0;

}
if(n<0){
    return -1;

}
int res=compare(maxPiece(n-a,a,b,c),maxPiece(n-b,a,b,c),maxPiece(n-c,a,b,c));

if(res==-1){
    return -1;



}

return res+1;
}

int main(){

int n=23,a=11,b=9,c=12;

int res=maxPiece(n,a,b,c);

cout<<res;


}

