#include <iostream>
#include<conio.h>

void main() {
    int units;
    float cost, surcharge = 0, total;
    clrscr();

    cout << "Enter total electricity units consumed: ";
    cin >> units;

    if (units < 500)
        cost = units * 1.0;
    else
        cost = units * 1.5;

    if (cost > 600)
        surcharge = cost * 0.15;

    total = cost + surcharge;

    cout << "Electricity Bill = ₹" << total << endl;
    if (surcharge > 0)
        cout << "Note: 15% surcharge applied as bill exceeded ₹600." << endl;
    
    getch();
}
