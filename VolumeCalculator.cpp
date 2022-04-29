/*
Volume Calculator
Pawelski
4/29/2022
Please follow the instructions on the activity guide.
*/

#include <iostream>
#include <cmath>
#include <string>

/// <summary>
/// Calculates the volume of a cylinder.
/// </summary>
/// <param name="height">Height of the cylinder.</param>
/// <param name="radius">Radius of the cylinder.</param>
/// <returns></returns>
double CylinderVolume(double height, double radius)
{
    return 3.14 * std::pow(radius, 2) * height;
}

// Add the code for the function RectangularPrismVolume() here!

int main()
{
    std::string repeat;
    do
    {
        std::string prism;
        std::cout << "What prism do you need to calculate the volume for? (cylinder, cone, rectangular, cube) >> ";
        std::cin >> prism;
        while (!(prism == "cylinder" || prism == "cone" || prism == "rectangular" || prism == "cube"))
        {
            std::cout << "Invalid input. Please enter either cylinder, cone, rectangular, or cube.\n";
            std::cout << "What prism do you need to calculate the volume for? (cylinder, cone, rectangular, cube) >> ";
            std::cin >> prism;
        }

        if (prism == "cylinder")
        {
            double height, radius;
            std::cout << "Enter the radius >> ";
            std::cin >> radius;
            std::cout << "Enter the height >> ";
            std::cin >> height;
            std::cout << "The cylinder's volume is: " << CylinderVolume(radius, height) << std::endl;
        }
        else if (prism == "cone")
        {
            // Add the code here to calculate the volume of a cone! Hint: it is (3.14 * r^2 * h) / 3
        }
        else if (prism == "rectangular")
        {
            int length, width, height;
            std::cout << "Enter the length >> ";
            std::cin >> length;
            std::cout << "Enter the width >> ";
            std::cin >> width;
            std::cout << "Enter the height >> ";
            std::cin >> height;
            std::cout << "The rectangular prism's volume is: " << RectangularPrismVolume(length, width, height) << std::endl;
        }
        else if (prism == "cube")
        {
            int side;
            std::cout << "Enter the length of one side >> ";
            std::cin >> side;
            std::cout << "The cube's volume is: " << RectangularPrismVolume(side, side, side) << std::endl;
        }

        std::cout << "Would you like to calculate the volume of another prism? (y/n) >> ";
        std::cin >> repeat;
        while (!(repeat == "y" || repeat == "n"))
        {
            std::cout << "Invalid input. Please enter either y or n.\n";
            std::cout << "Would you like to calculate the volume of another prism? (y/n) >> ";
            std::cin >> repeat;
        }
        std::cout << std::endl;
    } while (repeat == "y");
}
