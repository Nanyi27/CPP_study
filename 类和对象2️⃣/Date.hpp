//
//  Date.hpp
//  类和对象2⃣️
//
//  Created by 南毅 on 2024/4/19.
//

#pragma once
#include<iostream>
using namespace std;

#include<assert.h>

class Date
{
    // 友元函数声明

public:
    Date(int year = 1900, int month = 1, int day = 1);
    void Print() const;

    // 直接定义类里面，他默认是inline
    // 频繁调用
    int GetMonthDay(int year, int month)
    {
        assert(month > 0 && month < 13);
        
        static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        // 365天 5h +
        if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            return 29;
        }
        else
        {
            return monthDayArray[month];
        }
    }

    bool CheckDate();

    bool operator<(const Date& d) const;
    bool operator<=(const Date& d) const;
    bool operator>(const Date& d) const;
    bool operator>=(const Date& d) const;
    bool operator==(const Date& d) const;
    bool operator!=(const Date& d) const;

    // d1 += 100
    Date& operator+=(int day);
    Date operator+(int day) const;

    // d1 -= 100
    Date& operator-=(int day);

    // d1 - 100;
    Date operator-(int day) const;

    // d1 - d2
    int operator-(const Date& d) const;

    // ++d1 -> d1.operator++()
    Date& operator++();

    // d1++ -> d1.operator++(1)
    // 为了区分，构成重载，给后置++，强行增加了一个int形参
    // 这里不需要写形参名，因为接收值是多少不重要，也不需要用
    // 这个参数仅仅是为了跟前置++构成重载区分
    Date operator++(int);
    // 15：55

    Date& operator--();
    Date operator--(int);


private:
    int _year;
    int _month;
    int _day;
};
 


