#include <iostream>
#include <cstdio>
using namespace std;
//int snprintf(char *str, size_t size, const char *format, ...);
int max_symmetric(char*)
{
	return 0;

}
class aClass
{
    public:
          aClass() : N(5) {}
              void aMemberFunction()
                    {
                            int nums[5] = {1,2,3,4,5};
                                }
                private:
                  const int N;
};

class B;
class A
{
  public:
      A(){}
        A(B*){}
};

class B
{
  public:
      B(int){}
        operator A(){ return A();}
};

char * FieldSetString(const char * buf , int buflen )
{
  char* start = (char*)buf;
  start = start + 2;
  return start;
}


string  inttostring(int params)
{
  char buffer[32] ;
  snprintf(buffer,sizeof(buffer),"%d",params);
  return buffer;
}




template <class _Os,class _Data>
_Os& inttostring(_Os& os , const _Data paras)
{
  basic_stringstream< typename _Os::value_type ,char_traits<typename  _Os::value_type>,allocator<_Os::value_type> > s;
  s << params;
  s >> os ;
  return os ;
}
int main()
{
int a = 100;
char str[] = {0};
sprintf(str,"%d", a);
std::cout <<  str << std::endl;





    aClass A;
  A.aMemberFunction();
  const char* p = "gexiannan";
char *pRet = FieldSetString(p , 1 );
printf ("%s \n",pRet);
//std::cout << inttostring(100)<< std::endl;
const char* str1 = inttostring(1000).c_str();
printf("%s \n",str1);
std::cout << "gexiannan   \ n" << std::endl;

string s ;
wstring w ;
std::cout << inttostring(s , 1234 ) << std::endl;
std::cout << inttostring(s,"asft") << std::endl;
//std::cout << inttostring(w, L"wStr") << std::endl;
return 0;
}

