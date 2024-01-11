#include<iostream>

int main()
{

	int height, row = 1, star = 0;;
	std::cout << "Enter the height of the triangle: ";
	std::cin >> height;

	while (row <= height) {

		star = 2 * height - 1;
		if ((star/2)+1)
		{
			std::cout << "* ";
		}
		else
		{
			int j = 1;
			while (j <= star) {
				std::cout << "* ";
				j++;
			}
			std::cout << "\n";
			row++;
		}
		
	}


	std::cout << "opgaver 1 " << std::endl;
	int tal;
	int  m=0 ;
	int sum=0 ;

	std::cout << "Enter en positive heltalsvørdi som vil returnernr sum " << std::endl;

	std::cin >> tal;

	while (m <= tal )
	{
		

			sum+=m;
			m++;
	}

	std::cout <<"sum er: " << sum;

	std::cout <<std::endl<< "opgaver 2 " << std::endl;
	int n = 0;
	int counter = 0;
	std::cout << "\n input:  " << std::endl;
	
	std::cin >> n;
	while (counter <= n)
	{
		++counter;
		if (counter%2==0)
		{
			std::cout << " " << counter;
		}
	}

	std::cout<< std::endl << "opgaver 3 " << std::endl;

		int i, space, rows, k = 0;
		std::cout<<"\n Enter the number of rows: ";
		std::cin >> rows;
		for (i = 1; i <= rows; ++i, k = 0) {
			for (space = 1; space <= rows - i; ++space) {
				std::cout<<"  ";
			}
			while (k != 2 * i - 1) {
				std::cout<<"* ";
				++k;
			}
			std::cout<<"\n";




		}
		return 0;
	}

