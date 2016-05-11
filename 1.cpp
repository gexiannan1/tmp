#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
void DeleteNum(std::vector<int>& vec, int num)
 {
	 std::vector<int>::iterator iter = vec.begin() ;
        for(; iter != vec.end() ; )
	{
		if((*iter) == num)
		{
			iter = vec.erase(iter);
			break;
		}
		else
		{
			iter++;
		}
	}
}

char* itoa(int num, char* out_put) {
int i = 0;
while(num)
{
	out_put[i++] = num%10 +'0';
	num = num/10;
}
out_put[i] = '\0';
//reverse(str);

return out_put;
}

void bubble_sort(int* begin, int count) {
	int *start = begin ;
	int tmp ;
	for(int i = 0 ; i < count ; i++)
	{
		for(int j = i + 1 ; j < count ; j++)
		if(start[i] > start[j])
		{
			tmp = start[i];
			start[i] = start[j];
			start[j] = tmp;
		}
	}
}



int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(23);
  vec.push_back(3);
  vec.push_back(2);
  vec.push_back(3);

  DeleteNum(vec, 3);
  DeleteNum(vec, 2);
for(std::vector<int>::iterator it = vec.begin() ; it != vec.end() ; it++)
{
	std::cout << *it << std::endl;
}

  char str[11] = {0};
  itoa(123456789, str);
printf("%s \n", str);
  //itoa(-123456789, str);

  int array[] = {23,43,1,34,56,332,22};
  bubble_sort(array, sizeof(array)/sizeof(array[0]));
for(int i = 0 ; i < sizeof(array)/sizeof(array[0]) ; i++ )
{
 std::cout << array[i] << std::endl;
}

  return 0;
}
