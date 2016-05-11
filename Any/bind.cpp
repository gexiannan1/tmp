#include <iostream>
#include <functional>

class A
{
  public:
    int i_ = 0;
    void output(int x ,int y)
    {
      std::cout << x  << " "  << y << std::endl;
    }

};
int main(void)
{
  //std::bind(output,std::placeholders::_2,std::placeholders::_1)(3,4);
  A a;
  std::function<void(int,int)> fr = std::bind(&A::output , &a , std::placeholders::_1, std::placeholders::_2);
  fr(1,2);
  std::function<int& (void)> fr_i = std::bind(&A::i_,&a);
  fr_i() = 123 ;
  std::cout << a.i_ << std::endl;
  return 0;
}
