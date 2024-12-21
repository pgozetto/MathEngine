#include "modules/m.hpp"
#include <iostream>
#include <string>

using namespace std;

void ShowOptions();
void DoMath();


const string All[] = { "SUM", "SUBTRACT", "MULTIPLY", "DIVIDE", "MODULE", "POWER", "SQRT", "LOG10", "EXPONENT", "FACTORIAL", "COS", "SIN", "TAN"};



int main() {

        while (true) {
                int UserInput;

                cout << "Welcome to the MathEngine!" << endl;
                cout << "// 1 - See Options\n// 2 - Go to the Calculator\n// 3 - Exit the program\n";
                cout << "// Enter your choice: ";

                cin >> UserInput;


                //! USER INPUT CONDICIONAL STATEMENTS

                if (UserInput == 1) {
                        ShowOptions();
                }
                if (UserInput == 2) {
                        DoMath();
                }
                if (UserInput == 3) {
                        // FINISH
                        cout << "\n// Goodbye!\n" << endl;
                        exit(0);
                        break;
                }
                if (UserInput > 3 || UserInput < 1) {
                        cout << "\n// Invalid option. Please try again.\n" << endl;
                }        
        }
        return 0;
}
void DoMath() {
        M MathEngine; // Math Engine
        int Option;
        cout << "\n/ Enter the Operation you want: \n";
        cin >> Option;

        switch(Option) {
                case 1:
                        cout << "\n/ Enter the two numbers you want to add: \n";
                        int a, b;
                        cin >> a >> b;
                        cout << endl << MathEngine.Sum(a, b) <<endl;
                        break;
                case 2:
                        cout << "\n/ Enter the two numbers you want to subtract: \n";
                        int c, d;
                        cin >> c >> d;
                        cout << endl << MathEngine.Subtract(c, d) << endl;
                        break;
                case 3:
                        cout << "\n/ Enter the two numbers you want to multiply: \n";
                        int e, f;
                        cin >> e >> f;
                        cout << endl << MathEngine.Multiply(e, f) << endl;
                        break;
                case 4:
                        cout << "\n/ Enter the two numbers you want to divide: \n";
                        int g, h;
                        cin >> g >> h;
                        cout << endl << MathEngine.Divide(g, h) << endl;
                        break;
                case 5:
                        cout << "\n/ Enter the two numbers you want to calculate the module: \n";
                        int i, j;
                        cin >> i >> j;
                        cout << endl << MathEngine.Module(i, j) << endl;
                        break;
                case 6:
                        cout << "\n/ Enter the base and exponent you want to calculate the power: \n";
                        float k, l;
                        cin >> k >> l;
                        cout << endl << MathEngine.Power(k, l) << endl;
                        break;
                case 7:
                        cout << "\n/ Enter the number you want to calculate the square root: \n";
                        float m;
                        cin >> m;
                        cout << endl << MathEngine.Sqrt(m) << endl;
                        break;
                case 8:
                        cout << "\n/ Enter the number you want to calculate the base 10 logarithm: \n";
                        float n;
                        cin >> n;
                        cout << endl << MathEngine.Log10(n) << endl;
                        break;
                case 9:
                        cout << "\n Enter the number you want to calculate the exponent: \n";
                        float o;
                        cin >> o;
                        cout << endl << MathEngine.Exp(o) << endl;
                        break;
                case 10:
                        cout << "\n/ Enter the number you want to calculate the factorial: \n";
                        int p;
                        cin >> p;
                        cout << endl << MathEngine.Factorial(p) << endl;
                        break;
                case 11:
                        cout << "\n/ Enter the angle in degrees you want to calculate the cosine: \n";
                        float q;
                        cin >> q;
                        cout << endl << MathEngine.Cos(q) << endl;
                        break;
                case 12:
                        cout << "\n/ Enter the angle in degrees you want to calculate the sine: \n";
                        float r;
                        cin >> r;
                        cout << endl << MathEngine.Sin(r) << endl;
                        break;
                case 13:
                        cout << "\n/ Enter the angle in degrees you want to calculate the tangent: \n";
                        float s;
                        cin >> s;
                        cout << endl << MathEngine.Tan(s) << endl;
                        break;
                default:
                        cout << "\n/ Invalid option. Please try again.\n" << endl;


                


        }
}
void ShowOptions() {
        int Counter = 1;
        cout << "\n/\n/ These are the options you can choose:\n/\n\n";
        for (string i : All) {
                cout << "/ " << i << " - " << Counter << endl;
                Counter++;
        }
        cout << "\n";
}