#include "lab18.h"
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int ClassVector::operator[](int i)
{
    if (i < 0 || i >= this->m_vector.size()) { throw InvalidIndexError(); }
    auto it = this->m_vector.begin();
    advance(it, i);
    return *it;
}
void ClassVector::Show()
{
    for (auto it = this->m_vector.begin(); it != this->m_vector.end(); it++) cout << *it << " ";
    cout << endl;
}
ClassVector ClassVector::operator*(ClassVector add_vector)
{
    if (this->m_vector.size() != add_vector.m_vector.size()) throw NoMatchSizes();
    ClassVector new_vector(this->m_vector.size(), add_vector[0]);
    auto it1 = this->m_vector.begin();
    auto it2 = add_vector.m_vector.begin();
    auto it3 = new_vector.m_vector.begin();
    while (it1 != this->m_vector.end())
    {
        *it3 = (*it2) * (*it1);
        it1++; it2++; it3++;
    }
    *it3 = (*it2) * (*it1);
    return new_vector;
}
int ClassVector::operator()() { return this->m_vector.size(); }
