/*
Where: • v is the muzzle velocity, given in feet per second. • θ is the angle of elevation of the barrel,
given in degrees. An angle of zero degrees is horizontal. An angle of ninety degrees is straight up. 
• g is the acceleration of gravity, which is approximately 32.2 ft/sec2. • distance is the distance that
the cannonball travels in the air, given in feet.

Also, a powder charge of two pounds of gunpowder gives a muzzle velocity of 800 ft/sec. 
The muzzle velocity varies directly with the amount of powder. For example, a 30% increase in powder gives a 30% increase in velocity.

*/

//---------------------------------------------------------
// File--------Cannon practice.cpp
// Programmer--Sabera Daqiq
// Course------CSC115
// Project-----Project #5
// Due---------oct 28, 2013
//
// This program enable us to practice cannon in complete safety.  
//---------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;


double distance(double powder, double angle);

int main ()
{
	double powder;
	double angle; 
	double difference;
	double target;

	cout<<"Target distance (feet) ------- ";
	cin>>target;
	cout<<endl<<endl;
	do 
	{
		cout<<"Powder charge (pounds) ------- ";
		cin>>powder;
		cout<<"Barrel elevation (degrees) --- ";
		cin>>angle;
		cout<<endl;
		difference = (distance(powder, angle))-target; 
	if (difference>=-20 && difference<=20)
		cout<<"result of shot --------------- HIT!!"<<endl<<endl;
	else if (difference>20)
			cout<<"result of shot --------------- "<<floor(difference+0.5)<<" Feet too long"<<endl<<endl;
		else 
			cout<<"result of shot --------------- "<<floor(difference+0.5)*-1<<" Feet too short"<<endl<<endl;

	}while (!(difference>=-20 && difference<=20));

return 0;
}

//This function computes the distance the cannon ball travels.  

double distance(double powder, double angle)
{
	double muzzleVelocity;
	double difference;
	const double accelerationGravity = 32.2;
	const double PI = 3.14159265359;

	angle = (angle / 360) * (2.0 * PI);
	muzzleVelocity = powder*400;

	difference=(pow(muzzleVelocity, 2)*sin(2*angle))/accelerationGravity;

return difference;
}
