#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<vector>
using namespace std;

class Person
{
    friend bool lesserAge(const Person&p1,const Person&p2);
    friend void outputV(vector<Person>V);
public:
    Person(char *name1, int age1);
    Person(const Person&p);                                              //拷贝构造函数
    ~Person();
    Person &operator=(const Person&p);
    bool operator==(const Person&p) const;
    bool operator <(const Person&p) const;
    bool operator >(const Person&p) const;
    int nameSize() const;
private:
    char* name;
    int age;
};
bool lesserAge(const Person&p1,const Person&p2);
void outputV(vector<Person>V);
#endif // PERSON_H
