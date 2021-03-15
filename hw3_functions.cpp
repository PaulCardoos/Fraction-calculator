#include "Fraction.h"
#include <iostream>

using namespace std;

void Greeting(){
    cout <<"***********************************************" << endl;
    cout <<"** Welcome to the CS410 Fraction Calculator! **" << endl;
    cout <<"***********************************************" << endl;
    
}

char DisplayCalculator(){
    char input;
    cout << "Choose an option (select 1-5)\n" << endl; 
    cout << "1. Add      (+)" << endl;
    cout << "2. Subtract (-)" << endl;
    cout << "3. Multiply (*)" << endl;
    cout << "4. Divide   (/)" << endl;
    cout << "5. Quit"  << endl;
    cout << "\nSelect: ";
    cin >> input;
    return input;
}

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return GCD(b, a % b);
    }
}


Fraction::Fraction(int num, int den){
    m_Numerator = num;
    m_Denominator = den;
}

Fraction::Fraction(){
    m_Denominator = 1;
    m_Numerator = 0;
}

Fraction Fraction::operator +(Fraction other){
    Fraction temp;

    if(m_Denominator == other.m_Denominator){
        temp.m_Numerator = m_Numerator + other.m_Numerator;
        temp.m_Denominator = m_Denominator;

        return temp;
    }
    //1(m_Num)/3(m_Den) + 1(other)/2(other)

    int NewNum;
    int NewDen;
    int NewotherN;
    NewNum = m_Numerator * other.m_Denominator;
    NewDen = m_Denominator * other.m_Denominator;
    NewotherN = m_Denominator * other.m_Numerator;

    temp.m_Numerator = NewNum + NewotherN;
    temp.m_Denominator = NewDen;
    
    return temp;
}


Fraction operator- (Fraction lhs, Fraction rhs){
    Fraction temp;

    if(lhs.m_Denominator == rhs.m_Denominator){
        temp.m_Numerator = lhs.m_Numerator - rhs.m_Numerator;
        temp.m_Denominator = lhs.m_Denominator;

        return temp;
    }
    
    //1(m_Num)/3(m_Den) + 1(other)/2(other)

    int NewNum;
    int NewDen;
    int NewotherN;
    NewNum = lhs.m_Numerator * rhs.m_Denominator;
    NewDen = lhs.m_Denominator * rhs.m_Denominator;
    NewotherN = lhs.m_Denominator * rhs.m_Numerator;

    temp.m_Numerator = NewNum - NewotherN;
    temp.m_Denominator = NewDen;
    
    return temp;
}

Fraction Fraction::operator * (Fraction other){
    Fraction temp;
    temp.m_Denominator = m_Denominator * other.m_Denominator;
    temp.m_Numerator = m_Numerator * other.m_Numerator;
    return temp;
}

Fraction operator / (Fraction lhs, Fraction rhs){
    Fraction temp;
    rhs = rhs.reciprocal();
    temp.m_Denominator = lhs.m_Denominator * rhs.m_Denominator; 
    temp.m_Numerator = lhs.m_Numerator * rhs.m_Numerator;
    return temp;
}
Fraction Fraction::readin(){
    
    cout << "Enter Numerator: ";
    cin >> m_Numerator;
    cout << "Enter Denominator: ";
    cin >> m_Denominator;
    
    return Fraction(m_Numerator, m_Denominator);
}

void Fraction::print(){
    cout << "(" << m_Numerator;
    cout << "/" << m_Denominator;
    cout << ")";
}

Fraction Fraction::reciprocal(){
    Fraction flipped;
    flipped.m_Numerator = m_Denominator;
    flipped.m_Denominator = m_Numerator;
    return flipped;
}

void Fraction::unreduced(const int m){
    m_Numerator *= m;
    m_Denominator *= m;
    return;
}

Fraction Fraction::reduce(const int m){
    int newN;
    int newD;
    newN = m_Numerator / m;
    newD = m_Denominator / m;
    return Fraction(newN, newD);
}

int Fraction::getNum(){
    return m_Numerator;
}

int Fraction::getDen(){
    return m_Denominator;
}

void Fraction::setNum(const int n){
    m_Numerator = n;
    return;
}

void Fraction::setDen(const int d){
    m_Denominator = d;
    return;
}

bool Fraction::setDenom(const int d){
    bool set = false;
    if(d != 0){
        set = true; 
        m_Denominator = d;
    }
    return set;
}

bool Fraction::setNumer(const int n){
    bool set = false;
    if(n != 0){
        set = true;
        m_Numerator = n;
    }
    return set;
}




