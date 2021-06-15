#include <iostream>
int main()
{
	int i=49,counter=0;
	while(i<100)
	{
		i++;
		counter += i;
	}
	std::cout<<"The sum from 50 to 100 is "<<counter<<std::endl;
	return 0;
}
