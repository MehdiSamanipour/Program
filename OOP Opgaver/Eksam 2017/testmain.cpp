#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Skuffe.h"
#include"Reol.h"


/*void printTalraekke(int minimum, int maksimum) {
	if (minimum>maksimum)
		printf("%s", "FEJL!");
	else
	
		for (size_t i = minimum; i <= maksimum; i++)
		{
			printf("%d\n ", i);
		}
	
}
*/
int main() {

	///*/*/int num;
	//srand(time(0));
	//do
	//{
	//	num = rand() % 26 + 97;
	//	printf("%c\n", num);

	//} while (num !='z');/**/

	/*/int num1, num2, temp = 0;
	printf("%s", "indtast to hele tal:");
	scanf_s(" %d \n %d ", &num1, &num2);
	if (num2 < num1)

	

		printTalraekke(num2, num1);
	else
		printTalraekke(num1, num2);
	

	for (size_t i = 37; i < 122; i++)
	{
		printf("%d\n", i);
	}
	*/

	Skuffe tomSkuffe, dvdSkuffe("Dvd film", 5);

	tomSkuffe.print();

	dvdSkuffe.print();

	Reol tomReol, ssdReol("ukent", 7);

         

	tomReol.print();
	ssdReol.print();


}