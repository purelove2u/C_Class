#include <stdio.h>
void main()
{
	float circum, area;
	const float PI = 3.141592;
	float radius = 25;
	area = PI*radius*radius;
	circum = 2 * PI*radius;
	printf("Area of circle is %f\n", area);
	printf("Circum of circle is %f\n", circum);
}