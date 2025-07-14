#include <iostream>
#include<conio.h>

void main() {
    float totalAmount, discount = 0, netAmount;

    cout << "Enter total purchase amount: ₹";
    cin >> totalAmount;

    if (totalAmount > 1000)
        discount = totalAmount * 0.10;

    netAmount = totalAmount - discount;

    cout << "Discount: ₹" << discount << endl;
    cout << "Net amount to be paid: ₹" << netAmount << endl;

    getch();
}
