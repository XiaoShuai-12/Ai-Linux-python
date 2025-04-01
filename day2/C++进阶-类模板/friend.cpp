#include <iostream>
using namespace std;
#include <string>
//��ǰ֪�������
template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printInfo2(Person<T1, T2>& p) {
    cout << "����ʵ��--Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

template<class T1, class T2 >
class Person {
    //ȫ�ֺ���������ʵ��
    friend void printInfo(Person<T1, T2>& p) {
        cout << "����ʵ��--Name: " << p.name << endl;
        cout << "Age: " << p.age << endl;
    }
    //ȫ�ֺ���������ʵ��
    //�ӿ�ģ������б�
    //��Ҫ�ñ�������ǰ֪����������
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
    printInfo(p); // ��������ʵ�ֵ�ȫ�ֺ���
    printInfo2(p); // ��������ʵ�ֵ�ȫ�ֺ���
}

int main() {
    test01();
    return 0;
}