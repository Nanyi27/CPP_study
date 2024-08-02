//
//  main.cpp
//  类和对象3⃣️
//
//  Created by 南毅 on 2024/4/19.
//

#include <iostream>
using namespace std;

//class Date{
//private:
//    int _year;
//    int _month;
//    int _day;
//
//    int& ret;
//
//public:
//    Date(int year = 2022,int month = 2,int day = 22)
//    :_year(year)
//    ,_month(month)
//    ,_day(day)
//    ,ret(year)  //引用成员变量，必须放在初始化列表位置进行初始化
//    {
//        //ret = 2020;  //放在函数体内初始化会报错
//    }
//
//};
//
//int main(int argc, const char * argv[]) {
//    Date d(2024,4,19);
//    return 0;
//}

//class Date{
//private:
//    int _year;
//    int _month;
//    int _day = 10;
//
//    const int n = 6;//const 变量
//
//
//public:
//    Date(int year = 2022,int month = 2,int day = 22)
//    :_year(year)
//    ,_month(month)
//    ,_day(day)
////    ,n(3)//const成员变量必须放在初始化列表位置进行初始化
//    {
//    }
//
//};
//
//int main(int argc, const char * argv[]) {
//    Date d(2024,4,19);
//    return 0;
//}

 
//class A//自定义类
//{
//private:
//    int _x;
//
//public:
//    //默认构造函数是不用传参就可以调用的构造函数，有3种：
//    //1.无参默认构造函数
//    //2.带参全缺省的默认构造函数
//    //3.我们不写，编译器自动生成的默认构造函数
//
//    A(int x)//这个不是默认构造函数
//    {
//        cout << "A(int x)" << endl;
//        _x = x;
//    }
//
//};

//
//class Date
//{
//public:
//    //构造函数
//    Date(int year = 2024, int month = 4, int day = 19)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//        , _a(20)//没有默认构造函数的自定义类型成员变量必须在初始化列表进行初始化
//    {
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//
//    A _a;
//};

//class A{
//private:
//    int _a2;
//    int _a1;
//
//public:
//    A(int a)
//    :_a1(a)
//    ,_a2(_a1)
//    {}
//
//    void Print(){
//        cout << _a1 << " " << _a2 <<endl;
//    }
//};
//
//int main(){
//    A aa(10);
//    aa.Print();
//}


//class Test{
//private:
//    int _a;
//    int _b;
//
//public:
//    explicit Test(int n,int m)
//    :_a(n)
//    ,_b(m)
//    {}
//
//    void print()
//    {
//        cout << _a << endl;
//    }
//};
//
//int main(){
//    Test t1(1);
//    Test t2 = 10;
//
//    t1.print();
//    t2.print();
//    return 0;
//}


//class A
//{
//public:
//    // 单参数构造函数
//    //explicit A(int a)
////    A(int a)
////        :_a(a)
////    {
////        cout << "A(int a)" << endl;
////    }
//
//    // 多参数构造函数
//     A(int a1, int a2 = 3)
//        :_a(0)
//        ,_a1(a1)
//        ,_a2(a2)
//    {}
//
//    A(const A& aa)
//        :_a(aa._a)
//    {
//        cout << "A(const A& aa)" << endl;
//    }
//
//private:
//    int _a;
//    int _a1;
//    int _a2;
//};
//
//int main()
//{
////    A aa1(1);
////    // 拷贝构造
////    A aa2 = aa1;
////
////    // 隐式类型转换
////    // 内置类型转换为自定义类型
////    // 3构造一个A的临时对象，在用这个临时对象拷贝构造aa3
////    // 编译器遇到连续构造+拷贝构造->优化为直接构造
////    A aa3 = 3;
////
////    // raa 引用的是类型转换中用3构造的临时对象
////    const A& raa = 3;
//
//
// //   A aaa1(1, 2);
// //     A aaa2 = {1};
//    const A& aaa3 = { 1, 2 };
//
//    return 0;
//}

