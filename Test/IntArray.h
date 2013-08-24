#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_

class IntArray{
public:
	//コンストラクタ
	IntArray(int size);
	IntArray(const IntArray& other);
	//デストラクタ
	~IntArray();

public:
	//メンバへのアクセス
	int Get(int i);
	void Set(int i, int value);
	//配列のサイズを返す
	int Size();

private:
	//インデックスのチェック
	void CheckIndex(int i);

private:
	int* m_array;
	int m_size;
};

#endif //INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_