#include "person.h"
Person::Person(char*  name1, int age1)
{
    name=strdup(name1);
    age=age1;

}

Person::Person(const Person &p)
{
    name=strdup(p.name);
    age=p.age;

}

Person::~Person()
{
    free(name);

}
//自己开辟内存，malloc
//Person& Person::operator=(const Person &p)
//{
//    //this->name=new char[p.nameSize()+1];
//    this->name=(char*)malloc(sizeof(char[p.nameSize()]));
//    int i=0;
//    while(p.name[i]!='\0')
//    {
//        this->name[i]=p.name[i];
//        i++;
//    }
//    this->name[i]=p.name[i];
//    this->age=p.age;
//    return (*this);

//}
//调用strdup开辟内存
Person& Person::operator=(const Person &p)
{
    this->name=strdup(p.name);
    this->age=p.age;
    return (*this);

}

bool Person::operator==(const Person &p) const
{
    return strcmp(name,p.name)==0&&age==p.age;
}

bool Person::operator<(const Person &p) const
{
    return strcmp(name,p.name)<0;
}

bool Person::operator >(const Person &p) const
{
    return !(*this==p)&&!(*this<p);
}

int Person::nameSize() const
{
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    return i;
}

bool lesserAge(const Person &p1, const Person &p2)
{
    return p1.age<p2.age;
}

void outputV(vector<Person> V)
{
    unsigned i;
//    for(i=0;i<V.size();i++)
//    {
//        int j=0;
//        while(V[i].name[j]!='\0')
//        {
//            cout<<V[i].name[j];
//            j++;
//        }
//        cout<<","<<V[i].age<<endl;
//    }
    for(i=0;i<V.size();i++)
    {
        cout<<V[i].name<<","<<V[i].age<<endl;
    }
    cout<<"end output"<<endl<<endl;
}
