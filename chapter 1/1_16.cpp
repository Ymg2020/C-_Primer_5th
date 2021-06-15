#include <iostream>
int main()
{	
	int sample = 0;
	int counter = 0;
	std::cin>>sample;
	while(sample!=-1)
	{
		counter += sample;
		std::cin>>sample;
	}
	std::cout<<"The sum of input number is :"<<counter<<std::endl;
	return 0;
}
