#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string ch, gt;
    char op;
    while (true)
    {
        
        cout << "*** WELCOME! ***\n";
        cout << "*** CALCULATOR ***\n";
        cout << "BY - M F SHAFEE\n";
        cout << "[Type 'start' to start, 'exit' to exit.]\n";
        cin >> ch;
        if (ch == "start")
        {
            start:
            cout << "Type in an operator : ";
            cin >> op;
            switch (op)
            {
            case '+':
                float a, b;
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << a <<  op  <<  b << " = " << a + b << endl;
                goto label;
                
                case '-':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << a <<  op  << b << " = " << a - b << endl;
                goto label;
                
                case '*':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << a <<  op  << b << " = " << a * b << endl;
                goto label;

                case '/':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << a <<  op  << b << " = " << a / b << endl;
                goto label;

                case '>':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << max(a, b)<< " > " << min(a,b) << endl; 
                goto label;

                case '<':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << min(a, b)<< " < " << max(a,b) << endl; 
                goto label;

                case 'p':
                cout << "Enter base number: ";
                cin >> a;
                cout << "Enter power: ";
                cin >> b;
                cout << a << " ^ " << b << " = " << pow(a, b) << endl; 
                goto label;

                case 's':
                cout << "Enter any number: ";
                cin >> a;
                cout << a << " ^ " << "0.5" << " = " << sqrt(a) << endl; 
                goto label;

                case '%':
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << (a/b) * 100 << "%" << endl; 
                goto label;


               


            default:
            cout << "!!! [Invalid operator.] !!!\n";
            label:
            cout << "Do you want to continue?\n";
            cout << "[Type 'yes' to continue and 'no' to exit.]\n";
            cin >> gt;
            if (gt == "yes")
            {
                goto start;
            }
            else if (gt == "no"){
                goto end;   
            }    
            }
        }
        else if (ch == "exit")
        {
            end:
            break;
        }
    }
    return 0;
}