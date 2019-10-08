#include <iostream>
#include <cmath>

using namespace std;
 
struct wibo{
		double a;
		double b;
		double c;
};

class paralelipiped{
	private:
	 	wibo mywibo;
	 	double verify(double tmp){
	 		return fabs(tmp);
		 }
	public:
		paralelipiped(wibo W){
			Set(W);
		}
		
		paralelipiped(double a=0, double b=0, double c=0){
			Set(a,b,c);
		}
		
		void Set(double a=0, double b=0, double c=0){
			SetA(a);
			SetB(b);
			SetC(c);
		}
		
		void Set(wibo W){
			Set(W.a,W.b,W.c);
		}
		
		void SetA(double a=0){
			mywibo.a=verify(a);
		}

		void SetB(double b=0){
			mywibo.b=verify(b);
		}

		void SetC(double c=0){
			mywibo.c=verify(c);
		}
		
		wibo Get(){
			return mywibo;
		}
		
		double S(){
			return (mywibo.a*mywibo.b+mywibo.b*mywibo.c+mywibo.c*mywibo.a)*2;
		}
		
		double V(){
			return (mywibo.a*mywibo.b*mywibo.c);
		}		
		
		double D(){
			return sqrt(mywibo.a*mywibo.a+mywibo.b*mywibo.b+mywibo.c*mywibo.c);
		}
		
		double R(){
			return D()/2;
		}
};

class Cube{
	private:
		paralelipiped myp=paralelipiped(0,0,0);
	public:
		/*Cube(){
			myp.Set(0,0,0);
		}*/
		
		/*Cube(double a=0){
			myp.Set(a,a,a);	
		}*/
		
		wibo Get(){
			return myp.Get();
		}
		
		void SetA(double a=0){
			myp.Set(a,a,a);
		}
		
		double S(){
			return myp.S();
		}
		
		double V(){
			return myp.V();
		}
		
		double D(){
			return myp.D();
		}	
		
		double R(){
			return myp.R();
		}
};
wibo Get(){
	wibo mas;
	cout<<"a=";cin>>mas.a;
	cout<<"b=";cin>>mas.b;
	cout<<"c=";cin>>mas.c;
	return mas;
}
int main(int argc, char** argv) {
	paralelipiped P=paralelipiped(Get());
	cout<<P.S()<<"\t"<<P.V()<<endl;
	Cube C;
	C.SetA(1);
	cout<<C.S()<<"\t"<<C.V()<<endl;
	return 0;
}
