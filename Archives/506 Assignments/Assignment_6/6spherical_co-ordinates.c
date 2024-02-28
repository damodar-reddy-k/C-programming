/*Tihs program prints the spherical co-ordinates given  a 3 dimensional co-ordinate */
#include<stdio.h>
#include<math.h>
int main()
{	double r, theta,fi,x,y,z;
	double rad_di(double x, double y, double z)
		{float r;
		r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		return r;}
	double thet_angl(double x, double y, double z)
		{float r;
		r=atan((sqrt(pow(x,2)+pow(y,2)))/z);
		return r;}
	double aangl(double x, double y)
		{float r;
		r=atan(y/x);
		return r;}
	printf("\n Enter the cartesian copordinates to transform them to spherical co-ordinates:");
	scanf("%lf,%lf,%lf",&x,&y,&z);
	r=rad_di(x,y,z);
	theta=thet_angl(x,y,z);
	fi=aangl(x,y);
	printf("\n The spherical co-ordinates are (%lf,%lf,%lf)\n\n",r,theta,fi);
	return 0;
}
