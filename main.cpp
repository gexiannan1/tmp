#include "Observer.h"
#include <iostream>


using namespace std;

class Base
{
	public:Base(){}
	public:
	       virtual void print(){cout<<"Base";}
};


class Derived:public Base
{
public:Derived(){}
public:
       void print(){cout<<"Derived"<<endl;}
};


int main()
{
  Observer* p1 = new ConcreteObserverA();
  Observer* p2 = new ConcreteObserverB();
  Observer* p3 = new ConcreteObserverA();

  Subject* pSubject = new ConcreteSubjectA();
  pSubject->Attach(p1);
  pSubject->Attach(p2);

   pSubject->Attach(p3);
    pSubject->SetState("old");
    pSubject->Notify();

    pSubject->SetState("new");
    pSubject->Detach(p3);
     pSubject->Notify();
    cout << "-------------------------------------" << endl;
     Base *point=new Derived();
     point->print();
     return 0;
}
