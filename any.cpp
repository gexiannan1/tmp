#include <string>
#include<unordered_map>
#include <memory>
#include <functional>
using namespace std；

class IonContainer
{
  public:
    IonContainer(void){}
    ~IonContainer(void){}

    template<class T , typename Depend>
    void RegisterType(const string&)
    {
      std::functional<T* ()> function = []{return new T(new Depend() );  };
      RegisterType(strKey ,functional);
    }

    template<class T>
    T* Resolve(const string& strKey)
    {

    }
}
