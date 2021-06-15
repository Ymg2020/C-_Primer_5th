#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item currbook,prebook;
	std::cout<<"请输入相同ISBN的书籍数本"<<std::endl;
	if(std::cin>>prebook)
	{
		while(std::cin>>currbook)
		{
			if(prebook.same_isbn(currbook))
			{
				prebook += currbook;
			}
			else
			{
				std::cout<<prebook<<std::endl;
				prebook = currbook;
			}
		}
	}
	else
	{
		std::cout<<"没有输入数据"<<std::endl;
		return -1;
	}
	return 0;
}
