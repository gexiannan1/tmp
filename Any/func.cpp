#include <string>
#include <functional>
#include <map>
#include <iostream>


void func(void)
{
  std::cout << "hahhah my name is gexiannan " << std::endl;
}


struct Foo
{
  void operator() (void)
  {
    std::cout << "fang function " << std::endl;
  }
};


struct Bar
{
  using fr = void(*)(void);
  static void func(void)
  {
    std::cout << "keyibeizhuanhuanwei hanshuzhizhen" << std::endl;
  }
  operator fr(void)
  {
    return func;
  }
};

class Base
{
  public:
    void menfcn()
    {
      std::cout << "Base function" <<std::endl;
    }
    void menfcn(int n)
    {
      std::cout<< "Base function with int "<< std::endl;
      return ;
    }
};

struct A
{
  int a_ ;
  void mem_func(void)
  {
    std::cout << "class member pointer" << std::endl;
    std::cout << "a :%d "<< a_ << std::endl;

  }
};

class Derived : Base
{
  public:
    using Base::menfcn;
    int menfcn(int n)
    {
      std::cout << "Derived function with int " << std::endl;
      return 0;
    }
};

void function(void)
{
  std::cout << __FUNCTION__ << std::endl;
}

class foo 
{
  public:
    static int foo_func(int a )
    {
      std::cout << __FUNCTION__<< "("  << a << ") ->:" << std::endl;
      return a;
    }
};


class newbar
{
  public:
    int operator() (int a)
    {   
      std::cout << __FUNCTION__ << "(" << a << ") ->:"<< std::endl;
      return a;
    }
};

int main()
{
  void (* func_ptr) (void ) = &func ;
  func_ptr();

  Foo fool;
  fool();

  Bar bar;
  bar();

  Base b;
  Derived d;
  b.menfcn();
  d.menfcn();
  int A::*mem_obj_ptr = &A::a_;

  void (A::*mem_func_ptr)(void) = &A::mem_func;
  A aa;
  (aa.*mem_func_ptr)();
 aa.*mem_obj_ptr = 123;
 aa.mem_func();

 // test
 std::function<void(void)> fr1 = func ;
 fr1();
 std::function<int(int)> fr2 = foo::foo_func;
 std::cout << fr2(123) << std::endl;


 newbar nbar;
 fr2 = nbar;
 std::cout << fr2(1243) << std::endl;
  return 0;
}
