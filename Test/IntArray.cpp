#include "IntArray.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

IntArray::IntArray(int size){
	m_array = new int[size];
	m_size = size;
}
IntArray::IntArray(const IntArray& other){
	m_array = new int[other.m_size];
	m_size = other.m_size;

	copy(other.m_array,other.m_array+m_size,m_array);
	cout << "コピーコンストラクタ" << endl;
}

IntArray::~IntArray(){
	delete [] m_array;
}

int IntArray::Get(int i){
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i,int value){
	CheckIndex(i);
	m_array[i] = value;
}

void IntArray::CheckIndex(int i){
	if(0 <= i && i < m_size){

	}else{
		cout << "インデックスが不正" << endl;
		exit(EXIT_FAILURE);
	}
}

int IntArray::Size(){
	return m_size;
}