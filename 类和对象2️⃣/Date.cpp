//
//  Date.cpp
//  类和对象2⃣️
//
//  Created by 南毅 on 2024/4/19.
//

#include "Date.hpp"

Date::Date(int year, int month, int day){//缺省值在.h文件显示
    _year = year;
    _month = month;
    _day = day;
    
    if(!CheckDate()){
        perror("日期非法\n");
    }
}


void Date::Print() const{

    cout<< _year << "-" << _month << "-" << _day <<endl;
}

bool Date::CheckDate(){
    if(_month > 12 || _month < 1 || _day > GetMonthDay(_year, _month)||_day<1){
        return false;
    }else{
        return true;
    }
}

//d1 < d2
bool Date::operator<(const Date& d) const{
    if(_year < d._year){
        return true;
    }else if (_year == d._year){
        if(_month < d._month){
            return true;
        }else if (_month == d._month){
            return _day < d._day;
        }
    }
    return false;
}

//d1 == d2
bool Date::operator==(const Date& d) const{
    return _year == d._year && _month == d._month && _day == d._day;
}

//d1 <= d2
bool Date::operator<=(const Date& d) const{
    return (*this < d) || (*this == d);
}

//d1 > d2
bool Date::operator>(const Date& d) const{
    return !(*this <= d);
}


//d1 >= d2
bool Date::operator>=(const Date& d) const{
    return !(*this < d);
}

//d1 != d2
bool Date::operator!=(const Date& d) const{
    return !(*this == d);
}
//d1 += 50
Date& Date::operator+=(int day){
    _day += day;
    while(_day > GetMonthDay(_year, _month)){
        _day -= GetMonthDay(_year, _month);
        _month++;
        while (_month > 12) {
            _year += 1;
            _month =1 ;
        }
    }

    return *this;
}

Date Date::operator+(int day) const{
    Date tmp = *this;
    tmp += day;
    return tmp;
}

// d1 -= 50;
Date& Date::operator-=(int day){
    while (_day - day < 0) {
        _month--;
        while (_month < 1) {
            _year--;
            _month = 12;
        }
        _day += GetMonthDay(_year, _month);

    }
    _day -= day;
    return *this;
}

//d1 - 100
Date Date::operator-(int day) const
{
    Date tmp = *this;
     tmp -= day;
    return tmp;
}

//++d1
Date& Date::operator++()
{
    *this += 1;

    return *this;
}

// d1++
Date Date::operator++(int)
{
    Date tmp(*this);
    *this += 1;

    return tmp;
}

Date& Date::operator--()
{
    *this -= 1;
    return *this;
}

Date Date::operator--(int)
{
    Date tmp = *this;
    *this -= 1;

    return tmp;
}
// d1 - d2
int Date::operator-(const Date& d) const{
    Date max = *this;
    Date min = d;
    int flag = 1;
    int n = 0;
    if((*this) < d){
        max = d;
        min = *this;
        flag = -1;
    }
    
    while (max != min) {
        max--;
        n++;
    }
    return n * flag;
}


