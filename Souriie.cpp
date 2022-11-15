#include <iostream>
#include <ctime>
using namespace std;
double aD(double a){
	return  3 * a;
}
double aQ(double a) {
	return a * 2 * sqrt(3/4);
}
double aM(double x, double y) {
	return (x + y) / 2;
}
double aV(double x, double y) {
	return sqrt(x * y);
}
double powerA4(double a) {
	//double res = a * a * a;
	return a * a * a * a;

}
double powerA2(double a) {
	//double res = a * a * a;
	return a * a ;

}
double powerA3(double a) {
	//double res = a * a * a;
	return a * a * a;
	
}
int main() {
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << " x " << "x^3 =" << x3 << endl;*/
		//2
		/*srand(time(nullptr));
		for (int i = 1; i <= 5; i++) {
			double x = rand() % 11;
			double x2 = powerA2(x);
			double x4 = powerA4(x);
			cout << "x^2 =" << x2 << endl << "x^4 =" << x4 << endl;
		}*/
		//3
		/*srand(time(nullptr));
		for (int i = 1; i <= 10; i++) {
			double x1 = rand() % 100 * 0.1;
			double y1 = rand() % 100 * 0.1;
			double a = aM(x1, y1);
			double g = aV(x1, y1);
			cout << x1 << ' ' << y1 << " a =" << a << ' ' << " g =" << g << endl;
		}*/
		//4
	/*int s , w , r;
	cin >> s >>w>>r;
	for (int i = 1; i <= 3; i++) {
		double S = aQ(s);
		double P = aD(s);
		cout << " S = " << S << ' ' << " P =" << P << endl;
	}*/
}