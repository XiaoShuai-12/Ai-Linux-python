/*��ͨ������ģ�庯������ʱ�����ù���
1.�����ͨ������ģ�庯�������Ե��ã�����ʹ����ͨ����
2.����ͨ����ģ������б�ǿ�Ƶ���ģ�庯��
3.ģ�庯�����Է�������
4.���ģ�庯�����Ը��õ�ƥ�䣬���ȵ���ģ�庯��*/
#include <iostream>
using namespace std;
//ģ�庯��
template<typename T>
void myPrint(T a,T b) {
    std::cout << "����ģ�庯��" << std::endl;
}
//���ص�ģ�庯��
template<typename T>
void myPrint(T a,T b,T c) {
    std::cout << "���ص�ģ�庯��" << std::endl;
}
//��ͨ����
void myPrint(int a,int b) {
    std::cout << "������ͨ����" << std::endl;
}

void test01() {
    int a = 1, b = 2;
    //myPrint(a,b); //1.�����ͨ������ģ�庯�������Ե��ã�����ʹ����ͨ����

    //myPrint<>(a,b); //2.����ͨ����ģ������б�ǿ�Ƶ���ģ�庯��
    //myPrint(a,b,3); //3.ģ�庯�����Է�������
    char c = 'c', d = 'd';
    myPrint(c,d); //4.���ģ�庯�����Ը��õ�ƥ�䣬���ȵ���ģ�庯��

}
int main() {
    test01();
    return 0;
}