//
//  main.cpp
//  类和对象2⃣️
//
//  Created by 南毅 on 2024/4/9.
//

//#include <iostream>
//using namespace::std;

//class Date{
//public:
    //1.无参构造函数
//    Date(){
//        _year = 0;
//        _month = 0;
//        _day = 0;
//    }
//
//    //2.带参构造函数
//    Date(int year,int month,int day){
//        _year = year;
//        _month = month;
//        _day = day;
//    }

//    void Print(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};

//void TestDate(){
//    Date d1;//调用无参构造
////    Date d2(2024,2,9);//调用带参构造函数
//    d1.Print();
////    d2.Print();
//}

//class A
//{
//public:
//    A()
//    {
//        _a = 0;
//    }
//
//private:
//    int _a;
//};

//class Date{
//public:
//    //1.无参构造函数
//    Date(){
//        _year = 0;
//        _month = 0;
//        _day = 0;
//    }
//
//    //2.带参构造函数
//    Date(int year,int month,int day){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Print(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//class Time{
//public:
//    Time(){
//        //无任何参数的也称为默认构造函数
//        _hour = 0;
//        _minute = 0;
//        _second = 0;
//    }
//
//    //有参但不是缺省参数的构造函数重载
//    Time(int hour){
//        cout<<"Time()"<<endl;
//        _hour = hour;
//        _minute = 0;
//        _second = 0;
//    }
//
//private:
//    int _hour = 9;
//    int _minute = 8;
//    int _second = 7;//内置类型成员变量在类中声明时可以给默认值
//
//};

 
//class Date
//{
//private:
//    int _day;
//    int _month;
//    int _year;
//public:
//    //编译器自动生成构造函数
//
//    void print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//};

//#include <iostream>
//using namespace std;
//
//class Date
//{
//private:
//    int _day;
//    int _month;
//    int _year;
//public:
//    Date()
//    {
//        //无任何参数的也称为默认构造函数
//        cout << "无参构造函数调用" << endl;
//    }
//
//    //全缺省默认构造函数
//    Date(int year = 2024, int month = 3, int day = 20)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//};
//
//
//int main(int argc, const char * argv[]) {
////    Date d;//不写参数时调用无参构造以及编译器自动生成的构造
////    d.print();
//    return 0;
//}


//typedef int DataType;
//
//class Stack{
//private:
//    DataType* _array;
//    int _capacity;
//    int _size;
//
//public:
//    Stack(size_t capacity = 3){//全缺省构造函数
//        _array = (DataType*)malloc(sizeof(DataType)*capacity);
//        if(_array == nullptr){
//            perror("malloc fail");
//        }
//        _capacity = capacity;
//        _size = 0;
//
//    }
//
//    void Push(DataType x){
//        _array[_size++] = x;
//    }
//    //...其他方法
//
//    ~Stack(){//析构函数
//        if(_array){
//            free(_array);
//            _array = nullptr;
//            _capacity = 0;
//            _size = 0;
//        }
//    }
//
//};
//
//void TestStack(){
//    Stack s;
//    s.Push(1);
//    s.Push(2);
//}
//
//int main(int argc, const char * argv[]) {
//    TestStack();
//    return 0;
//}


//class Time
//{
//private:
//    int _time;
//public:
//    Time()//无参构造函数
//    {
//        _time = 0;
//    }
//    ~Time()//析构函数
//    {
//
//    }
//};
//
//class Date
//{
//private:
//    int _day;
//    int _month;
//    int _year;
//    Time _t; //自定义类型
//public:
//    Date(int day = 20, int month = 3, int year = 2024)//全缺省构造函数
//    {
//        _day = day;
//        _month = month;
//        _year = year;
//    }
//
//};
//
//int main()
//{
//    Date d;
//    return 0;
//}


//class A{
//public:
//    A(){
//        cout<<"A()"<<endl;
//    }
//    ~A(){
//        cout<<"~A()"<<endl;
//    }
//};
//class B{
//public:
//    B(){
//        cout<<"B()"<<endl;
//    }
//    ~B(){
//        cout<<"~B()"<<endl;
//    }
//};
//
//void F() {
//    A a;
//    B b;
//  }
//
//int main(){
//    F();
//    return 0;
//}

