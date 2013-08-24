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
	cout << "名前 : " << name <<endl
		<< " 国語 : " << scoreJapanese << " 点"
		",数学 : " << scoreMath << " 点"
		",英語 : " << scoreEnglish << " 点" << endl;
}

int main() {
	Student student[] = {
		{"赤い隆",73,98,86},
		{"火災大輔",64,45,40},
		{"よしd可能",76,78,69},
	};
	int size = sizeof student / sizeof *student;

	for(int i=0;i<size;i++){
		student[i].Show();
	}
}