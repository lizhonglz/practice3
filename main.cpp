#include"person.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //测试=运算符
    Person p1("liz",20),p2("lizhonglz",20);
    p1.nameSize();
    p1=p2;
    //调用sort函数对v1进行排序操作
    vector<Person>v1(1,Person("Gregg",25));
    v1.push_back(Person("Ann",30));
    v1.push_back(Person("Bill",20));
    sort(v1.begin(),v1.end(),lesserAge);
    outputV(v1);
    char * ptr1="lizhong";
    v1.push_back(Person(ptr1,21));
    sort(v1.begin(),v1.end(),lesserAge);
    outputV(v1);
    cout<<"end"<<endl;

    return 0;
}
