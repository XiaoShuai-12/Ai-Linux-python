#include<iostream>
using namespace std;
#include<string>
//模板函数外实现
template<class T1, class T2>
class Person {
public:
    T1 name;
    T2 age;
    Person(T1 n, T2 a);
    /*{
        name = n;
        age = a;
    }*/
    void print();
    /*{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }*/
};

//构造函数类外实现
template<class T1, class T2>//声明是个模板
Person<T1, T2>::Person(T1 n, T2 a) {
    //Person作用域内的name和age

    name = n;
    age = a;
}

//成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {