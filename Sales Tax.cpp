// Sales Tax.cpp
// Ritesh Patel
// tax calc program - program that will calculate and display taxes and totals for purchased items.

#include <iostream> //including a library
#include <string>
#include <iomanip>
#include <numeric>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{//Begin Main Function

//To repeat or not to repeat
bool repeat = true;
while (repeat)
{

    int item_qty; //define variables
    float sales_tax_percent, sub_total=0, taxes; //define more variables

    cout <<"How many sales items do you have? : ";
    cin >> item_qty;

    float item_value[item_qty];

    for (int i = 1; i <= item_qty; i++) //input how many items or loops to create
        {
            cout <<"Enter in the value of sales item "<< i <<": $";
            cin >> item_value[i];
            sub_total = item_value[i] + sub_total;
        }



    cout <<"\n \n";
    cout <<"Enter in the sales tax percentage" << endl <<"(Enter 10 for 10%): "; //input sales tax
    cin >> sales_tax_percent;
    cout <<"\n \n";
    taxes = (sales_tax_percent/100)*sub_total;


    //Building the output of sales receipt
    cout <<"****************************************** \n";
    cout <<"******** S A L E S  R E C E I P T ******** \n";
    cout <<"****************************************** \n";
    cout <<"**" << setw(42) <<"** \n";
    cout <<"**" << setw(42) <<"** \n";
    cout <<"**" << setw(42) <<"** \n";
    cout <<"**" << setw(42) <<"** \n";
    std::cout <<"**" << setw(13) <<"Total Sales" << setw(8) << "$ " << setw(9) << std::fixed << std::setprecision(2) << sub_total << setw(12) << " ** \n";
    cout <<"**" << setw(11) <<"Sales Tax" << setw (10) << "$ " << setw(9) << taxes << setw(12) << "** \n";
    cout <<"**" << setw(30) <<"----------" << setw (12) << "** \n";
    cout <<"**" << setw(13) <<"Grand Total" << setw (8) << "$ " << setw(9) << taxes + sub_total << setw(12) << "** \n";
    cout <<"**" << setw(42) <<"** \n";
    cout <<"**" << setw(42) <<"** \n";
    cout <<"****************************************** \n";
    cout <<"\n";
    cout <<"\n";


    cout <<"Do you want to run this program again? (Y/N): ";
    char answer; //define variable for user answer
    cin >> answer;
    if (answer == 'N')
    {
        return 0;
    }
    if (answer == 'n')
    {
        return 0;
    }
}
}


