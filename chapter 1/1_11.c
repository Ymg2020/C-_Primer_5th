#include <iostream>
int main()
{
	int min,max,show,temp;
	std:cout<<"Please input two number:"<<std::endl;
	std::in>>min>>max;
	if(min>max)
	{
		temp = min;
		min = max;
		max = temp;
	}
	std::cout<<"The number between "<<min<<" and "<<max<<" is "<<std::endl;
	for(show = min;show<=max;show++)
	{
		std::cout<<show<<std::endl;
	}
	return 0;
}
