#include <iostream>
int main()
{
	int currval = 0,val = 0;
	if(std::cin>>val)
	{
		int cnt = 1;
		while(std::cin>>currval)
		{
			if(currval == val)
				cnt++;
			else
			{
				std::cout<<val<<" occurs "<<cnt<<" times. "<<std::endl;
				val = currval;
				cnt = 1;
			}
		}
	std::cout<<currval<<" occurs "<<cnt<<" times. "<<std::endl;
	}
	return 0;
}
