#include <iostream>
using namespace std;
#include <string>
//提前知道类存在
template<class T1, class T2>
class Person;

//类外实现
template<class T1, class T2>
void printInfo2(Person<T1, T2>& p) {
    cout << "类外实现--Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

template<class T1, class T2 >
class Person {
    //全局函数，类内实现
    friend void printInfo(Person<T1, T2>& p) {
        cout << "类内实现--Name: " << p.name << endl;
        cout << "Age: " << p.age << endl;
    }
    //全局函数，类外实现
    //加空模板参数列表
    //需要让编译器提前知道函数存在
    friend void printInfo2(Person<T1, T2>& p);
public:
    Person(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }
private:
    T1 name;
    T2 age;
};


void test01() {
    Person<string, int> p("XiaoShuai", 20);
    printInfo(p); // 调用类内实现的全局函数
    printInfo2(p); // 调用类外实现的全局函数
}

int main() {
    test01();
    return 0;
}