//
//  string.hpp
//  String
//
//  Created by 南毅 on 2024/5/8.
//

#ifndef string_hpp
#define string_hpp



#endif /* string_hpp */
#include <iostream>
using namespace std;
#include <assert.h>
#include <string.h>

namespace nanyi{
    class String{
private:
        char* _str;
        size_t _size;
        size_t _capacity;
        const static size_t npos;
public:
        typedef char* iterator;
        typedef const char* const_iterator;

        //s构造函数、初始化列表
        //拷贝构造
        String(const char* str = "");
        String();
        String(const String& s);
        String& operator=(const String &s);
        ~String();
        
        const char* c_str() const;
        size_t size() const;
        char& operator[](size_t pos);
        const char& operator[](size_t pos) const;
        
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;
        
        void reserve(size_t n);

        void push_back(char ch);
        void append(const char* str);

        String& operator+=(char ch);
        String& operator+=(const char* str);

        void insert(size_t pos, char ch);
        void insert(size_t pos, const char* str);
        void erase(size_t pos = 0, size_t len = npos);

        size_t find(char ch, size_t pos = 0);
        size_t find(const char* str, size_t pos = 0);

        void swap(String& s);
        String substr(size_t pos = 0, size_t len = npos);

        bool operator<(const String& s) const;
        bool operator>(const String& s) const;
        bool operator<=(const String& s) const;
        bool operator>=(const String& s) const;
        bool operator==(const String& s) const;
        bool operator!=(const String& s) const;
        void clear();
    
};
    istream& operator>> (istream& is, string& str);
    ostream& operator<< (ostream& os, const string& str);
}
