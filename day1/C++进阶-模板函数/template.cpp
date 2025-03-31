//ģ�庯��������һ��ͨ�ú���������ֵ���ͺ��β����Ͳ���ָ���������ڵ���ʱָ����
//ģ�庯����������ʽ��
//template <typename T>

#include <iostream>
using namespace std;

template <typename T>//��������ģ�庯��
//T����������ͣ���������������
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

void test01() {//����ģ�庯���ķ���
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    //����ģ�庯���ķ��������֣�
    //1.ֱ�ӵ���ģ�庯�������������
    //mySwap(a, b);
    //2.��ʾָ�����ͣ����������
    mySwap<int>(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
}

test02() {//����ģ���ע������
    //1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
    //ģ�����ȷ����T���������Ͳſ���ʹ��
    //mySwap(10, 20); //����������Ͳ�ȷ��������
    int a = 10, b = 20;
    char c = 'c';
    mySwap(a, b); //�Զ��Ƶ���TΪint,��ȷ��
    //mySwap(a, c); //����������Ͳ�һ�£�����
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    test01();
    return 0;
}