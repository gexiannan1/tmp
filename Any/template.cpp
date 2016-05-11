#include <iostream>
using namespace std;

template <typename T> void TempFun(T a)
{
  std::cout << a << std::endl;
}
class HasPtrMem
{
  public:
  HasPtrMem():d(new int(0)) {}
  HasPtrMem(const HasPtrMem& h):
    d(new int(*h.d)) {}

  ~HasPtrMem() {delete d ;}
  public:
  int * d;
};

int main()
{
  TempFun(1);
  TempFun("22");
  HasPtrMem a;
  HasPtrMem b(a);
  std::cout << *a.d << std::endl;
  std::cout << * b.d << std::endl;
  return 0;
}
