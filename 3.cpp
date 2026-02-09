#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int bin;
  cin>>bin;
  int dec;
  int base;
  while (bin>0){
    dec+=bin%2*pow(2,base);
    base++;
    bin/=10;
  }
  cout<<dec;
}
