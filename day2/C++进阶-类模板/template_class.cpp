#include <iostream>
#include <string>
using namespace std;

// ��ģ������﷨
// ��ģ��������template<class T> class ���� {... };
// ��ģ��ʵ����������<����> ������;
template<class NameType,class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	NameType m_name;
	AgeType m_age;
};

void test01() {
	Person<string, int> p1("XiaoShuai", 20);
}
int main() {
	test01();
	return 0;
}
