#include <iostream>
using namespace std;
#include<string>

template<class NameType, class AgeType = int>//默认AgeType为int型
class Person {
public:
    Person(NameType name, AgeType age){
        this->name = name;
        this->age = age;
    }
    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
private:
    NameType name;
    AgeType age;
};

//类模板没有自动类型推导调用模式
void test01() {
    //Person("XiaoShuai"，20)； //编译错误，类型不匹配
    Person<string, int>("XiaoShuai", 20).printInfo(); //正确调用
    Person<string, int> p("XiaoShuai", 20);
    p.printInfo(); //正确调用
}

void test02() {
    //类模板在模板参数列表中可以有默认参数
    Person<string> p1("XiaoShuai", 20);
    p1.printInfo(); //正确调用
}

int main() {
    test01();
    test02();
    return 0;
}