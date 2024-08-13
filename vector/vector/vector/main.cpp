////
////  main.cpp
////  vector
////
////  Created by 南毅 on 2024/5/18.
////
//
//#include <iostream>
//using namespace std;
//#include <vector>
#include "Vector.hpp"
//
//
//int main1(){
//    //类模版带上类型
//    //无参构造函数
//    vector<int> v(8);
//    
//    for (size_t i = 0; i < v.size(); i++) {
//        //可以通过下表访问
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
//
//
//int main2()
//{
//    cout << "指定大小为10时：\n";
//    vector<int> v(10, 1);
// 
//    cout << v.size() << endl;
//    cout << v.capacity() << endl;
// 
//    vector<int> v1;
//    v1.push_back(1);
//    v1.push_back(1);
//    v1.push_back(1);
//    v1.push_back(1);
//    cout << "插入四个数据时：\n";
//    cout << v1.size() << endl;
//    cout << v1.capacity() << endl;
//    cout << "插入五个数据时：\n";
//    v1.push_back(1);
//    cout << v1.size() << endl;
//    cout << v1.capacity() << endl;
// 
//    return 0;
//}
//
// 
//int main3()
//{
//    vector<int> v(10, 1);
// 
//    for (size_t i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
// 
//    v.resize(20);
//    for (size_t i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
// 
//    v.resize(5);
//    for (size_t i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    //指定大小小于当前的size时，再指定初始化内容时不会修改原始内容
//    v.resize(3, 3);
//    for (size_t i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//    return 0;
//}
//
//
//void TestVectorExpand()
//{
//    size_t sz;
//    vector<int> v;
//    sz = v.capacity();
//    cout << sz << endl;
//    cout << "making v grow:\n";
//    for (int i = 0; i < 100; ++i)
//    {
//        v.push_back(i);
//        if (sz != v.capacity())
//        {
//            sz = v.capacity();
//            cout << "capacity changed: " << sz << '\n';
//        }
//    }
//}
// 
//int main5()
//{
//    vector<int> v;
//       cout << v.max_size() << endl;
//    
//       vector<char> v1;
//       cout << v1.max_size() << endl;
//    
//       return 0;
//
//    return 0;
//}
//
//
//void test2(){
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    
//    //迭代器遍历
//    //指明迭代器类型
//    vector<int>::iterator it1 = v.begin();
//    while (it1 != v.end()) {
//        cout << *it1 <<" ";
//        it1++;
//    }
//    cout << endl;//1 2 3 4
//    
//    //下标遍历
//    for (size_t i = 0; i < v.size(); i++) {
//        cout << v[i] << " ";
//    }
//    cout << endl;//1 2 3 4
//    
//    //范围for
//    for(auto &e : v){
//        cout << e <<" ";
//    }
//    cout << endl;//1 2 3 4
//}
//
//void test3(){
////    vector<int> v(10, 1);
////    //正向迭代器——非const
////    vector<int>::iterator it = v.begin();
////    while (it != v.end())
////    {
////        *it = 2;//可修改
////        cout << *it << " ";
////        it++;
////    }
//    
//    vector<int> v;
//        v.push_back(1);
//        v.push_back(2);
//        v.push_back(3);
//        v.push_back(4);
//        //逆向迭代器——非const
//        vector<int>::reverse_iterator rit = v.rbegin();
//        while (rit != v.rend())
//        {
//            (*rit)++;//可修改
//            cout << *rit << " ";
//            rit++;
//        }
//}
//    




int main1(){
    nanyi::Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << endl;
    
    nanyi::Vector<int> v1;
    v1.push_back(5);
    v1.push_back(2);
    v1.push_back(0);
    v1.insert(v1.begin(), 4 );
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    
    v1.insert(v1.begin(), 1 );
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    
    v1.insert(v1.begin(), 3 );
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    v1.insert(v1.begin(), 1 );
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    
    v1.erase(v1.begin()+v1.size()-1);
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    
    v1.erase(v1.begin());
    for (size_t i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << endl;
    
    for (auto e: v1) {
        cout << e << " ";
    }
    return 0;
}


void test1(){
    nanyi::Vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.Print();
    nanyi::Vector<int> v2(v1);
    v2.Print();
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(2);
    v1.Print();
    
}
void test_vector2()
    {
        nanyi::Vector<int> v1;
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);
        v1.push_back(4);
        //v1.push_back(5);
        for (auto e : v1)
        {
            cout << e << " ";
        }
        cout << endl;

        v1.insert(v1.begin(), 0);
        for (auto e : v1)
        {
            cout << e << " ";
        }
        cout << endl;

        v1.erase(v1.begin());
        for (auto e : v1)
        {
            cout << e << " ";
        }
        cout << endl;

        //v1.insert(v1.begin() + 2, 20);
        //for (auto e : v1)
        //{
        //    cout << e << " ";
        //}
        //cout << endl;

        int x;
        cin >> x;
        // 没有x就不插入，有x的前面插入  10:50继续
        nanyi::Vector<int>::iterator it = find(v1.begin(), v1.end(), x);
        if (it != v1.end())
        {
            // insert以后it这个实参会不会失效？
            it = v1.insert(it, 1000);

            // 建议失效后迭代器不要访问。除非赋值更新一下这个失效的迭代器
            cout << *it << endl;
        }

        for (auto e : v1)
        {
            cout << e << " ";
        }
        cout << endl;
    }

void test3(){
    nanyi::Vector<string> v1(2,"111");
    v1.Print();
    nanyi::Vector<string> v2 = v1;
  //  nanyi::Vector<int> v3(v1.begin(),v2.end());
    v2.Print();
    
}

void test4(){
    nanyi::Vector<int> v1(3,1);
    v1.push_back(4);
    v1.Print();
    v1.insert(v1.end(), 2);
    v1.Print();
}
int main(){
    nanyi::Vector<int> v1(3,1);
    return 0;
}
