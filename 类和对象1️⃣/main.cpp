//
//  main.cpp
//  2_类和对象1⃣️
//
//  Created by 南毅 on 2024/4/4.
//
#include "F.hpp"

//typedef int DataType;
//
//struct Stack{
//public:
//    void Init(size_t capacity){
//        _array = (DataType*)malloc(sizeof(DataType));
//        if(_array == nullptr){
//            perror("malloc fail");
//            return;
//        }
//
//        _capacity = capacity;
//        _size = 0;
//    }
//
//    void Push(const DataType& data){
//        //扩容
//        _array[_size++] = data;
//    }
//
//    DataType Top(){
//        return _array[_size-1];
//    }
//
//    void Destory(){
//        if(_array){
//            free(_array);
//            _array = nullptr;
//            _capacity = 0;
//            _size = 0;
//        }
//    }
//private:
//    DataType* _array;
//    size_t _capacity;
//    size_t _size;
//};

//class classname{
//    //类体：由成员函数和成员变量组成
//
//};// 一定要注意后面的分号

//class A{
//public:
//    void PrintA(){
//        cout<<_a<<endl;
//    }
//private:
//    char _a;
//};

//人
//class Person{
//public:
//    //显示基本信息
//    void showInfo(){
//        //显示基本信息 年龄
//        cout<<_age<<endl;
//    }
//
//public:
//    char* _name;//姓名
//    char* _sex; //性别
//    int _age;   //年龄
//};

//下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
class A
{
public:
    void Print()
    {
        cout<<_a<<endl;
    }
private:
    int _a;
};


int main(int argc, const char * argv[]) {
    A* p = nullptr;
    p->Print();
    return 0;
}
