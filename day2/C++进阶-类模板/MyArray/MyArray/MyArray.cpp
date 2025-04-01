#include <iostream>
using namespace std;
#include "MyArray.hpp"
//ͨ������
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ��������Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ�������������

//��ӡ����Ԫ��
void printArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01() {
	MyArray<int> arr(5);

	for (int i = 0; i < 5; i++) {
		arr.Push_Back(i);//β�巨����
	}
	cout << "arr��ӡ�����" << endl;
	printArray(arr);
	cout << "arr������" << arr.getCapacity() << endl;//��ȡ������������
	cout << "arrԪ�ظ�����" << arr.getSize() << endl;//��ȡ����Ԫ�ظ�������
	arr.Pop_Back();//βɾ������
	cout << "arrɾ�����һ��Ԫ�غ�" << endl;
	printArray(arr);
	cout << "arr������" << arr.getCapacity() << endl;
	cout << "arrԪ�ظ�����" << arr.getSize() << endl;
}

class Person {
public:
	string name;
	int age;
	Person() {};
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};
void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i].name << " " << arr[i].age << endl;
	}
}
void test02() {
	MyArray<Person> arr(5);
	Person p1("XiaoShuai", 20);
	Person p2("XiaoMing", 25);
	Person p3("XiaoHong", 30);
	Person p4("XiaoJie", 35);
	Person p5("XiaoHua", 40);

	//β�巨
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);	
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArray(arr);
	cout << "arr������" << arr.getCapacity() << endl;
	cout << "arrԪ�ظ�����" << arr.getSize() << endl;

	//βɾ��
	arr.Pop_Back();
	printPersonArray(arr);
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}