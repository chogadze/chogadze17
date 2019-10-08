#include <iostream>
#include <cmath>

using namespace std;

class kvgant{
	private:
		double a;
		double b;
		double c;
	public:
		kvgant(double a=1, double b=0, double c=0){
			set(a,b,c);
		}
		void set(double a=1, double b=0, double c=0){
			setA(a);
			setB(b);
			setC(c);
		}
		void setA(double A=1){
			if(A==0) A=1;
			a=A;
		}
		void setB(double B=0){
			b=B;
		}
		void setC(double C=0){
			c=C;
		}
		double GetA(){
			return a;
		}
		double GetB(){
			return b;
		}
		double GetC(){
			return c;
		}
		double D(){
			return b*b-4*a*c;
		}
		double Re(){
			return -b/(2*a);
		}
		double Im(){
			return sqrt(fabs(D()))/(2*a);
		}
};

class displayKVG{
	public:
		string getroot(kvgant KVG, unsigned int k){
			
		}
		string KVGEquation(kvgant KVG){
			
		}
		void display(kvgant KVG){
			cout<<KVGEquation(KVG)<<endl;
		}
		void DisplayRoots(kvgant KVG, unsigned int k){
			if(k==0){
				if(KVG.D()>=0){
					cout<<"X1="<<KVG.Re()-KVG.Im()<<endl;
					cout<<"X2="<<KVG.Re()+KVG.Im()<<endl;
				}
				if(KVG.D()<0){
					cout<<"X1="<<KVG.Re()<<"-i*"<<KVG.Im()<<endl;
					cout<<"X2="<<KVG.Re()<<"+i*"<<KVG.Im()<<endl;
				}
			}
			if(k==1){
				if(KVG.D()>=0){
					cout<<"X1="<<KVG.Re()-KVG.Im()<<endl;
					
				}
				if(KVG.D()<0){
					cout<<"X1="<<KVG.Re()<<"-i*"<<KVG.Im()<<endl;					
				}
			}
			if(k==2){
				if(KVG.D()>=0){
					cout<<"X2="<<KVG.Re()+KVG.Im()<<endl;
				}
				if(KVG.D()<0){
					
					cout<<"X2="<<KVG.Re()<<"+i*"<<KVG.Im()<<endl;
				}
			}
		}
};


int main(int argc, char** argv) {
	double a=0; cout<<"a="; cin>>a;
	double b=0; cout<<"b="; cin>>b;
	double c=0; cout<<"c="; cin>>c;
	kvgant k=kvgant(a,b,c);
	displayKVG kvgd;
	kvgd.DisplayRoots(k, 0);
	return 0;
}