//class Data{
//private:
//    int _year;
//    int _month;
//    int _day;
//
//public:
//    Data(int year = 2024,int month = 4,int day = 11){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    Data(const Data d){//显式拷贝构造函数，必须加&
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//};
//
//int main(){
//    Data d1;
//    Data d2(d1);
//    Data d3 = d2;
//    return 0;
//}

//#include <iostream>
//using namespace::std;
//
//typedef int DataType;
//
//class Stack{
//private:
//    DataType* _array;
//    int _capacity;
//    int _size;
//
//public:
//    Stack(size_t capacity = 3){//全缺省构造函数
//        _array = (DataType*)malloc(sizeof(DataType)*capacity);
//        if(_array == nullptr){
//            perror("malloc fail");
//        }
//        _capacity = capacity;
//        _size = 0;
//
//    }
//    Stack(const Stack& st){//栈的拷贝构造
//        _array = (DataType*)malloc(sizeof(DataType));
//        if(_array == nullptr){
//            perror("malloc fail");
//            return;
//        }
//
//        memcpy(_array, st._array, sizeof(DataType));
//        _size = st._size;
//        _capacity = st._capacity;
//    }
//
//    void Push(DataType x){
//        _array[_size++] = x;
//    }
//    //...其他方法
//
//    ~Stack(){//析构函数
//        if(_array){
//            free(_array);
//            _array = nullptr;
//            _capacity = 0;
//            _size = 0;
//        }
//    }
//
//};
//
//void TestStack(){
//    Stack s1;
//    s1.Push(1);
//    s1.Push(2);
//    Stack s2 = s1;
//    s2.Push(3);
//    s1.Push(1);
//    s1.Push(2);
//    s1.Push(1);
//    s1.Push(2);
//}
//
//int main(int argc, const char * argv[]) {
//    TestStack();
//    return 0;
//}

//class Date{
//private:
//    int _day;
//    int _month;
//    int _year;
//
//public:
//        Date(int year = 1900, int month = 1, int day = 1)
//        {
//            _year = year;
//            _month = month;
//            _day = day;
//        }
//
//        int GetYear()
//        {
//            return _year;
//        }
//    //实现d1 == d2
//    bool operator==(const Date& d){
//        return this->_year == d._year && this->_month == d._month &&
//        this->_day == d._day;
//    }
//
//};
//
//
//int main(){
//    Date d1(2024,4,16);
//    Date d2(2024,4,16);
//    cout<<d1.operator==(d2)<<endl;
//    return 0;
//}

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    int GetYear()
//    {
//        return _year;
//    }
//
//public:
//    int _year;
//    int _month;
//    int _day;
//};
//
//// 重载成全局，无法访问私有成员
//// 1、提供这些成员get和set
//// 2、友元  后面会讲
//// 3、重载为成员函数(一般使用这种)
//
//bool operator==(const Date& d1, const Date& d2)
//{
//    return d1._year == d2._year
//        && d1._month == d2._month
//        && d1._day == d2._day;
//}
//
////d1-d2
////d1+d2 没有意义
////d1*d2 没有意义
////一个类要重载哪些运算符是看需求，看重载有没有价值和意义
//
//int main()
//{
//    Date d3(2024, 4, 14);
//    Date d4(2024, 4, 15);
//
//    // 显式调用
//    operator==(d3, d4);
//
//    // 直接写，装换调用，编译会转换成operator==(d3, d4);
//    d3 == d4;
//
//    return 0;
//}

//---------------------------------------------------

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    //// d3.Func(d4);
//    //bool Func(const Date& d)
//    //{
//    //    return this->_year == d._year
//    //        && this->_month == d._month
//    //        && this->_day == d._day;
//    //}
//
//    // d3.operator==(d4);
//    bool operator==(const Date& d)
//    {
//        return this->_year == d._year
//            && this->_month == d._month
//            && this->_day == d._day;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d3(2024, 4, 14);
//    Date d4(2024, 4, 15);
//
//    // 显式调用
//    d3.operator==(d4);
//
//    // 转换调用 等价于d3.operator==(d4);
//    d3 == d4;
//
//    int i = 0, j = 1;
//    bool ret = i == j;
//
//    return 0;
////}

