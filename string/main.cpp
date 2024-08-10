//
//  main.cpp
//  String
//
//  Created by 南毅 on 2024/4/27.


#include <iostream>
using namespace std;
#include <string>
#include <list>
//#include <algorithm>
//int main(int argc, const char * argv[]) {
//    char s[] = "abcd";
//    string s1 = s;
//    cout << s1 << endl;
//    return 0;
//}

//int main(){
//    string s1(10,'x');
//    string s2 = s1;//拷贝构造
//    cout << s2 << endl;
//    cout << s2.size() << endl;
//    cout << s2.length() <<endl;
//    cout << s2.max_size() << endl;
//    return 0;
//}


//int main(){
//    string s1 = "Greatness,it is just something we made up.";
//    for(int i = 0 ; i < s1.size();i++){
//        cout << s1[i];
//    }
//    cout << endl;
//    return 0;
//}

//int main(){
//    string s1("hello world");
        
//        // 遍历方式1：下标+[]
//        for (size_t i = 0; i < s1.size(); i++)
//        {
//            cout << s1[i] << " ";
//        }
//        cout << endl;
//
//        //遍历方式2: 迭代器
//        //string::iterator it1 = s1.begin();
//        auto it1 = s1.begin();
//        while (it1 != s1.end())
//        {
//            *it1 += 3;//'h' + 3 = 'k'
//
//            cout << *it1 << " ";
//            ++it1;
//        }
//        cout << endl;

//        //遍历方式3: 范围for
//        // 底层角度，他就是迭代器
//        cout << s1 << endl;
//        for (auto& e : s1)
//        {
//            e++;
//            cout << e << " ";
//        }
//        cout << endl;
//        cout << s1 << endl;
//    return 0;
//}

//void test_string5()
//{
//    const string s1("hello world");
//    //string::const_iterator it1 = s1.begin();
//    auto it1 = s1.begin();
//    while (it1 != s1.end())
//    {
//        // 不能修改
//        //*it1 += 3;
//
//        cout << *it1 << " ";
//        ++it1;
//    }
//    cout << endl;

    //string::const_reverse_iterator cit1 = s1.rbegin();
//    auto it1 = s1.rbegin();
//    while (it1 != s1.rend()) {
//        cout << *it1 <<" ";
//        it1++;
//    }

