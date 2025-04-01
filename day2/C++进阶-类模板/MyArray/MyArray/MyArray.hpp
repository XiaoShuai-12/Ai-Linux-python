//自己通用数组类模板
#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//有参构造，容量
	MyArray(int capacity) {
		//cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}

	//拷贝构造
	MyArray(const MyArray<T>& arr) {
		//cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//拷贝构造时，需要重新开辟内存空间
		this->pAddress = new T[arr.m_Capacity];
		//拷贝数组元素
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=,防止浅拷贝
	MyArray<T>& operator=(const MyArray<T>& arr) {
		//先判断堆区是否有数据，有的话先释放
		//cout << "operator=" << endl;
		if (this->pAddress!= NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//重新开辟内存空间
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		//拷贝数组元素
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//尾插法
	void Push_Back(const T& value) {
		//cout << "尾插法" << endl;
		if (this->m_Size >= this->m_Capacity) {//判断数组是否已满
			//数组已满，需要扩容
			cout << "数组已满" << endl;
			return;
		}
		this->pAddress[this->m_Size] = value;//将数据插入数组
		this->m_Size++;//数组实际大小+1
	}

	//尾删法
	void Pop_Back() {
		//cout << "尾删法" << endl;
		if (this->m_Size <= 0) {//判断数组是否为空
			//数组为空，不能删
			cout << "数组为空" << endl;
			return;
		}
		this->m_Size--;//数组实际大小-1
	}

	//通过下标访问元素
	T& operator[](int index) {
		//cout << "通过下标访问元素" << endl;
		if (index < 0 || index >= this->m_Size) {//判断下标是否越界
			//下标越界，抛出异常
			cout << "下标越界" << endl;
			throw "下标越界";
		}
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity()  {
		//cout << "返回数组容量" << endl;
		return this->m_Capacity;
	}

	//返回数组实际大小
	int getSize() {
		//cout << "返回数组实际大小" << endl;
		return this->m_Size;
	}
	//析构函数
	~MyArray() {
		if (this->pAddress!= NULL) {
			//cout << "析构函数" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;//数组的容量
	int m_Size;//数组的实际大小
};