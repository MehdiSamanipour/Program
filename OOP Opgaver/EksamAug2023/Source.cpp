#include <stdio.h>
#include "minmidlmax.h"
#include <iostream>
#include "MineralSample.h"
#include "Samples.h"



int main() {

    //opgave 1
    double firstNum, secondNum, middle, minValue, maxValue;

    // Prompt the user to enter two decimal numbers
    printf("Enter the first decimal number: ");
    scanf_s("%lf", &firstNum);

    printf("Enter the second decimal number: ");
    scanf_s("%lf", &secondNum);

    // Calculate the middle value
    mid_value(&firstNum, &secondNum, &middle);

    // Calculate the minimum and maximum values
    min_max_value(firstNum, secondNum, &minValue, &maxValue);

    // Display the results
    printf("\nMiddle value: %.2lf\n", middle);
    printf("Minimum value: %.2lf\n", minValue);
    printf("Maximum value: %.2lf\n", maxValue);

    //opgave 2
    char gender;
    double weight, height, age, bmr;

    // Prompt user to enter gender (m/f)
    printf("Enter gender (m/f): ");
    scanf_s(" %c", &gender);

    // Check if the entered gender is valid
    if (gender != 'm' && gender != 'f') {
        printf("Invalid gender entered. Defaulting to female.\n");
        gender = 'f';
    }

    // Prompt user to enter weight, height, and age
    printf("Enter weight in kilograms: ");
    scanf_s("%lf", &weight);

    printf("Enter height in meters: ");
    scanf_s("%lf", &height);

    printf("Enter age in years: ");
    scanf_s("%lf", &age);

    // Calculate BMR based on gender
    if (gender == 'm') {
        bmr = 88.362 + 13.397 * weight + 4.799 * height - 5.677 * age;
    } else {
        bmr = 447.593 + 9.247 * weight + 3.098 * height - 4.330 * age;
    }

    // Display the calculated BMR
    printf("\nBasal Metabolic Rate (BMR): %.2lf kcal per day\n", bmr);

    //opgave 3
    MineralSample m1(-1, 8);
    MineralSample m2(23, -10);
    MineralSample m3(10, 0);
    MineralSample gold(19.3, 1);
    MineralSample silver(10.5, 1);
    MineralSample water(1, 1);
    MineralSample almostGold(19.25, 1);
    MineralSample almostSilver(10.55, 1);

    std::cout << "Gold is_gold and is_silver returns: " << gold.is_gold() << " and " << gold.is_silver() << std::endl;
    std::cout << "Silver is_gold and is_silver returns: " << silver.is_gold() << " and " << silver.is_silver() << std::endl;
    std::cout << "Water is_gold and is_silver returns: " << water.is_gold() << " and " << water.is_silver() << std::endl;
    std::cout << "almostGold is_gold and is_silver returns: " << almostGold.is_gold() << " and " << almostGold.is_silver() << std::endl;
    std::cout << "almostSilver is_gold and is_silver returns: " << almostSilver.is_gold() << " and " << almostSilver.is_silver() << std::endl;

    // Additional Tests for Samples class
    Samples s;
    std::cout << "Empty samples returns " << s.relative_number_of_gold_samples() << " relative gold samples" << std::endl;
    s.add_sample(19.3, 1);
    s.add_sample(1, 1);
    std::cout << "Samples with 1 gold and 1 other returns " << s.relative_number_of_gold_samples() << " relative gold samples" << std::endl;
    return 0;
}
