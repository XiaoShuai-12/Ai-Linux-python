#include <iostream>
using namespace std;
#include<string>

template<class NameType, class AgeType = int>//Ĭ��AgeTypeΪint��
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

//��ģ��û���Զ������Ƶ�����ģʽ
void test01() {
    //Person("XiaoShuai"��20)�� //����������Ͳ�ƥ��
    Person<string, int>("XiaoShuai", 20).printInfo(); //��ȷ����
    Person<string, int> p("XiaoShuai", 20);
    p.printInfo(); //��ȷ����
}

void test02() {
    //��ģ����ģ������б��п�����Ĭ�ϲ���
    Person<string> p1("XiaoShuai", 20);
    p1.printInfo(); //��ȷ����
}

int main() {
    test01();
    test02();
    return 0;
}