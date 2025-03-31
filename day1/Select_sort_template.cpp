//ʵ��ģ�庯����ѡ�������㷨
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

//��������Ԫ�صĺ���ģ��
template<typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;      
    b = temp;
}

//ѡ������ģ�庯��������
template<typename T>
//TΪ���Ͳ�����arrΪ���飬nΪ�����С
void select_sort(T arr[], int n) {
    //ѡ�������㷨��ʵ��
    for (int i = 0; i < n - 1; i++) {
        //Ѱ��[i,n)�������Сֵ
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            //����ҵ���Сֵ�������min_index
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        //����arr[i]��arr[min_index]
        if (min_index != i) {
            mySwap(arr[i], arr[min_index]);
        }
    }
}
//��ӡģ�庯��
template<typename T>
void print_arr(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//���Դ���
//int��
void test01() {
    int intArr[] = { 5, 2, 7, 1, 9, 3, 8, 4, 6 };
    int n = sizeof(intArr) / sizeof(intArr[0]);
    select_sort(intArr, n);
    print_arr(intArr, n);
}
//char��
void test02() {
    char charArr[] = "bsaudiwa";
    int n = sizeof(charArr) / sizeof(charArr[0]);
    select_sort(charArr, n);
    print_arr(charArr, n);
}
int main() {
   test01();
   test02();
   return 0;
}