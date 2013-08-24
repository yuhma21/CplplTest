#include <iostream>
using namespace std;

class Integer {
public:
	int m_value;

	Integer();
	Integer(int value);
	void Show();
};

//コンストラクタ
Integer::Integer(){
	m_value = 0;
}
Integer::Integer(int value){
	m_value=value;
}

void Integer::Show(){
	cout << m_value << endl;
}

int main() {
	Integer a();
	Integer b(100);
	Integer c(40);

	b.m_value=3;

	a.Show();
	b.Show();
	c.Show();
}