#include <iostream>
#include <vector>

void diffCalca()
{
    std::vector<int> y(11);
    y[1] = 2;
    y[2] = 4;

    for (int i = 3; i < y.size(); i++)
    {
        y[i] = 2 * y[i - 1];

        std::cout << "y_" << i << ": " << y[i] << " \n";
    }
}

void diffCalcb()
{
    std::vector<int> y(11);
    y[1] = 0;
    y[2] = (-1);

    for (int i = 3; i < y.size(); i++)
    {
        y[i] = pow(y[i - 1], 2) - 1;

        std::cout << "y_" << i << ": " << y[i] << " \n";
    }
}


int main()
{
    std::cout << "Oppg.8.2.14a) \n";
    diffCalca();
    std::cout << std::endl;
    std::cout << "Oppg.8.2.14b) \n";
    diffCalcb();
}

