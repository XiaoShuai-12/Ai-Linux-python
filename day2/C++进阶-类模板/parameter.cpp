#include <iostream>
using namespace std;
#include<string>

//类模板
template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }
    void template_print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
private:
    T1 name;
    T2 age;
};
//类模板对象做函数参数
//1.指定传入类型
void PrintPerson1(Person<string, int>&p) {
    p.template_print();
}
void test01() {
    Person<string, int> p1("XiaoShuai", 20);
    PrintPerson1(p);
}

//2.参数模板化
template<typename T1, typename T2>
void PrintPerson2(Person<T1, T2>&p) {
    p.template_print();
    cout << "Type of T1: " << typeid(T1).name() << endl;
    cout << "Type of T2: " << typeid(T2).name() << endl;
}
void test02() {
    Person<string, int>p2("XiaoMei", 20);
   PrintPerson2(p2);
}
//3.整个类模板化
template<typename T>
void PrintPerson3(T & p) {
    p.template_print();
}
void test03() {
    Person<string, int>p3("XiaoHong", 20);
    PrintPerson3(p3);
}
int main() {
    test01();
    test02();
    test03();
    return 0;
}