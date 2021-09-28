#include <iostream>

/* Ball dropped off tower of x height.
 * Normal gravity of 9.8 m/s^2
 * Ball not moving to start
 * Output the height of the ball after 0,1,2,3,4, and 5 seconds
 *  Ball should not go under the ground
 *
 * Function to calc the height of the ball after x seconds
 *  Calc how far theball has fallen using
 *      fallen = gravity_contstant * x_seconds^2 /2
 */

double get_height()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;

    return height;
}

double ball_displacement(double tower_height, int seconds)
{
    constexpr double gravity_constant { 9.8 };
    int time_squared { seconds * seconds }; //Squaring time, as per the formula
    double distance_fallen = time_squared * gravity_constant / 2; //Divide by two, as per the formual
    double ball_height { tower_height - distance_fallen };

    return ball_height;
}

void print_height(double current_height, int current_second)
{
    if (current_height > 0)
        std::cout << "At " << current_second << " seconds, the ball is at  height: " << current_height << " meters\n";
    else
        std::cout << "At " << current_second << " seconds, the ball is on the ground.\n";
}

int main()
{
    double tower_height { get_height() };
    for (int current_second = 0; current_second <= 5; ++current_second)
    {
        double distance_fallen {ball_displacement(tower_height, current_second) };
        print_height(distance_fallen, current_second);
    }
    return 0;
}
