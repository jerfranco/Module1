#include <iostream>
#include <string>
#include <algorithm>
// cmath allows math functions
#include <cmath>
class Scientific
{
    public:
        void Exp(float one, float two)
        {
            std::cout << "The answer is: " << pow(one, two) << std::endl;
        }
        void Add(float one, float two)
        {
            std::cout << "The answer is: " << one + two << std::endl;
        }
        void Sub(float one, float two)
        {
            std::cout << "The answer is: " << one - two << std::endl;
        }
        void Mul(float one, float two)
        {
            std::cout << "The answer is: " << one * two << std::endl;
        }
        void Div(float one, float two)
        {
            std::cout << "The answer is: " << one / two << std::endl;
        }
        void Fact(float one)
        {
            int answer = 1;
            for (float i = 1; i <= one; ++i)
            {
                answer *= i;
            }
            std::cout << "The answer is: " << answer << std::endl;
        }
};

int main()
{
    //Calling the class
    Scientific scientific;
    float int1;
    float int2;
    std::string response = "";
    std::string options[] = {"1","2","3","4","5","6","7"};
    while(response != "7")
    {
        //while response == false
        while(std::find(std::begin(options), std::end(options), response) == std::end(options))
        {
            //Welcome screen
            std::cout << "=================================";
            std::cout << "\nWelcome to the Calculator Program!" << std::endl;
            std::cout << "=================================";
            std::cout << "\n\nPlease select an option!" << std::endl;
            //Given Options
            std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponent\n6. Factorial\n7. Exit" << std::endl;
            std::cout << "Option: ";
            std::cin >> response;
        }
        switch (response[0])
        {
        case '1':
            // Addition
            std::cout << "What is the first value? ";
            std::cin >> int1;
            std::cout << "What is the second value? ";
            std::cin >> int2;
            scientific.Add(int1, int2);
            break;
        case '2':
            // Subtraction
            std::cout << "What is the first value? ";
            std::cin >> int1;
            std::cout << "What is the second value? ";
            std::cin >> int2;
            scientific.Sub(int1, int2);
            break;
        case '3':
            //Multiplication
            std::cout << "What is the first value? ";
            std::cin >> int1;
            std::cout << "What is the second value? ";
            std::cin >> int2;
            scientific.Mul(int1, int2);
            break;
        case '4':
            // Division
            std::cout << "What is the first value? ";
            std::cin >> int1;
            std::cout << "What is the second value? ";
            std::cin >> int2;
            scientific.Div(int1, int2);
            break;
        case '5':
            //Exponent
            std::cout << "What is the first value? ";
            std::cin >> int1;
            std::cout << "What is the second value? ";
            std::cin >> int2;
            scientific.Exp(int1, int2);
            break;
        case '6':
            // Factorial
            std::cout << "What is the value you want to calculate the factorial? ";
            std::cin >> int1;
            scientific.Fact(int1);
            break;
        case '7':
            // End program
            std::cout << "Goodbye";
            std::exit(0);
        default:
            std::cout << "Invalid option";
        }
        response = "";
    }
    return 0;
    
}