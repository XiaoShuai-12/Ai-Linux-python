#include <iostream>
#include <string>
using namespace std;

// 类模板基本语法
// 类模板声明：template<class T> class 类名 {... };
// 类模板实例化：类名<类型> 对象名;
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
