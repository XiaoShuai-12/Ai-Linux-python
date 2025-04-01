//�Լ�ͨ��������ģ��
#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι��죬����
	MyArray(int capacity) {
		//cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}

	//��������
	MyArray(const MyArray<T>& arr) {
		//cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//��������ʱ����Ҫ���¿����ڴ�ռ�
		this->pAddress = new T[arr.m_Capacity];
		//��������Ԫ��
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=,��ֹǳ����
	MyArray<T>& operator=(const MyArray<T>& arr) {
		//���ж϶����Ƿ������ݣ��еĻ����ͷ�
		//cout << "operator=" << endl;
		if (this->pAddress!= NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���¿����ڴ�ռ�
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		//��������Ԫ��
		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//β�巨
	void Push_Back(const T& value) {
		//cout << "β�巨" << endl;
		if (this->m_Size >= this->m_Capacity) {//�ж������Ƿ�����
			//������������Ҫ����
			cout << "��������" << endl;
			return;
		}
		this->pAddress[this->m_Size] = value;//�����ݲ�������
		this->m_Size++;//����ʵ�ʴ�С+1
	}

	//βɾ��
	void Pop_Back() {
		//cout << "βɾ��" << endl;
		if (this->m_Size <= 0) {//�ж������Ƿ�Ϊ��
			//����Ϊ�գ�����ɾ
			cout << "����Ϊ��" << endl;
			return;
		}
		this->m_Size--;//����ʵ�ʴ�С-1
	}

	//ͨ���±����Ԫ��
	T& operator[](int index) {
		//cout << "ͨ���±����Ԫ��" << endl;
		if (index < 0 || index >= this->m_Size) {//�ж��±��Ƿ�Խ��
			//�±�Խ�磬�׳��쳣
			cout << "�±�Խ��" << endl;
			throw "�±�Խ��";
		}
		return this->pAddress[index];
	}

	//������������
	int getCapacity()  {
		//cout << "������������" << endl;
		return this->m_Capacity;
	}

	//��������ʵ�ʴ�С
	int getSize() {
		//cout << "��������ʵ�ʴ�С" << endl;
		return this->m_Size;
	}
	//��������
	~MyArray() {
		if (this->pAddress!= NULL) {
			//cout << "��������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//���������
	int m_Size;//�����ʵ�ʴ�С
};