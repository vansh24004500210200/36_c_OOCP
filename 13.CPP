#include<iostream>
#include<conio.h>

void main() {
    int calls;
    float bill = 200;
    clrscr();

    cout << "Enter number of calls made: ";
    cin >> calls;

    if (calls <= 100) {
        bill = 200;
    } else if (calls <= 150) {
        bill += (calls - 100) * 0.60;
    } else if (calls <= 200) {
        bill += (50 * 0.60) + (calls - 150) * 0.50;
    } else {
        bill += (50 * 0.60) + (50 * 0.50) + (calls - 200) * 0.40;
    }

    cout << "Telephone Bill = ₹" << bill << endl;
    getch();
}