//    auto it2 = s1.begin();
//    while (it2 != s1.end()) {
//        cout << *it2 ;
//        it2++;
//    }
//    string s2("hello world");
//    string::reverse_iterator it2 = s2.rbegin();
//    //auto it2 = s2.rbegin();
//    while (it2 != s2.rend())
//    {
//        //*it2 += 3;
//
//        cout << *it2 << " ";
//        ++it2;
//    }
//    cout << endl;
//}
//
//void test_string6()
//{
//    string s1("hello world");
//    cout << s1 << endl;
//
//    // s1按字典序排序
//    sort(s1.begin(), s1.end());
//    cout << s1 << endl;
//    // 第一个和最后一个参与排序
//    sort(++s1.begin(), --s1.end());
//    cout << s1 << endl;
//
//    // 前5个排序 [0, 5)
//    sort(s1.begin(), s1.begin()+5);
//
//    cout << s1 << endl;
//}
//
//void test_string7()
//{
//    string s1("hello world");
//    cout << s1 << endl;
//
//    s1.push_back('x');
//    cout << s1 << endl;
//
//    s1.append(" yyyyyy!!");
//    cout << s1 << endl;
//
//    string s2("111111");
//
//    s1 += 'y';
//    s1 += "zzzzzzzz";
//    s1 += s2;
//    cout << s1 << endl;
//}
//
//void test_string8()
//{
//    string s1("hello world");
//    cout << s1 << endl;
//
//    s1.assign("111111");//将s1重新置为 111111
//    cout << s1 << endl;//输出：111111
//
//    // 慎用，因为效率不高 -> O(N)
//    // 实践中需求也不高
//    string s2("hello world");
//    s2.insert(0, "xxxx");
//    cout << s2 << endl;//输出：xxxxhello world
//
////    char ch = 'y';
////    cin >> ch;
////    s2.insert(0, 2, ch);//第0个位置，插入2个ch
////    cout << s2 << endl;
//
//    s2.insert(s2.begin(), 'y');//用迭代器插入
//    cout << s2 << endl;
//
//    s2.insert(s2.begin(), s1.begin(), s1.end());//将s1以迭代器方式插入s2的0号位置
//    cout << s2 << endl;
//}
//
//void test_string9()
//{
//    // replace效率不高，慎用，和insert类似,要挪动数据
//    string s2("hello world");
//    s2.replace(5, 1, "%20");//在第五个位置，横跨一个长度 改为%20
//    cout << s2 << endl;
//
//    string s3("hello world hello bit");
//    for (size_t i = 0; i < s3.size(); )
//    {
//        if (s3[i] == ' ')
//        {
//            s3.replace(i, 1, "%20");
//            i += 3;
//        }
//        else
//        {
//            i++;
//        }
//    }
//    cout << s3 << endl;
//
//    string s4("hello world hello bit");
//    string s5;
//    for (auto ch : s4)
//    {
//        if (ch != ' ')
//        {
//            s5 += ch;
//        }
//        else
//        {
//            s5 += "%20";
//        }
//    }
//    cout << s5 << endl;
//}
//
//void TestPushBack()
//{
//    string s;
//    // 知道需要多少空间，提前开好
//    s.reserve(200);
//    s[100] = 'x';
//
//    size_t sz = s.capacity();
//    cout << "capacity changed: " << sz << '\n';
//
//    cout << "making s grow:\n";
//    for (int i = 0; i < 200; ++i)
//    {
//        s.push_back('c');
//        if (sz != s.capacity())
//        {
//            sz = s.capacity();
//            cout << "capacity changed: " << sz << '\n';
//        }
//    }
//}
//
//void test_string10()
//{
//
////    TestPushBack();
//
//    string s1("111111111");
//    string s2("11111111111111111111111111111111111111111111111111");
//
//    cout << s1.capacity() << endl;
//
//    // reserve 保留
//    // reverse 逆置 反转
//    s1.reserve(100);
//    cout << s1.capacity() << endl;
//
//    s1.reserve(20);
//    cout << s1.capacity() << endl;
//}
//
//void test_string12()
//{
//    string file("string.cpp.zip");
//    size_t pos = file.rfind('.');
//    //string suffix = file.substr(pos, file.size() - pos);
//    string suffix = file.substr(pos);
//
//    cout << suffix << endl;
//}

//int main(){
//    string ss = "Greatness it is just something we made up";
//    int find = ss.rfind("it");
//    cout << ss.substr(find) << endl;
//    cout << ss.substr(find,2) << endl;
//
//    return 0;
//}


//int main(int argc, char *argv[])
//{
//    string a="hello world";
//    string b=a;
//
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;
//    }
//    else cout<<"false"<<endl;
//    string c=b;
//    c="";
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;
//    }
//    else cout<<"false"<<endl;
//    a="";
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;
//    }
//    else cout<<"false"<<endl;
//    return 0;
//}

//int main(){
//    string s1 = "hello world";
//    char *c1 = new char[s1.size()];
//    strcpy(c1, s1.c_str());
//    
//    for(int i = 0; i < s1.size()/sizeof(c1[0]); i++){
//        cout << c1[i];
//    }
//    cout << endl;
//    return 0;
//}

//int main(int argc, char *argv[])
//{
//    string a="hello world";
//    string b=a;
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;//false
//    }
//    else cout<<"false"<<endl;
//    
//    string c=b;
//    
//    c="";
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;//false
//    }
//    else cout<<"false"<<endl;
//    a="";
//    if (a.c_str()==b.c_str())
//    {
//        cout<<"true"<<endl;
//    }
//    else cout<<"false"<<endl;//false
//    return 0;
//}

//int main()
//{
//    string str("Hello Bit.");
//    str.reserve(111);
//    str.resize(5);
//    str.reserve(50);
//    cout<<str.size()<<":"<<str.capacity()<<endl;
//    return 0;
//}


