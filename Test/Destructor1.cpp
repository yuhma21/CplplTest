#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class IntArray {
public:
	IntArray(int size);
	~IntArray();

public:
	int Get(int i);
	void Set(int i,int value);

private:
	void Checkindex(int i);

private:
	int* m_array;
	int m_size;
};

IntArray::IntArray(int size){
	m_array = new int[size];
	m_size=size;

	cout << "コンストラクタが呼ばれました"
		<< "要素数は " << m_size<< " です" << endl;
}

IntArray::~IntArray(){
	delete[] m_array;

	cout << "デストラクタが呼ばれた"
		 << "。要素数は " <<m_size<< "deth" <<endl;
}

int IntArray::Get(int i){
	Checkindex(i);
	return m_array[i];
}

void IntArray::Set(int i,int value){
	Checkindex(i);
	m_array[i]=value;
}

void IntArray::Checkindex(int i){
	if(0 <= i && i < m_size){

	}else{
		cout << "インデックスが不正"<<endl;
		exit(EXIT_FAILURE);
	}
}

void Viss(int num){
	cout<<"Viss : No." <<num<<endl;
}

IntArray a(10);

int main() {
	Viss(1);

	IntArray b(20);
	Viss(2);

	IntArray c(30);
	Viss(3);
	{
		IntArray d(40);
		Viss(4);
	}
	Viss(5);
}