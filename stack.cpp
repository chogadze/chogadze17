#include <iostream>
using namespace std; 
int stack[100], m=100, n=-1;
void p(int mn) {
   if(n>=m-1)
      cout<<"Stackshi shesatani elementebi"<<endl; 
   else {
      n++;
      stack[n]=mn;
   }
}
void pop() {
   if(n<=-1)
      cout<<"Stackidan gamosatani elementebi"<<endl;
   else {
      cout<<"elementebia"<< stack[n] <<endl;
      n--;
   }
}
void display() {
   if(n>=0) {
      cout<<"stekis elementebia:";
      for(int i=n; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"carielia";
}
int main() {
   int ch, mn; 
   cout<<"1 stackis dawyeba"<<endl;
   cout<<"2 stackis elementebi"<<endl;
   cout<<"3 stackis gamotana ekranze"<<endl;
   cout<<"4 Exit"<<endl;
   do {
      cout<<"airchiet: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"sheiyvanet sawyisi mnishvneloba:"<<endl;
            cin>>mn;
            p(mn);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"araswori archevani"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}
