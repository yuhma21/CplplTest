#include <iostream>
using namespace std;

bool Input(double& n){
	cin >> n;
	return n>=0;
}

bool Average() {
	int count;
	double n;
	double avr = 0;

	for(count = 0;Input(n);++count){
		avr += n;
	}
	if(count == 0){
		return false;
	}

	avr /= count;
	cout << "���ϒl��" << avr << "�ł�" << endl;
	return true;
}

int main(){
	while(Average()){
	}
}