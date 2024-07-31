//
//  main.cpp
//  1_C++入门
//
//  Created by 南毅 on 2024/3/28.
//

//#include <stdio.h>
//#include <stdlib.h>

//1.正常的命名空间定义
namespace bit{//bit是命名空间的名字，一般开发中使用项目名字做命名空间名。
    //命名空间中可以定义变量/函数/类型
    int rand = 10;

    int Add(int left,int right){
        return left + right;
    }

    struct Node{
        struct Node* next;
        int val;
    };

}

//2.命名空间可以嵌套
namespace N1{
    int a,b;
    int Add(int left,int right){
        return left + right;
    }
    
    namespace N2{
    int c,d;
    int Sub(int left,int right){
        return left - right;
    }
    }

}

//3.同一个工程中允许存在多个相同名称的命名空间，编译器最后会合并成同一个命名空间中
namespace N1{
int MUL(int left,int right){
    return left*  right;
}
}


//int main(int argc, const char * argv[])
//{
//    using namespace N1;
//    printf("%d\n",Add(2, 5));
//    return 0;
//}


#include <iostream>
//std是C++标准库的命名空间名，C++将标准库的定义实现都放到这个命名空间中
using namespace std;
//int main(int argc, const char * argv[]){
//    cout<<"hello world!"<<endl;
//    return 0;
//}

//int main(int argc, const char * argv[]){
//    int a; double b; char c;
//
//    //可以自动识别变量的类型
//    cin>>a;
//    cin>>b>>c;
//
//    cout<<a<<endl;
//    cout<<b<<" "<<c<<endl;
//    return 0;
//}
//ps：关于cout和cin还有很多更复杂的用法，比如控制浮点数输出精度，控制整形输出进制格式等等。因为C++兼容C语言的用法，这些又用得不是很多，我们这里就不展开学习了。后续如果有需要，我们再配合文档学习。

//void Func(int a = 10, int b = 20, int c = 30){
//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"c = "<<c<<endl;
//}


////1.参数类型不同
//int Add(int left, int right){
//    cout<<"int Add(int left, int right)"<<endl;
//    return left + right;
//}
//
//double Add(double left, double right){
//    cout<<"double Add(double left, double right)"<<endl;
//    return left + right;
//}
//
////2.参数个数不同
//void f(){
//    cout<<"f()"<<endl;
//}
//
//void f(int a){
//    cout<<"f(int a)"<<endl;
//}
//
////3.参数类型顺序不同
//void f(int a, char b){
//    cout<<"f(int a, char b)"<<endl;
//}
//
//void f(char a, int b){
//    cout<<"f(char a, int b)"<<endl;
//}


void TestRef(){
    int a = 10;
    int& ra = a;//<====定义引用类型
    cout<<"a = "<<a<<endl;
    cout<<"ra = "<<ra<<endl;
}

void TestRef1(){
    int a = 10;
    //int& ra;//未初始化
    int& ra = a;
    int& rra = ra;
    cout<<&a<<endl<<&ra<<endl<<&rra<<endl;
}

//void TestConstRef(){
//    const int a = 10;
//    const int& ra = a;
//    const int& b = 10;
//}


//int main(int argc, const char * argv[]){
//    int x = 10;
//    int& y = x;
//
//    //权限的缩小，可以
//    const int& z =x;
//    //z++; 不可以
//    y++;
//
//    // 权限的方法
//    // m只读
//    // n变成我的别名，n的权限是可读可写
//    // 权限的放大，不可以
//    const int m = 0;
//    //int& n = m;不可以
//    const int &n = m;//可以
//
//    int p = m;//可以 m拷贝的给p，p的修改不影响m
//
//    //权限的放大不可以
//    const int* p1 = &m;
//    p1++;//可以 而*p1不可以 const修饰的是*p1
//    //int *p2 = p1; 不可以
//
//    //权限的缩小
//    int* p3 = &x;
//    const int* p4 = p3;
//    return 0;
//}

