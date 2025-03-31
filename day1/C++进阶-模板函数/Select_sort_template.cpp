//实现模板函数的选择排序算法
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

//交换两个元素的函数模板
template<typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;      
    b = temp;
}

//选择排序模板函数的声明
template<typename T>
//T为类型参数，arr为数组，n为数组大小
void select_sort(T arr[], int n) {
    //选择排序算法的实现
    for (int i = 0; i < n - 1; i++) {
        //寻找[i,n)区间的最小值
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            //如果找到更小值，则更新min_index
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        //交换arr[i]和arr[min_index]
        if (min_index != i) {
            mySwap(arr[i], arr[min_index]);
        }
    }
}
//打印模板函数
template<typename T>
void print_arr(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//测试代码
//int型
void test01() {
    int intArr[] = { 5, 2, 7, 1, 9, 3, 8, 4, 6 };
    int n = sizeof(intArr) / sizeof(intArr[0]);
    select_sort(intArr, n);
    print_arr(intArr, n);
}
//char型
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