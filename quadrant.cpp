#include <iostream>
using namespace std;

int main() { 
  int x;
  cin>>x;
  if(-1000<=x && x<=1000 && x!=0){
    int y;
    cin>>y;
    if(-1000<=y && y<=1000 && y!=0){
      if(0<x && 0<y)  cout<<1;
      else if(x<0 && 0<y)  cout<<2;
      else if(x<0 && y<0) cout<<3;
      else cout<<4;
    }
  }
  
}
