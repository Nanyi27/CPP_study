//
//  main.cpp
//  C++内存管理
//
//  Created by 南毅 on 2024/4/22.
//

#include <iostream>
using namespace std;
//
//int globalvar = 1;
//static int staticGlobalvar = 1;
//void Test(){
//    static int staticVar = 1;
//    int localVar = 1;
//
//    int num1[10] = {1,2,3,4};
//    char char2[] = "abcd";
//    const char* pChar3 = "abcd";
//    int* ptr1 = (int*)malloc(sizeof(int)*4);
//    int* ptr2 = (int*)calloc(4, sizeof(int));
//    int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//    free(ptr1);
//    free(ptr3);
//
//    cout<<sizeof(num1)<<endl;//40
//    cout<<sizeof(char2)<<endl;//5
//    cout<<sizeof(pChar3)<<endl;//4 or 8
//    cout<<sizeof(ptr1)<<endl;//4 or 8
//    cout<<strlen(char2)<<endl;//4
//    cout<<strlen(pChar3)<<endl;//4
//
//
//}
//
//int main(){
//    Test();
//    return 0;
//}

//void Test () {
//    int* p1 = (int*)malloc(sizeof(int));
//    free(p1);
//// 1.malloc/calloc/realloc的区别是什么?
//    int* p2 = (int*)calloc(4, sizeof (int));
//    int* p3 = (int*)realloc(p2, sizeof(int)*10);
//// 这里需要free(p2)吗?
//    free(p3);
//}

//void Test() {
//// 动态申请一个int类型的空间
//    int* ptr4 = new int;
//// 动态申请一个int类型的空间并初始化为10
//    int* ptr5 = new int(10);
//// 动态申请10个int类型的空间
//    int* ptr6 = new int[10];
//
//    delete ptr4;
//    delete ptr5;
//    delete[] ptr6;
//}
//
//int main(){
//    Test();
//    return 0;
//}

//#include <iostream>
//using namespace std;
 
//int main()
//{
//    //单个空间开辟和释放
//    int* ptr = new int;//不初始化
//    cout << *ptr << endl;
//    int* ptr1 = new int(10);//初始化为10
//    cout << *ptr1 << endl;
//    delete ptr;
//    delete ptr1;
//
//    //连续空间开辟和释放
//    int* ptr2 = new int[5];//不初始化
//    int* ptr3 = new int[5] {1, 2, 3, 4, 5};//初始化
//    for (int i = 0; i < 5; i++)
//    {
//        cout << ptr2[2] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        cout << ptr3[i] << " ";
//    }
//
//    delete[] ptr2;
//    delete[] ptr3;
//
//    return 0;
//
//}

//void Test() {
//// 动态申请一个int类型的空间
//    int* ptr4 = new int;
//// 动态申请一个int类型的空间并初始化为10
//    int* ptr5 = new int(10);
//// 动态申请10个int类型的空间
//    int* ptr6 = new int[10];
////    10个int分别用列表中对应的初始化容器初始化
//    int* ptr7 = new int[10]{0,1,2,3,4,5,6,7,8,9};
//
//    delete ptr4;
//    delete ptr5;
//    delete[] ptr6;
//}
//
//int main(){
//    Test();
//    return 0;
//}

 
class A
{
public:
    A(int a = 0)
        : _a(a)
    {
        cout << "A():" << this << endl;
    }

    ~A()
    {
        cout << "~A():" << this << endl;
    }
private:
    int _a;
};

int main()
{
    // p1现在指向的只不过是与A对象相同大小的一段空间，还不能算是一个对象，因为构造函数没 有执行
    A* p1 = (A*)malloc(sizeof(A));
    //使用格式：new(place_address)type
    new(p1)A(2); // 注意:如果A类的构造函数有参数时，此处需要传参
    p1->~A();// 析构函数可以显式调用
    free(p1);
    
    A* p2 = (A*)operator new(sizeof(A));// 也可以直接使用operator new函数开辟空间
    // 在空间中调用构造函数创建对象
    new(p2)A(10);
    p2->~A();// 析构函数可以显式调用
    operator delete(p2);

    return 0;
}
