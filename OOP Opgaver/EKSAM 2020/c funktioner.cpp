//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//
//#define SIZE 60
////#define SIZE1 10
////#define SIZE2 500
////
////
////int setEqual(const int* numberPtr1, int* numberPtr2)
////{
////	if (*numberPtr1 == *numberPtr2)
////		return 1;
////	else
////	{
////		*numberPtr2 = *numberPtr1;
////		return 0;
////	}
////}
//// 
//// 
//
//void lottoraekke(int* arrayPtr)
//{
//	int tal;
//	for (size_t i = 0; i < 7; i++ )
//	{
//		tal = rand() % 36 + 1;
//		if (arrayPtr[tal] != tal)
//		{
//			arrayPtr[tal] = tal;
//			
//		}
//	}
//}
//
//
//int skybrudsMinutter(double data[], int size)
//{
//	int i;
//	int Resultat = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (data[i] > 0.5)
//		{
//			Resultat++;
//		}
//	}
//	return Resultat;
//}
//void findOgErstat(char* tekst) {
//	while (*tekst != '\0')
//	{
//		if (*tekst == 'h' || *tekst == 'H')
//			*tekst = '#';
//		if (*tekst == 'a' || *tekst == 'A')
//			*tekst = '@';
//		++tekst;
//	}
//
//
//}
// void printmultiplicationtable(int number)
//
//{
//	int i;
//	if (1 <= number && number <= 10)
//	{
//		printf("her er %d-tabellen:\n", number);
//		for (i = 1; i <= 10; ++i)
//		{
//			printf("%4d", i * number);
//		}
//		printf("\n\n");
//	}
//	else
//		printf("tallet %d er ugyldigt\n\n", number);
//	}
//
//
// int checkLicensePlate(char licensePlate[])
// {
//	 int i;
//	 if (strlen(licensePlate) != 7)
//		 return 0;
//	 for (i = 0; i < 2; i++)
//	 {
//		 if (licensePlate[i] < 'A' || 'Z' < licensePlate[i])
//			 return 0;
//	 }
//	 for (i = 2; i < 7; i++)
//	 {
//		 if (licensePlate[i] < '0' || '9' < licensePlate[i])
//			 return 0;
//	 }
//	 return 1;
// }
//
// int roulette(int playerNumber) {
//
//	 srand(time(0));
//
//	 int rouletteNumber = rand() %37;
//
//	 if (playerNumber == rouletteNumber)
//	 
//		 return 1;
//
//	 else
//
//		 return 0;
//	 
//
// }
//
////
////int sorterArray() {
////
////	
////
////	int temp , a[SIZE2];
////
////	for (size_t i = 0; i < 5 - 1; i++)
////	{
////		printf("Enter 5 numbers : ", i + 1);
////		scanf_s("%d", &a[i]);
////	}
////	for (size_t i = 0; i < 5; i++)
////	{
////		for (size_t j = 0; j < 5; j++)
////		{
////			if (a[j] > a[j + 1])
////
////			{
////				temp = a[i];
////				a[j] = a[j + 1];
////				a[j + 1] = temp;
////			}
////
////	}
////		for (int var : a)
////			printf("%d ", a);
////
////	}
////
////
////
////
//////	
////
////
////
////
////	int main()
////	{
////
////		int a[5] = { 1,6,4,9,3 };
////
////		printf("%d ", a[5].sorterArray());
////
////
////	}
////struct Person
////{
////	const char* navn_;
////	int alder_;
////};
//
//
///*#define SIZE 5*/  // mulighed for ekstra plads fx 50 
//
//int main() {
//
//	//double inputArray[SIZE];
//	//double sum=0;
//	//int counter ;
//
//	//printf("indtast %d . tal: \n\n", SIZE);
//
//	//for ( int counter = 0; counter < SIZE; counter++)
//	//{
//	//	printf("Indtast det %d. tal: ", counter + 1  );
//	//	scanf_s("%lf", &inputArray[counter]);
//	//	sum += inputArray[counter];
//	//}
//	//printf("sum det %f \n\n tal: ", sum);
//	///// new opgaver
//	//for (size_t i = 5; i <= 50; i += 5)
//	//{
//	//	printf("%4d", i);
//	//}
//	// new opgave
//	/*int num;
//	do
//	{
//
//		printf("\nIndtast et helt tal > 1 : ");
//		scanf_s("%d", &num);
//
//		if (num < 2)
//			printf("\nDu skal indtaste et tal > 1\n");
//
//
//	} while (num <2);
//
//	if (num % 2 == 0)
//		printf("\nTallet %d er et lige tal\n\n", num);
//	else
//		printf("\nTallet  er et ulige tal\n\n");*/
//
//	// new opgave
//
//
//	
//
//	//int num1 = 7;
//
//	//printmultiplicationtable(num1);
//	
//	
//
//
//
//	//struct Person p1 = { NULL, 0 }, p2 = { "Kurt", 37 };
//	//
//
//
//
//	//char navn[20];
//	//int alder;
//	////printf("Indtast fornavn og alder for en person.\nFornavn: ");
//	////scanf("%s", navn); // scanf( "%s", p1.navn );
//	////printf("Alder: ");
//	//printf("Indtast fornavn og alder for en person.\nFornavn: ");
//	//scanf("%s", p1.navn_);
//	//printf("Alder: ");
//	//scanf("%d", &p1.alder_);
//
//
//	//strcpy(p1.navn_ , navn);
//	//p1.alder_ = alder;
//
//
//	//new opgaver nummerplade
//
//	/*
//	
//	
//	
//	
//	checkLicensePlate("AY80502");*/
//	/*char tast;
//
//	do
//	{
//		printf("%s", "indtast a stor bogstave : ");
//
//		scanf_s("&c", &tast);
//
//		
//
//	} while (tast < 'a' || 'z' < tast);*/
//
//	//new opgave
//	for (int i = 37; i < 122; i++)
//		printf("%d\n", i);
//
//
//	//new opgave 
//
//	
//	//	int svar;
//	//	for ( int i = 0; i < 10; ++i)
//	//	{
//	//		svar = roulette(13);
//	//		if (svar == 1)
//	//			printf("Tillykke du har vundet 10.000 kr \n\n");
//	//		else
//	//			printf("Beklager, du har tabt - igen\n\n");
//	//	}
//	//	
//
//	//	// new opfave 
//
//	//
//	//		char tekstArray[] = "Huska altida ata holdeh hovedetH h\x9Bjt";
//	//		char tekstArray1[] = { "healhlo" };
//	//		printf("%s\n", tekstArray);
//	//		findOgErstat(tekstArray);
//	//		printf("%s\n", tekstArray);
//	//		findOgErstat(tekstArray1);
//	//		printf("%s\n", tekstArray1);
//
//	//		//new opgave
//
//	//		int antal = 0;
//	//		int sum = 0;
//	//		int tal;
//	//		printf("Indtast en raekke tal >= 0.\n");
//	//		printf("Afslut med et negativt tal.\n");
//	//		do
//	//		{
//	//			printf("Indtast det %d. tal: ", antal + 1);
//	//			scanf_s("%d", &tal);
//	//			if (tal >= 0)
//	//			{
//	//				sum += tal;
//	//				antal++;
//	//			}
//	//		} while (tal >= 0);
//	//		printf("Summen af de %d tal er %d\n", antal, sum);
//
//	//// new program 
//	//		double dividend, divisor;
//	//		printf("Indtast 1. tal (dividenden): ");
//	//		scanf_s("%lf", &dividend);
//	//		printf("Indtast 2. tal (divisoren): ");
//	//		scanf_s("%lf", &divisor);
//	//		if (divisor != 0.0)
//	//		{
//	//			printf("%f divideret med %f er %f\n", dividend, divisor, dividend / divisor);
//	//		}
//	//		else
//	//		{
//	//			printf("Fejl: der kan ikke divideres med 0!\n");
//	//		}
//
//	//		//new program 
//
//	//		// Et eksempel er nok, her er nogle fyldige test eksempler
//	//		double regn[SIZE] = { 1.0, 2.3, 0.5, 0, 0, 0, 5, 0 }; // Rest bliver 0.0, der er
//	//		// 3 > 0.5
//	//			printf("Test af skybrudsminutter (forventet resultat 3): %d\n", skybrudsMinutter(regn,SIZE));
//	//		double regn2[5] = { 0 }; // Alle er 0, der er 0 skydbrudsminutter
//	//		printf("Test af skybrudsminutter (forventet resultat 0): %d\n", skybrudsMinutter
//	//		(regn2, 5));
//	//		double regn3[5] = { 1,1,1,1,1 }; // Alle er 1, der er 5 skydbrudsminutter
//	//		printf("Test af skybrudsminutter (forventet resultat 5): %d\n", skybrudsMinutter
//	//		(regn3, 5));
//
//
//	//		//new opgave
//
//	//		
//	//			int lottoArray[37] = { 0 };
//	//			srand(time(0));
//	//			lottoraekke(lottoArray);
//	//			for (size_t i = 0; i < 37; i++)
//	//				if (lottoArray[i] != 0)
//	//					printf("%d ", lottoArray[i]);
//	//		
//
//}