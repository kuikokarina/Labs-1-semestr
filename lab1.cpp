#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	double x, y, z, w;
	while (true) {
		cin >> x >> y >> z; //ввод данных
		if (cin.good()) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Error" << endl;
		}
	}

	
	
	double pod_kornem;
	const float e = 2.714;
	pod_kornem = pow(x, 6) + pow(log(y), 2); //значение под корнем
	double koren;
	koren = pow(pod_kornem, 1 / 3); // вычисление корня
	double chislitel;
	chislitel = pow(e, abs(x - y)) * pow(abs(x - y), x + y); //числитель
	double znamenatel;
	znamenatel = atan(x) + atan(z); //знаменатель
	w = koren + (chislitel / znamenatel); //значение выражения
	cout << fixed << setprecision(3) << w;
	return 0;
}