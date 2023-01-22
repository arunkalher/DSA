#include"helpp.h"
#include<iostream>
void Add::printit()
{
    std::cout<<a<<' '<<b<<std::endl;
}

Add jod(Add a1,Add a2)
{
    Add obj=Add(0,0);
    obj.a=a1.a+a2.a;
    obj.b=a1.b+a2.b;
    return obj;
}