#include<iostream>
using namespace std;
#include<string>
//ģ�庯����ʵ��
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

//���캯������ʵ��
template<class T1, class T2>//�����Ǹ�ģ��
Person<T1, T2>::Person(T1 n, T2 a) {
    //Person�������ڵ�name��age

    name = n;
    age = a;
}

//��Ա��������ʵ��
template<class T1, class T2>
void Person<T1, T2>::print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {