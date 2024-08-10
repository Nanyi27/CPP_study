//
//  string.cpp
//  String
//
//  Created by 南毅 on 2024/5/8.
//

#include "string.hpp"

namespace nanyi {
const size_t String::npos = -1;
//构造函数
String::String(const char* str)
    :_size(strlen(str))
{
    _capacity = _size;
    _str = new char[_size + 1];
    strcpy(_str, str);
}
//默认构造
String::String(){
    _str = new char[1]{'\0'};
    _size = _capacity = 0;
}

//传统拷贝构造
//String::String(const String& s)
//{
//    _str = new char[s._capacity + 1];
//    strcpy(_str, s._str);
//    _size = s._size;
//    _capacity = s._capacity;
//    
//}

//现代拷贝构造s2(s1)
String::String(const String& s)
    :_str(nullptr),
    _size(0),
    _capacity(0)
{
    String tmp(s._str);
    swap(tmp);
}

//String& String::operator=(const String &s){
//    if (this == &s) {
//        return *this;
//    }
//    
//    _str = new char[s._capacity + 1];
//    strcpy(_str, s._str);
//    _size = s._size;
//    _capacity = s._capacity;
//    return *this;
//
//}

String& String::operator=(const String &s){
    if (this == &s) {
        return *this;
    }
    String tmp(s._str);
    swap(tmp);
    return *this;
}


const char* String:: c_str() const {
    return _str;
}

size_t String::size() const
{
    return _size;
}

char& String::operator[](size_t pos){
    assert(pos < _size);
    return _str[pos];
}

const char& String::operator[](size_t pos) const{
    assert(pos < _size);
    return _str[pos];
}

String::iterator String::begin(){
    return _str;
}

String::iterator String::end(){
    return _str + _size;
}

String::const_iterator String::begin() const{
    return _str;
}
String::const_iterator String::end() const{
    return _str + _size;
}

void String::reserve(size_t n){
    char* tmp = new char[n+1];
    strcpy(tmp, _str);
    delete [] _str;
    
    _str = tmp;
    _capacity = n;
}

void String::push_back(char ch){
    if (_size == _capacity) {
        size_t newcapacity = _capacity == 0? 4 : _capacity*2;
        reserve(newcapacity);
    }
    _str[_size] = ch;
    _str[_size + 1] = '\0';
    _size++;
}

void String::append(const char* str){
    size_t len = strlen(str);
    if (_size + len > _capacity) {
        reserve(_size + len);
    }
    
    strcpy(_str + _size, str);
    _size += len;
}


String& String::operator+=(char ch){
    push_back(ch);
    return *this;
}

String& String::operator+=(const char* str){
    append(str);
    return *this;
}

void String::insert(size_t pos, char ch){
    assert(pos <= _size);
    if (_size == _capacity) {
        size_t newcapacity = _capacity == 0? 4 : _capacity*2;
        reserve(newcapacity);
    }
    size_t end = _size + 1;
    while (end > pos) {
        _str[end] = _str[end-1];
        end--;
    }
    _str[pos] = ch;
    _size++;
}

void String::insert(size_t pos, const char* str){
    assert(pos <= _size);
    size_t len = strlen(str);
    if (_size + len > _capacity) {
        reserve(_size + len);
    }
    size_t end = _size + len;
    while (end >= pos + len) {
        _str[end] = _str[end-len];
        end--;
    }
    memcpy(_str + pos, str, len);
    _size += len;
}


void String::erase(size_t pos, size_t len){
    assert(pos <= _size);
    if (len >= _size - pos) {
        _str[pos] = '\0';
        _size = pos;
    }else{
        strcpy(_str + pos, _str + pos + len);
        _size -= len;
    }
}

size_t String::find(char ch, size_t pos){
    for (size_t i = 0; 0 < _size; i++) {
        if (_str[i] == ch) {
            return i;
        }
    }
    return npos;
}

size_t String::find(const char* str, size_t pos){
    char* p = strstr(_str + pos,str);
    return p - _str;
}

void String::swap(String& s){
    std::swap(_str, s._str);
    std::swap(_size, s._size);
    std::swap(_capacity, s._capacity);
}

String String::substr(size_t pos, size_t len){
    if (len > _size - pos) {
        String sub(_str + pos);
        return sub;
    }else{
        String sub = "";
        sub.reserve(len);
        for (size_t i = 0; i < len; i++) {
            sub += _str[pos+i];
        }
        return sub;
    }
    
}

bool String::operator<(const String& s) const{
    return strcmp(_str, s._str) < 0;
}

bool String::operator==(const String& s) const{
    return strcmp(_str, s._str) == 0;
}

bool String::operator>(const String& s) const
    {
        return !(*this <= s);
    }

    bool String::operator<=(const String& s) const
    {
        return *this < s || *this == s;
    }

    bool String::operator>=(const String& s) const
    {
        return !(*this < s);
    }

    bool String::operator!=(const String& s) const
    {
        return !(*this == s);
    }

    void String::clear()
    {
        _str[0] = '\0';
        _size = 0;
    }

istream& operator>> (istream& is, string& str){
    str.clear();
    char ch = is.get();
    while (ch != ' ' && ch != '\n') {
        str += ch;
        ch = is.get();
    }
    
    return is;
}

ostream& operator<< (ostream& os, const string& str){
    for (size_t i = 0; i < str.size(); i++)
    {
        os << str[i];
    }
    return os;
}
//析构函数
String::~String(){
    delete[] _str;
    _str = nullptr;
    _capacity = _size = 0;
    
}
}
