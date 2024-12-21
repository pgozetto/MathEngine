#ifndef M_DEFAULT
#define M_DEFAULT

#include <stdexcept>
#include <math.h>

class M {
 public:

        M() {
                static const double PI = 3.141592653589793;
                static const double E = 2.718281828459045;
                static const double G = 6.67430e-11;
                static const double ASTRONOMICAL_UNIT_OF_DISTANCE = 1.496e11;
        }


        static float Sum(float a, float b) {
                return a + b;
        }


        static float Subtract(float a, float b) {
                return a - b;
        }


        static float Multiply(float a, float b) {
                return a * b;
        }


        static float Divide(float a, float b) {
                if (b == 0) {
                        throw std::runtime_error("Division by zero is not allowed.");
                }
                return a / b;
        }

        static int Module(int a, int b) {
                return a % b;
        }

        static float Power(float base, int exponent) {
                return pow(base, exponent);
        }

        static float Sqrt(float a) {
                return sqrt(a);
        }

        static float Log10(float a) {
                return log10(a);
        }

        static float Exp(float a) {
                return exp(a);
        }

        static float Factorial(int n) {
                if (n < 0) {
                        throw std::runtime_error("Factorial is not defined for negative numbers.");
                }
                if (n == 0 || n == 1) {
                                return 1;
                }
                return n * Factorial(n - 1);
        }

        static float Cos(float a) {
                return cos(a);
        }

        static float Sin(float a) {
                return sin(a);
        }

        static float Tan(float a) {
                return tan(a);
        }


        
};



#endif // !M_DEFAULT