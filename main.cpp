
//This program calculates the monthly sales tax of a retail company
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

//Variables
const double STATE_SALES_TAX = 0.04;
const double COUNTY_SALES_TAX = 0.02;
const double TOTAL_SALES_TAX = 0.06;
const double PRODUCT_SALES = 1.06;
double state_sales_tax_calulated, county_sales_tax_calculated, year, sales_tax = 0,
total_income, total_amount_collected, total_tax, sales = 0, product_sales = 0;
string month;

int main()
{
//get user inputs
cout << "Enter month:   ";
getline(cin, month);

cout << "Enter year:    ";
cin >> year;

if( year <= 0 || cin.fail())
{
    cout << "Please check input and try again";
    exit(0);
}


cout << "Enter total amount collected:  ";
cin >> total_amount_collected;

if(cin.fail())
{
    cout << "Please check input and try again";
    exit(0);
}


// calculate the value of sales
sales = total_amount_collected / PRODUCT_SALES;

//calculate the value of county sales tax
county_sales_tax_calculated = COUNTY_SALES_TAX * sales;

// calculate the value of state sales tax
state_sales_tax_calulated = STATE_SALES_TAX * sales;

// calculate the value of total tax
total_tax = county_sales_tax_calculated + state_sales_tax_calulated;

// calculate total income
total_income = product_sales + sales_tax;

// if user inputs a negative number for total amount

if(total_amount_collected < 0 )
    {
        cout << endl;
        cout << "Total amount collected cannot be negative!\n ";
        exit(0);
    }

system("cls");
cout << endl;
cout << "Month: " << month << " " << year << endl;
cout << "----------------------\n";
cout << setprecision(2)<< fixed << showpoint;
cout << "Total Collected: " << setw(7) << "$" << setw(10) << total_amount_collected << endl;
cout << "Sales:           " << setw(7) << "$" << setw(10) << sales << endl;
cout << "County SalesTax: " << setw(7) << "$" << setw(10) << county_sales_tax_calculated <<  endl;
cout << "State Sales Tax: " << setw(7) << "$" << setw(10) << state_sales_tax_calulated <<  endl;
cout << "Total sales tax: " << setw(7) << "$" << setw(10) << total_tax <<  endl;

return 0;
}
