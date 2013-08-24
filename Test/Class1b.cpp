#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	void Show();
};

void Student::Show(){
	cout << "���O : " << name <<endl
		<< " ���� : " << scoreJapanese << " �_"
		",���w : " << scoreMath << " �_"
		",�p�� : " << scoreEnglish << " �_" << endl;
}

int main() {
	Student student[] = {
		{"�Ԃ���",73,98,86},
		{"�΍Б��",64,45,40},
		{"�悵d�\",76,78,69},
	};
	int size = sizeof student / sizeof *student;

	for(int i=0;i<size;i++){
		student[i].Show();
	}
}