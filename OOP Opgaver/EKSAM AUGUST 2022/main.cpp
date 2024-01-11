//#include<stdio.h>
//#include<math.h>
#include<iostream>
#include"Bloddonor.h"

////opgave1.a
//
//int potens(int num1, int num2) {
//
//	int resultate = pow(num1, num2) ;
//
//	
//	
//		if (num2 == 0)
//			return 1;
//
//		else if (num1 <= 0)
//
//			printf("%s", "your base number is not valid please try igain ");
//			
//	
//		else if (num1 > 0 && num2 > 0) {
//
//			for (size_t  i= resultate; i <= num1; i*num1)
//			{
//				printf("%d", i);
//			}
//		}
//
//			
//
//}
//
//void erstatmedpotens( int* num, int*  potens) {
//
//	int temp;
//	temp = *num;
//	*num = *potens;
//	*potens = temp;
//}

int main() {

	//int pot , num, num1, num2;
	//printf("%s", "enter two integer number : \n");
	//scanf_s("%d\n%d", &num1, &num2);

	//printf("resultate is %d :\n", potens(num1, num2));

	//printf(" enter a number : \n");
	//scanf_s("%d", &num);
	//printf(" enter second number : \n");
	//scanf_s("%d", &pot);
	//printf(" %d is :", num);
	//printf(" %d is :", pot);
	// erstatmedpotens(&num ,&pot);
	// printf(" %d change to %d is :\n", num ,pot);

	



	/*float måneder, fridag;
	 float antalFeriedag=0 ;
	 printf("%s" , " Hvor mange hele maaneder har du arbejdet siden sidste 1. september?\n");
	 scanf_s("%f", &måneder);
	 printf("%s", "Hvor mange dages ferie har du afholdt i den periode? \n");
	 scanf_s("%f", &fridag);

	 antalFeriedag = (måneder * 2.08) - (måneder - fridag);
	 float rest = antalFeriedag - ( int) antalFeriedag ;

	 printf("Du kan afholde %d dages ferie nu og har %.2f dage til senere ", antalFeriedag, rest );*/

	 Bloddonor obj1, obj2("Niels Nielsen", 38.5, "AB", true),
		 obj3("Maria Markusen", 20.4, "B", false);

	 obj1.print();
	 obj2.print();
	 obj3.print();

	 Bloddonor obj4("messi", 30.2, "0", true);
	  Bloddonor obj5("ronaldinio", 25.4, "A", false);
	  
	  Bloddonor Register[5] = {obj1,obj2,obj3,obj4,obj5};
	  for (size_t i = 0; i <= 5; i++)
	  {
		  Register[i].print();
	  }

	  for (size_t i = 0; i < 5; i++)
		   {
		   if (Register[i].getBlodtype() == "A")
			   {
			   Register[i].print();
			   }
		  
			   if (Register[i].getRhesustype() == false)
			   {
			   Register[i].print();
			   }
		  
			   if ((Register[i].getBMI() >= 18.5 && Register[i].getBMI() <= 35.0))
			   {
			   Register[i].print();
			   }
		  }


}


