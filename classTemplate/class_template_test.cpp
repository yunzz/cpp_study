#include "iostream"
using namespace std;

template <class NameType,class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;  
    }

    void showPerson()
    {
        cout << "姓名为：" << this->m_Name << endl;
        cout << "年龄为：" << this->m_Age << endl;
    }

private:
    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    Person p1("刘大",18);

    p1.showPerson();
}




int main()
{
    test01();
    return 0;
}