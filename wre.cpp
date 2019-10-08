#include <iostream>
#include <cmath>
using namespace std;
class wre{
	private:
		double R;
	public:
		wre(){
			Set(0);
		}
		
		wre(double R){
			Set(R);
		}
		
		void Set(double R=0);
		double Get();
		
		double S();
		double L();
		double D();
};

void wre::Set(double R){
	wre::R=fabs(R);
}

double wre::Get(){
	return R;
}
		
double wre::S(){
	return M_PI*R*R;
}
double wre::L(){
	return 2*M_PI*R;
}
double wre::D(){
	return R*2;
}
int main(int argc, char** argv) {
		

	return 0;
}
