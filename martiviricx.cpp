#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

bool Martiviricx(int x)
{
 if(x==0||x==1) return false;
 if(x<0) x=abs(x);
 
 for(long int i=2;i<=sqrt(x);i++)
 {   
  if(x%i==0) return false;      
 }
      
 return true;   
}

int main(int argc, char *argv[])
{
  int a=0, b=0, S=0;

  cout<<"a=";cin>>a;
  cout<<"b=";cin>>b;

  if(a>b)
  {
    int temp=a; a=b; b=temp;       
  }     
 
  for(int i=a; i<=b; i++)
  {
    if(Martiviricx(i)) S+=i;        
  }
  cout<<"S="<<S<<endl;
  
  system("PAUSE");
  return 0;
}
