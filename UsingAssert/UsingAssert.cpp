#include <iostream>
#include <cassert>

float travelTime(float, float);

int main()
{
    float distance, float speed;
    std::cout << "Enter distance of your Jorney:\n";
    std::cin >> distance;
    std::cout << "Enter your speed:\n";
    std::cin >> speed;

    std::cout << "Time of your Travel: " << travelTime(distance, speed);
}


float travelTime(float distance, float speed)
{
    assert(distance >= 0 && speed >= 0);
    float time = distance / speed;
    return time;
}
