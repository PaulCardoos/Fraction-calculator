#ifndef FRACTION_H
#define FRACTION_H

#include <vector>

using namespace std;

char DisplayCalculator();
int GCD(int a, int b);
void Greeting();

class Fraction{
    public:
        Fraction(int num, int den);
        Fraction();
        Fraction readin();
        void print();
        Fraction reciprocal();
        void unreduced(const int m);
        Fraction reduce(const int m);
        int getNum();
        int getDen();
        void setDen(const int d);
        void setNum(const int n);
        bool setNumer(const int n);
        bool setDenom(const int d);
        Fraction operator +(Fraction other);
        friend Fraction operator -(Fraction lhs, Fraction rhs);
        Fraction operator *(Fraction other);
        friend Fraction operator /(Fraction lhs, Fraction rhs);
    private:
        int m_Numerator;
        int m_Denominator;
};

template<class T>
class Queue{
    private:
        vector<T> Queue;
    public:
        void enqueue(T element);
        int getSize();
        void dequeue();
        void peek();
        bool isEmpty();
        void DisplayQ();
};

#include "Fraction.hpp"
#endif