// 面试题:实现一个类，计算程序中创建出了多少个类对象。
//class A
//{
//public:
//    A()
//    {
//        ++_scount;
//    }
//
//    A(const A & t)
//    {
//        //GetCount();
//
//        ++_scount;
//    }
//
//    ~A()
//    {
//        --_scount;
//    }
//
//    // 21：15
//    // 没有this指针，只能访问静态成员
//    static int GetCount()
//    {
//        //_a1 = 1;
//
//        return _scount;
//    }
//
//private:
//    // 声明
//    // 静态区，不存在对象中
//    // 不能给缺省值，因为缺省值是给初始化列表
//    // 他在静态区不在对象中，不走初始化列表
//    // 属于所有整个类，属于所有对象
//    static int _scount;
//};
//
//int A::_scount = 0;
//
//void TestA()
//{
// cout << A::GetCount() << endl;
// A a1, a2;
// A a3(a1);
// cout << A::GetCount() << endl;
//}
//
//int main(){
//    TestA();
//    return 0;
//}

//class Time
//{
//    // 声明 Date是Time的友元
//    // Date中可以访问Time的私有
//    // 但是Time中不能访问Date的私有
//    friend class Date;
//public:
//    Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {}
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//
//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {
//        _t._hour++;
//    }
//    void SetTimeOfDate(int hour, int minute, int second)
//    {
//        // 直接访问时间类私有的成员变量
//        _t._hour = hour;
//        _t._minute = minute;
//        _t._second = second;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//
//    Time _t;
//};
//
//int main(){
//
//    Date d1;
//    return 0;
//}


//class A
//{
//private:
//    static int k;//外部类的static成员
//    int h;
//public:
//    void func()
//    {}
//
//    A(){
//
//    }
//private:
//    // 内部类
//    // 独立的类，放到A里面
//    // 仅仅受到类域限制
//    class B // B天生就是A的友元
//    {
//    public:
//        void foo(const A& a)
//        {
//            cout << k << endl;//内部类可以直接访问外部类的static成员，不需要外部类的对象/类名
//            cout << a.h << endl;//内部类可以通过外部类的对象参数来访问外部类中的所有成员
//        }
//
//    private:
//        int _b;
//    };
//};
//
//
//int main()
//{
//    cout << sizeof(A) << endl;
//
//    A a1;
//    //A::B b1; 外部类无法访问内部类（私有类）的B
//
//    return 0;
//}

//class A
//{
//public:
//    A(int a = 0)
//        :_a(a)
//    {
//        cout << "A(int a)" << endl;
//    }
//    ~A()
//    {
//        cout << "~A()" << endl;
//    }
//private:
//    int _a;
//};
//
//
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        //...
//        return n;
//    }
//};
//
//int main()
//{
//    A aa1;
//
//    // 不能这么定义对象，因为编译器无法识别下面是一个函数声明，还是对象定义
//    //A aa1();
//
//    A aa2(1);
//
//
//
//    // 匿名对象，生命周期只在当前这一行 我们可以看到下一行他就会自动调用析构函数
//    A(2);
//
//    A aa3(1);
//
//    Solution s1;
//    s1.Sum_Solution(10);
//
//    //此时使用匿名函数更好用，减少了代码量
//    Solution().Sum_Solution(10);
//
//    return 0;
//}

class A
{
public:
    A(int a = 0)//A的构造函数 与 初始化列表
        :_a(a)
    {
        cout << "A(int a)" << endl;
    }

    A(int a1, int a2)//A的构造函数
    {
        cout << "A(int a1, int a2)" << endl;
    }

    A(const A& aa)//A的拷贝构造
        :_a(aa._a)
    {
        cout << "A(const A& aa)" << endl;
    }

    A& operator=(const A& aa) //运算符重载
    {
        cout << "A& operator=(const A& aa)" << endl;
        if (this != &aa)
        {
            _a = aa._a;
        }
        return *this;
    }

    ~A()//析构
    {
        cout << "~A()" << endl;
    }
private:
    int _a;
};

void f1(const A& aa)
{
    cout<<"void f1(const A& aa)"<<endl;
}


int main(){
        f1(2);
        cout << endl;
    return 0;
}
//int main()
//{
//    // 引用传参
//    A aa1;
//    f1(aa1);
//    cout << endl;
//
////    f1(A(2));
////    cout << endl;
////
////    f1(2);
////    cout << endl;
//
//    return 0;
//}

//void f1(A aa)
//{}

//int main()
//{
//    // 传值传参
//    A aa1;
//    f1(aa1);
//    cout << endl;
//
//    // 娃哈哈  建议2元，景区有其他价格
//    // 连续一个表达式中，构造+拷贝构造-》优化为直接构造
//    f1(A(2));
//    cout << endl;
//
//    f1(2);
//    cout << endl;
//
//    A aa3 = 3;
//    cout << endl;
//
//    return 0;
//}
