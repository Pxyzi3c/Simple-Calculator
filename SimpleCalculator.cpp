#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{   char again;
    string inval_input = "N/A";
    int choice, num1, num2;
    float ans = 0.00;

    do{
        cout << "\t\t**********************************************\n";
        cout << "\t\t\tMENU DRIVEN - SIMPLE CALCULATOR\n";
        cout << "\t\t**********************************************\n";
        cout << "\t\t1 - ADDITION\n";
        cout << "\t\t2 - SUBTRACTION\n";
        cout << "\t\t3 - MULTIPLICATION\n";
        cout << "\t\t4 - DIVISION\n";
        cout << "\t\t5 - MODULUS\n\n";
        cout << "\t\t ENTER THE NUMBER OF YOUR CHOICE: ";
        cin >> choice;
        cout << "\n\t\t**********************************************\n";

        switch(choice)
        {
            case 1:
                    cout << "\t\tINPUT THE FIRST NUMBER\t\t\t    : ";
                    cin >>num1;
                    cout << "\n\t\tINPUT THE SECOND NUMBER\t\t\t    : ";
                    cin >>num2;
                    cout << "\n\n\t\tYOU SELECT NUMBER 1 ADDITION";
                    ans = num1 + num2;
                    cout << "\n\t\t**********************************************\n";
                    cout << "\n\t\t\t    THE ANSWER IS: ";
                    cout <<fixed<<setprecision(2);
                    cout << ans;
                    break;
            case 2:
                    cout << "\t\tINPUT THE FIRST NUMBER\t\t\t    : ";
                    cin >>num1;
                    cout << "\n\t\tINPUT THE SECOND NUMBER\t\t\t    : ";
                    cin >>num2;
                    cout << "\n\n\t\tYOU SELECT NUMBER 2 SUBTRACTION";
                    ans = num1 - num2;
                    cout << "\n\t\t**********************************************\n";
                    cout << "\n\t\t\t    THE ANSWER IS: ";
                    cout <<fixed<<setprecision(2);
                    cout << ans;
                    break;
            case 3:
                    cout << "\t\tINPUT THE FIRST NUMBER\t\t\t    : ";
                    cin >>num1;
                    cout << "\n\t\tINPUT THE SECOND NUMBER\t\t\t    : ";
                    cin >>num2;
                    cout << "\n\n\t\tYOU SELECT NUMBER 3 MULTIPLICATION";
                    ans = num1 * num2;
                    cout << "\n\t\t**********************************************\n";
                    cout << "\n\t\t\t    THE ANSWER IS: ";
                    cout <<fixed<<setprecision(2);
                    cout << ans;
                    break;
            case 4:
                    cout << "\t\tINPUT THE FIRST NUMBER\t\t\t    : ";
                    cin >>num1;
                    cout << "\n\t\tINPUT THE SECOND NUMBER\t\t\t    : ";
                    cin >>num2;
                    cout << "\n\n\t\tYOU SELECT NUMBER 4 DIVISION";
                    ans = num1 / num2;
                    cout << "\n\t\t**********************************************\n";
                    cout << "\n\t\t\t    THE ANSWER IS: ";
                    cout <<fixed<<setprecision(2);
                    cout << ans;
                    break;
            case 5:
                    cout << "\t\tINPUT THE FIRST NUMBER\t\t\t    : ";
                    cin >>num1;
                    cout << "\n\t\tINPUT THE SECOND NUMBER\t\t\t    : ";
                    cin >>num2;
                    cout << "\n\n\t\tYOU SELECT NUMBER 5 MODULUS";
                    ans = num1 % num2;
                    cout << "\n\t\t**********************************************\n";
                    cout << "\n\t\t\t    THE ANSWER IS: ";
                    cout <<fixed<<setprecision(2);
                    cout << ans;
                    break;
            default:
                    cout << "\n\n\t\t\t\tINVALID INPUT!!\n";
        }
        cout << "\n\n\n\tDO YOU WANT TO TRY AGAIN? Y/N: ";
        cin >> again;
        cout << endl;
    }while(again=='y'||again=='Y');
    cout << "\t\tTHANK YOU FOR USING THIS MENU DRIVEN CALCULATOR";
    return 0;
}