//int main(int argc, char *argv[])
//{
//    string strText = "How are you?";
//    string strSeparator = " ";
//    string strResult;
//    int size_pos = 0;
//    int size_prev_pos = 0;
////    size_pos=strText.find_first_of(strSeparator, size_pos);//3
//    
//    while((size_pos=strText.find_first_of(strSeparator, size_pos)) != string::npos)
//    {
//        strResult = strText.substr(size_prev_pos, size_pos-size_prev_pos);//pos=0 len=3
//        //How
//        cout<<strResult<<" ";//How
//        size_prev_pos = ++size_pos;//4
//    }
//    if(size_prev_pos != strText.size())
//    {
//        strResult = strText.substr(size_prev_pos, size_pos-size_prev_pos);
//        cout<<strResult<<" ";
//    }
//    cout<<endl;
//    return 0;
//}

//class Solution {
//public:
//    int strToInt(string str) {
//        bool sign = true;   //默认为正数
//        //先舍弃开头可能存在的空格
//        int i = 0;
//        while(i < str.size() && str[i] == ' ') i++;
//        //接着判断首个字符是否为正负号
//        if(str[i] == '-') {
//            sign = false;  //该字符串片段为负数
//            i++;          //移至下一个字符接着判断
//        }
//        else if(str[i] == '+') i++;   //如果首个字符为‘+’则sign已经默认为true而无须更改，直接移动到下一位即可
//        
//        
//        //下面开始对非正负符号位进行判断
//        if(str[i] < '0' || str[i] > '9') return 0;  //如果第一个正负号字符后的首个字符就不是数字字符(也可能第一个字符就不是正负号)，那么直接返回0
//        int res = 0;   //这里res用的int型，需要更加仔细考虑边界情况，但如果用long的话可以省去一些麻烦
//        int num;      //用来单独存储单个字符转换而成的数字
//        int border = INT_MAX / 10;  //用来验证计算结果是否溢出int范围的数据
//        while(i < str.size()){
//            if(str[i] < '0' || str[i] > '9') break;  //遇到非数字字符则返回已经计算的res结果
//            if(res > border || res == border && str[i] > '7')  //注意这句话要放在字符转换前，因为需要验证的位数比实际值的位数要少一位
////这里比较巧妙的地方在于 
//                //1. 用低于int型数据长度一位的数据border判断了超过int型数据长度的值
//                //2. 将超过最大值和低于最小值的情况都包括了
//            return sign == true ? INT_MAX : INT_MIN;
//            //开始对数字字符进行转换
//            num = str[i] - '0';
//            res = res * 10 + num;
//            i++;
//        }
//        //最后结果根据符号添加正负号
//        return sign == true ? res : -res;
//    }
//};


//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0") {
//            return "0";
//        }
//        int m = num1.size(), n = num2.size();
//        auto ansArr = vector<int>(m + n);
//        for (int i = m - 1; i >= 0; i--) {
//            int x = num1.at(i) - '0';
//            for (int j = n - 1; j >= 0; j--) {
//                int y = num2.at(j) - '0';
//                ansArr[i + j + 1] += x * y;
//            }
//        }
//        for (int i = m + n - 1; i > 0; i--) {
//            ansArr[i - 1] += ansArr[i] / 10;//进位
//            ansArr[i] %= 10;
//        }
//        int index = ansArr[0] == 0 ? 1 : 0;
//        string ans;
//        while (index < m + n) {
//            ans.push_back(ansArr[index]);
//            index++;
//        }
//        for (auto &c: ans) {
//            c += '0';
//        }
//        return ans;
//    }
//};


//int main1(){
//    nanyi::String s1 = "hello world";
//    cout << s1.c_str() <<endl;
//    
////    nanyi::String s2;
////    cout << s2.c_str() << endl;
//    
//    for (int i = 0; i < s1.size(); i++) {
//        cout << s1[i]++ << " ";
//    }
//    cout << endl;
//    
//    nanyi::String::iterator it1 = s1.begin();
//    while (it1 != s1.end()) {
//        cout << *it1 << " ";
//        it1++;
//    }
//    cout << endl;
//    
//    for (auto e : s1) {
//        cout << e << " ";
//    }
//    cout << endl;
//    
//    return 0;
//}

#include "string.hpp"
void test1(){
    nanyi::String s1 = "today";
    cout << s1.size() << endl;
    s1.push_back(' ');
    s1.append("is 2024-5-15");
    s1 += 'a';
    cout << s1.c_str() <<endl;
}

void test2(){
    nanyi::String s1 = "hello world";
    nanyi::String s2(s1);
    cout << s2.c_str() << endl;
}

int main(){
    test2();
    return 0;
}
