//模板函数：创建一个通用函数，返回值类型和形参类型不用指定，而是在调用时指定。
//模板函数的声明格式：
//template <typename T>

#include <iostream>
using namespace std;

template <typename T>//声明创建模板函数
//T代表参数类型，可以是任意类型
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

void test01() {//调用模板函数的方法
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    //调用模板函数的方法有两种：
    //1.直接调用模板函数，并传入参数
    //mySwap(a, b);
    //2.显示指定类型，并传入参数
    mySwap<int>(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
}

test02() {//函数模板的注意事项
    //1.自动类型推导，必须推导出一致的数据类型T才可以使用
    //模板必须确定出T的数据类型才可以使用
    //mySwap(10, 20); //编译错误，类型不确定，错误！
    int a = 10, b = 20;
    char c = 'c';
    mySwap(a, b); //自动推导出T为int,正确！
    //mySwap(a, c); //编译错误，类型不一致，错误！
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    test01();
    return 0;
}