#include <iostream>
using namespace std;
long int Factorial(short X)
{
 if(X<0) return -1;
 if((X==0)||(X==1)) return 1; 
 long int Y=1; 
 for(short i=2;i<=X;i++)
 {
  Y=Y*i;       
 }
 return Y; 
}
int main(int argc, char *argv[])
{
    short N=0;
    cout<<"N=";
	cin>>N;
    cout<<N<<"!="<<Factorial(N)<<endl<<endl;
    system("PAUSE");
    return 0;
}
