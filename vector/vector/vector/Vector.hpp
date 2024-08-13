//
//  Vector.hpp
//  vector
//
//  Created by 南毅 on 2024/5/19.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <iostream>
using namespace std;
#include <string.h>
#endif /* Vector_hpp */
#include <assert.h>

namespace nanyi {
template <class T>
class Vector{
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    
    iterator begin(){
        return _start;
    }
    
    iterator end(){
        return _finish;
    }
    
    
    const_iterator begin()const{
        return _start;
    }
    
    const_iterator end()const{
        return _finish;
    }
    
    size_t capacity(){
        return _end_of_storage - _start;
    }
    
    size_t size(){
        return _finish - _start;
    }
    
    
    void reserve(size_t n){
        if (n > capacity()) {
            //记录旧空间size个数   目的：正确指引新空间_finish位置
            size_t oldsize = size();
            //开辟新空间
            T* tmp = new T[n];
            
            if (_start){
                memcpy(tmp, _start, sizeof(T) * size());
                delete[] _start;
            }
            //改变_start _finish _end_of_storage新指向
            _start = tmp;
            _finish = _start + oldsize;
            _end_of_storage = _start + n;
            
        }
    }
    
    T& operator[](size_t i){
        assert(i < size());
        return _start[i];
    }
    
    const T& operator[](size_t i)const
    {
        assert(i < size());
        return _start[i];
    }
    
    void push_back(T x){
        if (_finish == _end_of_storage) {
            size_t newcapacity = capacity() == 0? 4 :2 * capacity();
            reserve(newcapacity);
        }
        *_finish = x;
        _finish++;
        
//        insert(end(), x);

    }
    //类模版的成员函数
    //默认构造函数
//    Vector():
//    _start(nullptr),
//    _finish(nullptr),
//    _end_of_storage(nullptr)
//    {
//        
//    }
    
    
    
    
    
    Vector() = default;
    
    Vector(size_t n , const T& value = T()){
        for (size_t i = 0; i < n; i++) {
            push_back(value);
        }
    }
    
    ~Vector()
    {
        if (_start)
        {
            delete[] _start;
            _start = _finish = _end_of_storage = nullptr;
        }
    }
    Vector(initializer_list<T> il)
    {
        reserve(il.size());
        for (auto e : il)
        {
            push_back(e);
        }
    }
    
//    template<class InputIterator>
//    Vector(InputIterator first,InputIterator last)
//    {
//        while (first != last) {
//            push_back(*first);
//            first++;
//        }
//    }
    
    //拷贝构造
    //v2(v1)
    Vector(Vector<T>& v1){
        reserve(v1.capacity());
        for (auto e : v1) {
            push_back(e);
        }
    }
    
    
    //赋值运算符重载
    //v1 = v2
    Vector<T>& operator=(Vector<T> v){
        swap(v);
        return *this;
    }
    
    
    
    void pop_back(){
        assert(size() > 0);
        _finish--;
    }
    
    iterator insert(iterator pos, const T& x){
        assert(pos >= _start);
        assert(pos <= _finish);
        if (_finish == _end_of_storage) {
            size_t len = pos - _start;
            size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
            reserve(newcapacity);
            //空间开辟好了 _start _finish _end_of_stotage 指向新空间
            //pos也需要指向新空间
            //如果不指向新空间会引起迭代器失效（扩容的时候才会产生）
            pos = _start + len;
        }
        iterator end = _finish;
        while (end > pos ) {
            *(end) = *(end -1);
            end--;
        }
        *pos = x;
        ++_finish;

        return pos;        
    }
    
    void erase(iterator pos){
        assert(pos <= _finish);
        assert(pos >= _start);
        iterator it = pos + 1;
        while (it < _finish) {
            *(it - 1) = *it;
            it++;
        }
        _finish--;

    }
    
    Vector<T> Print(){
        for (auto e : *this) {
            cout << e <<" ";
        }
        cout << endl;
        return *this;
    }
    
    //swap()函数
    void swap(Vector<T> v)
    {
        std::swap(_start, v._start);
        std::swap(_finish, v._finish);
        std::swap(_end_of_storage, v._end_of_storage);
    }

private:
    iterator _start = nullptr;
    iterator _finish = nullptr;
    iterator _end_of_storage = nullptr;
    
};
}
