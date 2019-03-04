#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

//Put Goal Coordinates And Run The Code
double x = 7;
double y = 4;

//Length of links
double l1 = 10;
double l2 = l1;//Links are the same length for maximum workspace

void getInverseKinematics(){
    double a = x;
    double b = y;

    //substitutions to make the calculations less convoluted
    double J = pow(a,2) + pow(b,2) + pow(l1,2) - pow(l2,2);
    double K = a/b;
    double Ksq = K*K;
    double S = (1 + Ksq);
    double Jsq = J*J;
    double bsq = b*b;

    //Quadratic formula
    double alif = (J*K)/(b*S);  // -b part
    double ba = sqrt(((Jsq/bsq) * ( ( Ksq/(S*S) ) - (1/S) )) + (4*l1*l1/S));    // square root part
    //Solving
    double x1 = (alif - ba)*0.5;    //First x solution
    double x2 = (alif + ba)*0.5;    //Second x solution
    double y1 = (-1/(2*b))*(2*a*x1-J);//First y solution
    double y2 = (-1/(2*b))*(2*a*x2-J);//Second y solution
    //Finding the angle and converting it to degrees
    double r2d1 = atan2(y1,x1)*180/3.1415;
    double r2d2 = atan2(y2,x2)*180/3.1415;

    cout << "Theta 1 : " << r2d1 << endl;
    cout << "Theta 2 : " << r2d2 << endl;
}

int main()
{
    getInverseKinematics();
    return 0;
}
