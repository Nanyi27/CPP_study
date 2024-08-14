//
//  list.hpp
//  List
//
//  Created by 南毅 on 2024/5/28.
//

#include <iostream>
using namespace std;

namespace nanyi {
template <class T>
class list_Node{
public:
    T _data;
    list_Node<T>* _prev;
    list_Node<T>* _next;
    
    list_Node(const T& data)
    :_data(data),
    _prev(nullptr),
    _next(nullptr)
    {
        
    }
};

template <class T,class Ref,class Ptr>
class List_iterator{
public:
    typedef list_Node<T> Node;
    typedef List_iterator Self;
    
    //不需要写析构函数，这个节点又不是这个类的
    //一个类一般不写析构，也就不需要显示写深拷贝
    List_iterator(Node* node)
    :_node(node)
    {
        
    }
    
    //日期类返回一个日期，那么迭代器返回一个迭代器
    //++it
    Self& operator++(){
        _node = _node->_next;
        return *this;
    }
    //--it
    Self& operator--(){
        _node = _node->_prev;
        return *this;
    }
    //it++
    Self operator++(int)//加参数 区分前置后置
    {
        Self tmp(*this);
        _node = _node->_next;
        return tmp;
    }
    //it--
    Self operator--(int){
        Self tmp(*this);
        _node = _node->_prev;
        return tmp;
    }
    
    
    Ref operator*(){
        return _node->_data;
    }
    
    bool operator!=(const Self& it){
        return _node != it._node;
    }
    
    bool operator==(const Self& it){
        return _node == it._node;
    }
    
    Ptr operator->(){
        return &(_node->_data);
    }
public:
    Node* _node;
    
};

//template <class T>
//class const_List_iterator{
//public:
//    typedef list_Node<T> Node;
//    typedef const_List_iterator Self;
//    
//    //不需要写析构函数，这个节点又不是这个类的
//    //一个类一般不写析构，也就不需要显示写深拷贝
//    const_List_iterator(Node* node)
//    :_node(node)
//    {
//        
//    }
//    
//    //日期类返回一个日期，那么迭代器返回一个迭代器
//    //++it
//    Self& operator++(){
//        _node = _node->_next;
//        return *this;
//    }
//    //--it
//    Self& operator--(){
//        _node = _node->_prev;
//        return *this;
//    }
//    //it++
//    Self operator++(int)//加参数 区分前置后置
//    {
//        Self tmp(*this);
//        _node = _node->_next;
//        return tmp;
//    }
//    //it--
//    Self operator--(int){
//        Self tmp(*this);
//        _node = _node->_prev;
//        return tmp;
//    }
//    
//    
//    const T& operator*(){
//        return _node->_data;
//    }
//    
//    bool operator!=(const Self& it){
//        return _node != it._node;
//    }
//    
//    bool operator==(const Self& it){
//        return _node == it._node;
//    }
//    
//    const T* operator->(){
//        return &(_node->_data);
//    }
//private:
//    Node* _node;
//    
//};

template <class T>
class list{
public:
    typedef list_Node<T> Node;
    typedef List_iterator<T,T&,T*> iterator;
    typedef List_iterator<T,const T&,const T*> const_iterator;
    //typedef const_List_iterator<T> const_iterator;
    void empty_Init(){
        _head = new Node(T());//不能使用0初始化，因为类型不确定
        _head->_next = _head;
        _head->_prev = _head;
    }
    list(){
        empty_Init();
    }
    

    void clear(){
        auto it = begin();
        while (it != end()) {
            it = erase(it);
            //不能++it,首先会迭代器失效，其次erase会自动返回下一个位置
        }
    }
    //拷贝构造
    list(const list<T>& ls){
        empty_Init();
        for (const auto& e : ls) {
            push_back(e);
        }
        
    }
    
    //析构
    ~list(){
        clear();
        delete _head;
        _head = nullptr;
    }
    
    void push_back(const T& x){
//        Node* newnode = new Node(x);
//        Node* tail = _head->_prev;
//        
//        tail->_next = newnode;
//        newnode->_prev = tail;
//        newnode->_next = _head;
//        _head->_prev = newnode;
        
        insert(end(), x);
    }
    
    void pop_back(){
        erase(--end());
    }
    
    void push_front(const T& x){
        insert(begin(), x);
    }
    
    void pop_front(){
        erase(begin());
    }
    
    iterator begin(){
        return iterator(_head->_next);
    }
    
    iterator end(){
        return iterator(_head);
    }
    
    const_iterator begin()const
    {
        return const_iterator(_head->_next);
    }
    
    const_iterator end() const
    {
        return const_iterator(_head);
    }
    
    iterator insert(iterator pos , const T& x){
        Node* cur = pos._node;
        Node* newnode = new Node(x);
        Node* prev = cur->_prev;
        
        newnode->_next = cur;
        newnode->_prev = prev;
        prev->_next = newnode;
        cur->_prev  = newnode;
        return iterator(newnode);
    }
    
    iterator erase(iterator pos){
        Node* cur = pos._node;
        Node* prev = cur->_prev;
        Node* next = cur->_next;
        // prev cur next
        
        prev->_next = next;
        next->_prev = prev;
        delete cur;
        cur = nullptr;
        return iterator(next);
    }
    
    //ls2 = ls1
    list<T>& operator=(list<T> ls){
        std::swap(_head, ls._head);
        return *this;
    }
    
    list (initializer_list<T> il){
        empty_Init();
        for (const auto& e : il) {
            push_back(e);
        }
    }
public:
    Node* _head;
};
}