//void TestConstRef(){
//    const int a =10;
//    //int& ra = a; 该语句编译时会出错，a是常量
//    const int& ra = a;//权限的平移
//    //int& b = 10; 该语句编译时会出错，b是常量
//    const int& b = 10;
//    double d = 12.34;
//    //int& rd = d; 类型不同
//    const int& rd = d;//权限的缩小
//
//}

//void Swap(int &x,int & y){
//    int tmp = x;
//    x = y;
//    y = tmp;
//}

//int& Count(){
//    static int n = 0;
//    n++;
//    //...
//    return n;
//}

//int& Add (int a, int b){
//    int c = a + b;
//    return c;
//}
//int main(int argc, const char * argv[]){
//    int& ret = Add (1, 2);
//    Add (3, 4);
//    cout<<"Add(1, 2) is :"<<ret<<endl;
//    return 0;
//}
//struct A { int a[10000]; };
//
//A TestFunc1(A a) {
//    return a;
//}
//A& TestFunc2(A& a) {
//    return a;
//}
//void TestRefAndValue()
//{
//    A a;
//    // 以值作为函数参数
//    size_t begin1 = clock();
//    for (size_t i = 0; i < 10000; ++i)
//        TestFunc1(a);
//    size_t end1 = clock();
//
//    // 以引用作为函数参数
//    size_t begin2 = clock();
//    for (size_t i = 0; i < 10000; ++i)
//        TestFunc2(a);
//    size_t end2 = clock();
//
//    // 分别计算两个函数运行结束后的时间
//    cout << "TestFunc1-time:" << end1 - begin1 << endl;
//    cout << "TestFunc2-time:" << end2 - begin2 << endl;
//}
//
//int main(int argc, const char * argv[])
//{
//    TestRefAndValue();
//
//    return 0;
//}


//int main(int argc, const char * argv[])
//{
//    int a = 0;
//    int& b = a;  // 语法上不开空间
//    int* p = &a; // 语法上要开空间
//
//    int* ptr = NULL;
//    int& r = *ptr;
//    //cout << r << endl;
//
//    cout << sizeof(b) << endl;
//    cout << sizeof(int&) << endl;
//    b++;
//    p++;
//
//    return 0;
//}

//inline int& Add (int a, int b){
//    int c = a + b;
//    return c;
//}
//int main(int argc, const char * argv[]){
//    cout<<Add(10, 11)<<endl;
//    return 0;
//}

//int main()
//{
//    int j = 0;
//
//    // 右边初始化自动推导类型
//    auto i = 0;
//    std::map<std::string, std::string> dict;
//
//    // 等价的，auto可以替代写起来比较长的类型的定义，简化代码
//    //std::map<std::string, std::string>::iterator it = dict.begin();
//    auto it = dict.begin();
//
//    return 0;
//}


//int main(int argc, const char * argv[])
//{
//    int j = 0;
//    // 右边初始化自动推导类型
//    auto i = 0;
//   // std::map<std::string, std::string> dict;
//
//    // 等价的，auto可以替代写起来比较长的类型的定义，简化代码
//    //std::map<std::string, std::string>::iterator it = dict.begin();
//    //auto it = dict.begin();
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int array[] = { 1, 2, 3, 4, 5 };
//
//    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//    {
//        array[i] *= 2;
//    }
//
//    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//    {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//int main(int argc, const char * argv[])
//{
//    int array[] = { 1, 2, 3, 4, 5 };
//    // C++11 范围for
//    // 自动取数组array中，赋值给e
//    // 自动++，自动判断结束
//    for (auto& e : array)
//    {
//        e /= 2;
//    }
//
//    for (int x : array)
//    {
//        cout << x << " ";
//    }
//        cout << endl;
//    return 0;
//}

void f(int){
    cout<<"f(int)"<<endl;
}
void f(int*){
    cout<<"f(int*)"<<endl;
}
int main(int argc, const char * argv[]){
    f(0);
    f(NULL);
    f((int*)NULL);
    f(nullptr);
    
}
