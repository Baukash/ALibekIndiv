#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
  int dec;
  cin>>dec;
  
  string bin;
  
  while(dec>0){
    if(dec%16<10) bin.push_back(dec%16+48);
    else if(dec%16==10) bin.push_back('A');
    else if(dec%16==11) bin.push_back('B');
    else if(dec%16==12) bin.push_back('C');
    else if(dec%16==13) bin.push_back('D');
    else if(dec%16==14) bin.push_back('E');
    else if(dec%16==15) bin.push_back('F');
    
    dec/=16;
  }
  
  reverse(bin.begin(),bin.end());
  cout<<bin;
}
