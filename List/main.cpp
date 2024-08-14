//
//  main.cpp
//  List
//
//  Created by 南毅 on 2024/5/26.
//

//#include <iostream>
//using namespace std;
//#include <list>
//#include <vector>
//#include <ctime>
//#include <algorithm>
//int main1() {
//    //1.无参构造
//    list<int> ls1;
//        //list没有capacity
//    cout << ls1.size() << endl;//0
//    
//    //2.指定个数类型值进行构造
//    list<int> ls2(4,5);
//    cout << ls2.size() <<endl;//4
//    for(auto e : ls2){
//        cout << e << " ";
//    }
//    cout << endl;//5 5 5 5
//    
//    //3.使用类对象迭代器区间进行构造
//    
//    list<int> ls3(ls2.begin(),ls2.end());
//    cout << ls3.size() <<endl;//4
//    for(auto e : ls3){
//        cout << e << " ";
//    }
//    cout << endl;//5 5 5 5
//    
//    //也可以使用其然类对象迭代器区间进行构造
//    vector<int> v(4,5);
//    list<int> ls4(v.begin(),v.end());
//    cout << ls4.size() <<endl;//4
//    for(auto e : ls4){
//        cout << e << " ";
//    }
//    cout << endl;//5 5 5 5
//    
//    
//    //4.拷贝构造
//    list<int> ls5 = ls1;
//    cout << ls5.size() << endl;//0
//    
//    return 0;
//}
//
//int main2(){
//    list<int> ls1 = {1,2,3,4,5};
//    
//    ls1.push_front(0);
//    for(auto e : ls1)
//        cout << e << " ";
//    cout << endl;//0 1 2 3 4 5
//    
//    ls1.push_back(6);
//    ls1.push_back(7);
//    for(auto e : ls1)
//    cout << e << " ";
//    cout << endl;
//    
//    return 0;
//}
//
////int main(){
////    list<int> ls1 = {1,3,1,4};
////    list<int> ls2 = {5,2,0};
////    
////    ls1.splice(ls1.begin(), ls2);
////    for(auto e : ls1)
////    cout << e << " ";
////    cout << endl;//5 2 0 1 3 1 4
////    
////    for(auto e : ls2)
////    cout << e << " ";
////    cout << endl;//ls2 内容为空
////
////    return 0;
////}
//
//
// 
//int main3()
//{
//    //升序
//    list<int> ls = {9,0,3,2,21,43,11,0};
//    for (auto num : ls)
//    {
//        cout << num << " ";
//    }
//    cout << endl;
//    ls.sort();
//    for (auto num : ls)
//    {
//        cout << num << " ";
//    }
//    cout << endl;
//    //降序
//    ls.sort(greater<int>());
//    for (auto num : ls)
//    {
//        cout << num << " ";
//    }
//    return 0;
//}
//
//int main4()
//{
//    srand(time(NULL));
//    const int N = 10000;//一千万个数据
// 
//    list<int> ls;
//    list<int> ls1;
// 
//    //向两个链表中插入数据
//    for (int i = 0; i < N; ++i)
//    {
//        auto e = rand();
//        ls.push_back(e);
//        ls1.push_back(e);
//    }
// 
//    //直接使用sort()排序
//    size_t begin = clock();
//    ls.sort();
//    size_t end = clock();
// 
//    //拷贝到vector类中排序
//    size_t begin1 = clock();
//    vector<int> v(ls1.begin(), ls1.end());
//    sort(v.begin(), v.end());
//    ls1.assign(v.begin(), v.end());
//    size_t end1 = clock();
// 
//    cout << "直接排序：" << end - begin << "ms" << endl;
//    cout << "拷贝后排序再拷贝：" << end1 - begin1 << "ms" << endl;
// 
//    return 0;
//}


#include "list.hpp"
int main(){
    nanyi::list<int> ls1 = {1,2,3};

    nanyi::list<int> ls2;
    ls2 = ls1;

    return 0;
}
