#include <iostream>
#include "unsorted_h.h"
using namespace std;


template<class T>
UnsortedList<T>::UnsortedList()
{
    length=0;
    currentPos=-1;
}

template<class T>
bool UnsortedList<T>::isEmpty()
{
    return length==0;
}

template<class T>
bool UnsortedList<T>::isFull()
{
    return length == max_itmes;
}

template<class T>
int UnsortedList<T>::isLength()
{
    return length;

}
template<class T>
void UnsortedList<T>::makeEmpty()
{
    length=0;
}

template<class T>
void UnsortedList<T>::Insert(T item)
{
    data[length]=item;
    length++;
}

template<class T>
void UnsortedList<T>::Delete(T item)
{
    int location = 0;
    for (int i = 0; i < length; i++)
    {
        if(data[i] == item)
        {
            location = i;
            break;
        }
    }
    data[location] = data[length  - 1];
    length--;

}

template<class T>
void UnsortedList<T>::resetList()
{
    currentPos=-1;
}
template<class T>
void UnsortedList<T>::retriveValue(T& item,bool& isFound)
{
    for(int i=0; i<length; i++){

        if(data[i] == item)
        {
            isFound = true;
            item = data[i];
            return;
        }
    }
}

template<class T>
void UnsortedList<T>::getNextItem(T& item)
{
    currentPos ++;
    item = data[currentPos];
}

