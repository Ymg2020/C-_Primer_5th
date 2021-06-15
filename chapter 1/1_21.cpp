#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book1,book2;
	std::cout<<"请输入ISBN号、售出的册数以及销售价格"<<std::endl;
	std::cin>>book1>>book2;
	std::cout<<"ISBN号、售出的册数以及总销售额，平均销售价格为："
	<<std::endl<<book1+book2<<std::endl;
	return 0;
}
