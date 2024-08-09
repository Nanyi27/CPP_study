//
//  main.cpp
//  模版初阶
//
//  Created by 南毅 on 2024/4/24.
//

#include <iostream>
using namespace std;


//void Swap(char& left, char& right)
//{
//    int temp = left;
//    left = right;
//    right = temp;
//}
//
//void Swap(int& left, int& right)
//{
//    int temp = left;
//    left = right;
//    right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//    double temp = left;
//    left = right;
//    right = temp;
//}
//
////template<typename T1,typename T2,......,typename Tn>
//
//template<typename T>
//void Swap(T& left,T& right){
//    T tmp = left;
//    left = right;
//    right = tmp;
//}
//
//
//
//int main(){
//    int x = 10;
//    int y = 20;
//    Swap(x, y);
//
//    double d1 = 3.0;
//    double d2 = 2.0;
//    Swap(d1, d2);
//
//    char a1 = 'a';
//    char a2 = 'b';
//    Swap(a1, a2);
//    return 0;
//}


//template<class T>
//T Add(const T& x,const T& y){
//    return x+y;
//}
//
//int main() {
//    int a1 = 10, a2 = 20;
//    double d1 = 10.0, d2 = 20.0;
//
//    cout<<Add(a1, a2)<<endl;
//    cout<<Add(d1, d2)<<endl;
//    //Add(a1, d1);//会报错
//    return 0;
//}

//template<class T>
//T Add(const T& x,const T& y){
//    return x+y;
//}
//
//int main(){
//    int a = 10;
//    double b = 20.9;
//
//    //显式实例化
//    cout << Add<int>(a, b) << endl;
//    return 0;
//}



//// 专门处理int的加法函数
//int Add(int left , int right){
//    return left+right;
//}
//
//template<class T>
//// 通用加法函数
//T Add(T left, T right) {
//    return left + right;
//}
//
//void Test() {
//    Add(1,2);// 与非函数模板类型完全匹配，不需要函数模板实例化
//    cout << Add(1.0,2.0) <<endl;// 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//
//}
//
//int main(){
//    Test();
//    return 0;
//}


//template<class T1, class T2, ..., class Tn>
//class T类模板名
//{
//// 类内成员定义
//};

// 类模版
template<typename T>
class Stack
{
public:
    Stack(size_t capacity = 4)
    {
        _array = (T*)malloc(sizeof(T) * capacity);
        if (nullptr == _array)
        {
            perror("malloc申请空间失败");
            return;
        }
        _capacity = capacity;
        _size = 0;
    }

    void Push(const T& data);
private:
    T* _array;
    size_t _capacity;
    size_t _size;
};

// 模版不建议声明和定义分离到.h 和.cpp会出现链接错误，具体原因后面会讲
// 要分离也分离在.h
template<class T>

// 注意:类模板中函数放在类外进行定义时，需要加模板参数列表
void Stack<T>::Push(const T& data)
{
    // 扩容
    _array[_size] = data;
    ++_size;
}

int main()
{
    Stack<int> st1;    // int
    Stack<double> st2; // double

    return 0;
}
