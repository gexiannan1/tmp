
#include <iostream>

using namespace std;

void print()
{
  cout << "hehehe" << endl;
}

template<typename T> void print(const T& t)
{
  cout << t << endl;
}

template <typename First, typename... Rest> void print(const First& first        ,const Rest&... rest)
{
  cout << first << ",";
  print(rest...);
}

int main()
{
  print("first" ,2,"third",3.123);
  return 0;
}
