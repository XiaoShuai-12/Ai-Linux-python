#include <iostream>
using namespace std;
#include "MyArray.hpp"
//通用数组
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组元素
//可以获取数组中当前元素个数和数组容量

//打印数组元素
void printArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01() {
	MyArray<int> arr(5);

	for (int i = 0; i < 5; i++) {
		arr.Push_Back(i);//尾插法测试
	}
	cout << "arr打印输出：" << endl;
	printArray(arr);
	cout << "arr容量：" << arr.getCapacity() << endl;//获取数组容量测试
	cout << "arr元素个数：" << arr.getSize() << endl;//获取数组元素个数测试
	arr.Pop_Back();//尾删法测试
	cout << "arr删除最后一个元素后：" << endl;
	printArray(arr);
	cout << "arr容量：" << arr.getCapacity() << endl;
	cout << "arr元素个数：" << arr.getSize() << endl;
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

	//尾插法
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);	
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArray(arr);
	cout << "arr容量：" << arr.getCapacity() << endl;
	cout << "arr元素个数：" << arr.getSize() << endl;

	//尾删法
	arr.Pop_Back();
	printPersonArray(arr);
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}