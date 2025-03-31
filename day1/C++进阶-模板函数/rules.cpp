/*普通函数与模板函数重载时，调用规则：
1.如果普通函数和模板函数都可以调用，优先使用普通函数
2.可以通过空模板参数列表，强制调用模板函数
3.模板函数可以发生重载
4.如果模板函数可以更好的匹配，优先调用模板函数*/
#include <iostream>
using namespace std;
//模板函数
template<typename T>
void myPrint(T a,T b) {
    std::cout << "调用模板函数" << std::endl;
}
//重载的模板函数
template<typename T>
void myPrint(T a,T b,T c) {
    std::cout << "重载的模板函数" << std::endl;
}
//普通函数
void myPrint(int a,int b) {
    std::cout << "调用普通函数" << std::endl;
}

void test01() {
    int a = 1, b = 2;
    //myPrint(a,b); //1.如果普通函数和模板函数都可以调用，优先使用普通函数

    //myPrint<>(a,b); //2.可以通过空模板参数列表，强制调用模板函数
    //myPrint(a,b,3); //3.模板函数可以发生重载
    char c = 'c', d = 'd';
    myPrint(c,d); //4.如果模板函数可以更好的匹配，优先调用模板函数

}
int main() {
    test01();
    return 0;
}