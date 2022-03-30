#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
#include<iostream>
using namespace std;

const int max_itmes = 5;

template<class T>

class UnsortedList
{
private:
    T data[max_itmes];
    int length;
    int currentPos;
public:
    UnsortedList(/* args */);
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void Insert(T);
    void Delete(T);
    int isLength();
    void getNextItem(T&);
    void resetList();
    void retriveValue(T&,bool&);

};
#endif
