#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int a, sum;
  
  for(int i=0;i<n; i++){
    cin>>a;
    while(a>=10){
      if(a%10==0) sum++;
      a/=10;
    }
  }
  
  cout<<sum;
}

