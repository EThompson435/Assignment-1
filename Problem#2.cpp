#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to calculate total price including sales tax
double calculateTotalWithTax(double subtotal, double taxRate) {
    return subtotal * (1 + taxRate);
}

int main() {
    // Prices for meals and desserts
    double discoveryBayBurgerPrice = 15.00;
    double gardenSaladPrice = 12.50;
    double grilledChickenPrice = 17.75;
    double fishAndChipsPrice = 16.00;

    double piePrice = 5.00;
    double iceCreamPrice = 4.50;
    double cheesecakePrice = 6.00;
    double fruitSaladPrice = 4.25;

    // Display menu
    cout << "*********Welcome to Discovery Bay Golf and Country Club Restaurant********" << endl;
    cout << "| Meal | Price |" << endl;
    cout << "*******************************************************************" << endl;
    cout << "Discovery Bay Burger (B) $15.00" << endl;
    cout << "Garden Salad (G) $12.50" << endl;
    cout << "Grilled Chicken (C) $17.75" << endl;
    cout << "Fish and Chips (F) $16.00" << endl;
    cout << "| Dessert | Price |" << endl;
    cout << "*******************************************************************" << endl;
    cout << "Pie (P) $5.00" << endl;
    cout << "Ice Cream (I) $4.50" << endl;
    cout << "Cheesecake (C) $6.00" << endl;
    cout << "Fruit Salad (F) $4.25" << endl;

    // User input
    char mealChoice, dessertChoice;
    cout << "Enter a Meal that you would like to order: ";
    cin >> mealChoice;
    cout << "Enter a Dessert that you would like to order: ";
    cin >> dessertChoice;

    // Determine meal price
    double mealPrice = 0.0;
    switch (mealChoice) {
    case 'B': mealPrice = discoveryBayBurgerPrice; break;
    case 'G': mealPrice = gardenSaladPrice; break;
    case 'C': mealPrice = grilledChickenPrice; break;
    case 'F': mealPrice = fishAndChipsPrice; break;
    default: cout << "Invalid meal choice!" << endl; return 1;
    }

    // Determine dessert price
    double dessertPrice = 0.0;
    switch (dessertChoice) {
    case 'P': dessertPrice = piePrice; break;
    case 'I': dessertPrice = iceCreamPrice; break;
    case 'C': dessertPrice = cheesecakePrice; break;
    case 'F': dessertPrice = fruitSaladPrice; break;
    default: cout << "Invalid dessert choice!" << endl; return 1;
    }

    // Calculate subtotal
    double subtotal = mealPrice + dessertPrice;

    // Sales tax calculation (assuming 8% sales tax)
    double salesTaxRate = 0.08;
    double salesTax = subtotal * salesTaxRate;
    double totalWithTax = calculateTotalWithTax(subtotal, salesTaxRate);

    // Output total price with sales tax
    cout << fixed << setprecision(2);
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Your total is $" << totalWithTax << " and this will go to member charge!" << endl;
    cout << "Thank you for dining with us at Discovery Bay Golf and Country Club! You made Matt Padilla happy" << endl;

    return 0;
}