//---------------------------------------------------

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    Date(const Date& d)
//    {
//        cout << "Date(const Date& d)" << endl;
//
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//
//    // d1 = d4;
//    // d1 = d2 = d4;
//    // d1 = d1
//    // Date operator=(const Date& d)
//    //检测是否自己给自己赋值
//    Date& operator=(const Date& d)
//{
//        if (this != &d)
//        {
//            _year = d._year;
//            _month = d._month;
//            _day = d._day;
//        }
//
//        return *this;
//    }
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//
//    ~Date()
//    {
//        cout << "~Date()" << endl;
//        _year = -1;
//        _month = -1;
//        _day = -1;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
////
////int main()
////{
////    Date d1(2024, 4, 14);
////
////    // 拷贝构造
////    // 一个已经存在的对象，拷贝给另一个要创建初始化的对象
////    Date d2(d1);
////    Date d3 = d1;
////
////    Date d4(2024, 5, 1);
////
////    // 赋值拷贝/赋值重载
////    // 一个已经存在的对象，拷贝赋值给另一个已经存在的对象
////    d1 = d4;
//////
////    d1 = d2 = d4;
//////
////    d1 = d1;
//////
//////    int i, j, k;
//////    i = j = k = 1;
////
////    return 0;
////}
//
//Date& func()
//{
//    static Date d(2024, 4, 14);
//    return d;
//}
//// 出了作用域，返回对象还在没有析构，那就可以用引用返回，减少拷贝
//// a、返回对象生命周期到了，会析构，传值返回
//// b、返回对象生命周期没到，不会析构，传引用返回
//
//int main()
//{
//    Date& ref = func();
//    ref.Print();
//
//    return 0;
//}

//class Date{
//public:
//    int _year;
//    int _month;
//    int _day;
//
//public:
//    //构造函数
//    Date(int year = 2024,int month = 4,int day = 16){
//        cout<<"Date()"<<endl;
//
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    //拷贝构造
//    Date(const Date &d){
//
//        cout<<"Date(const Date &d)"<<endl;
//
//        this->_day = d._day;
//        this->_month = d._month;
//        this->_year = d._year;
//    }
//
//    void print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;}
//
//
//};
//
////运算符重载
//
//Date& operator=(Date& d1, Date& d)
//{
//    if (&d1 != &d)
//    {
//        d1._year = d._year;
//        d1._month = d._month;
//        d1._day = d._day;
//    }
//
//    return d1;
//}


//class Time
//{
//public:
//Time() {
//    _hour = 1;
//    _minute = 1;
//    _second = 1;
//
//}
//
//    Time& operator=(const Time& t)
//    {
//        if (this != &t)
//        {
//            _hour = t._hour;
//            _minute = t._minute;
//            _second = t._second;
//}
//        return *this;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//
//class Date
//{
//public:
//    Date(int year = 1970, int month = 1, int day = 1){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
////private:
//// 基本类型(内置类型)
//    int _year ; int _month ; int _day ;
//// 自定义类型
//    Time _t;
//
//};
//
//int main() {
//    Date d1;
//    Date d2(2023,2,1);
//    d1 = d2;
//    return 0;
//}


//typedef int DataType;
//class Stack
//{
//public:
//    Stack(size_t capacity = 10)
//    {
//        _array = (DataType*)malloc(capacity * sizeof(DataType));
//        if (nullptr == _array)
//        {
//            perror("malloc申请空间失败");
//            return;
//
//        }
////注意:如果类中未涉及到资源管理，赋值运算符是否实现都可以;一旦涉及到资源管理则必
////须要实现。
//        _size = 0;
//        _capacity = capacity;
//    }
//    void Push(const DataType& data)
//    {
//        // CheckCapacity();
//        _array[_size] = data;
//        _size++;
//
//    }
//    ~Stack() {
//        if (_array) {
//            free(_array);
//            _array = nullptr;
//            _capacity = 0;
//            _size = 0;
//
//        }
//
//    }
//private:
//    DataType *_array;
//    size_t _size;
//    size_t _capacity;
//};
//int main()
//{
//    Stack s1;
//    s1.Push(1);
//    s1.Push(2);
//    s1.Push(3);
//    s1.Push(4);
//    Stack s2;
//    s2 = s1;
//    return 0;
//}


