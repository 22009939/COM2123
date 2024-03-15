#include <iostream>
#include <cmath>

using namespace std;

double calculateTreeHeight(double h, double d, double angle) {
    double radians = angle * M_PI / 180.0;
    return (h + (d + (d / 12.0)) * tan(radians)) / 12.0;
}

int main() {
    double h, d_feet, d_inches, angle;
    cout << "Enter the height of your eye in inches: ";
    cin >> h;
    cout << "Enter the distance to the tree in feet and inches (feet inches): ";
    cin >> d_feet >> d_inches;
    double d = d_feet * 12.0 + d_inches;

    cout << "Enter the angle in degrees: ";
    cin >> angle;

    double treeHeight = calculateTreeHeight(h, d, angle);

    cout << "The height of the tree is: " << treeHeight << " feet" << endl;

    return 0;
}