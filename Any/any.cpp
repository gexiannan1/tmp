#include <string>
#include<unordered_map>
#include <memory>
#include <functional>
#include <algorithm>
#include "any.h"
using namespace std;

/*class IonContainer
{
  public:
    IonContainer(void){}
    ~IonContainer(void){}

    template<class T , typename Depend>
    void RegisterType(const string& strKey)
    {
      std::function<T* ()> function = []{return new T(new Depend() );  };
      RegisterType(strKey ,function);
    }

    template<class T>
    T* Resolve(const string& strKey)
    {
              if(m_creatorMap.find( strKey) == m_creatorMap.end() )
                return nullptr;
              Any resolver = m_creatorMap[strKey];
              std::function <T* ()> function = resolver.AnyCast<std::function<T* ()>> ();
              return function();
    }


    template<class T >
      std::shared_ptr<T> ResolveShared(const string & strKey)

      {
        T* t = Resolve<T> (strKey);
        return std::shared_ptr<T>(t);
      }
  private:
    void RegisterType(const string& strKey ,Any construct )
    {
      if(m_creatorMap.find(strKey) != m_creatorMap.end() )
        throw std::invalid_argument("this key has already exists ");
      m_creatorMap.emplace(strKey,construct);
    }
  private:
    unordered_map<string , Any> m_creatorMap;
};*/

struct Bus
{
  void Test()  const
  {
    std::cout << "Bus::test()" << std::endl;
  }
};

struct Car
{
  void Test() const {std::cout << "Car::test" << std::endl ;}
};

struct Base
{
  virtual void Func() {}
  virtual ~Base() {}
};

struct DerivedB : Base
{
  void Func() override
  {
    std::cout << "call func in DerivedB " << std::endl;
  }
};

struct DerivedC : Base
{
  void Func() override
  {
    std::cout << "call func in DerivedC" << std::endl;
  }
};

struct DerivedD : Base
{
  void Func() override
  {
    std::cout << "call in DeriveD " << std::endl;
  }
};


struct A 
{
  A(Base* ptr ) : m_ptr(ptr)
  {

  }
  void Func()
  {
    m_ptr->Func();
  }
  ~A()
  {
    if(m_ptr != nullptr )
    {
      delete m_ptr;
      m_ptr = nullptr;
    }
  }
  private:
  Base* m_ptr;
};


void TestIOC()
{
  IonContainer ioc;
// ioc.RegisterType(A ,DerivedB)("B");
}

int main()
{

  std::cout << "hahahhahahahahh my name is gexiannann " << std::endl;
  return 0;

}