//class Date{
//private:
//    int _year;
//    int _month;
//    int _day;
//
//public:
//    Date(int year = 2024,int month = 4,int day = 17){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    //前置++：返回+1之后的结果
//    //注意：this指向的对象函数结束后不会销毁，故以引用方式返回提高效率
//    Date& operator++(){
//        _day +=1;
//        return *this;
//    }
//
//    //后置++
//    //前置++和后置++都是一元运算符，为了让前置++和后置++能形成正确重载
//    // C++规定:后置++重载时多增加一个int类型的参数，但调用函数时该参数不用传递，编译器
//    //自动传递
//    // 注意:后置++是先使用后+1，因此需要返回+1之前的旧值，故需在实现时需要先将this保存
//    //一份，然后给this+1
//
//    Date operator++(int){
//        Date tmp = (*this);
//        _day += 1;
//        return tmp;//注意：tmp是临时对象，因此只能以值的方式返回，不能返回引用
//    }
//
//};
//
//int main(){
//    Date d; //d: 2024 4 17
//    Date d1(2000,1,1); //d1: 2000,1,1
//    d = d1++;//d : 2000,1,1  d1: 2000,1,2
//    d = ++d1;//d ; 2000,1,3  d1: 2000,1,3
//    return 0;
//}

//class Date{
//private:
//        int _year ;
//        int _month;
//        int _day;
//
//public:
//    Date(int year = 2024,int month = 4,int day = 17){
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Print(){
//        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//    }
//};
//
//
//int main(){
//    const Date d1(2024,4,14);
//    d1.Print();
//    return 0;
//}

//class A
//{
//public:
//    // 我们不实现，编译器会自己实现，我们实现了编译器就不会自己实现了
//    // 一般不需要我们自己实现
//    // 除非不想让别人取到这个类型对象的真实地址
//    A* operator&()
//    {
//        cout << "A* operator&()" << endl;
//
//        return nullptr;
//    }
//
//    const A* operator&() const
//    {
//        cout << "const A* operator&() const" << endl;
//
//        return (const A*)0xffffffff;
//    }
//private:
//    int _a1 = 1;
//    int _a2 = 2;
//    int _a3 = 3;
//};
//
//int main()
//{
//    A aa1;
//    const A aa2;
//
//    cout << &aa1 << endl;
//    cout << &aa2 << endl;
//
//    return 0;
//}

//class Date
//{
//friend ostream& operator<<(ostream &cout,Date& d);
//    friend istream& operator>>(istream &cin ,Date& d);
//private:
//    int _day;
//    int _month;
//    int _year;
//public:
//    Date(int year = 2024, int month = 4, int day = 18)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    //运算符重载中，参数顺序和操作顺序是一致的
////    void operator<<(ostream &cout){
////        cout << _year << "-" << _month << "-" << _day <<endl;
////    }
//
//};
//
////使用返回值类型 可以进行连续插入
//ostream& operator<<(ostream &cout,Date& d){
//    cout << d._year << "-" << d._month << "-" << d._day <<endl;
//    return cout;
//}
//
//istream& operator>>(istream &cin ,Date& d){
//    cin >> d._year >> d._month >> d._day;
//    return cin;
//}
//int main()
//{
//    Date d(1999,8,1);
//    Date d1;
//    cin >> d >> d1;
//    return 0;
//}

#include "Date.hpp"

int main(){
    Date d1(2024,5,30);
    Date d2(2024,4,19);
    cout << d1-d2 <<endl;
    return 0;
}

