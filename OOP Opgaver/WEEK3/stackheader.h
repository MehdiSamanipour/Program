#pragma once
#include <list>
#include <string>

// To represent stack using template by class
template <typename Objekt>
class StackArray
{

public:
    StackArray()
    {
        capacity_ = 100;
        array_ = new Objekt[capacity_];          //The default constructor should create a stack with 100 elements
    }

    ~StackArray()       //delete  stackArrray  
    {
        delete[] array_;
    }


    void push(const Objekt data)
    {

        if (size_ >= capacity_)
        {
            int dobbeltCapacity = capacity_ * 2;  // new array alocated that double size
            array2_ = new Objekt[dobbeltCapacity];

            for (size_t i = 0; i < capacity_; i++)
            {
                array2_[i] = array_[i];
            }
            delete[] array_;
            array_ = array2_;
            array_[size_] = data;
        }


        else
        {
            array_[size_] = data;
            size_ * 2;             
        }
    }


    Objekt pop()
    {
        size_--;
    }


private:
   int   Object* array_;
    int size_ = 0;
    int capacity_;
    int array2_;
};