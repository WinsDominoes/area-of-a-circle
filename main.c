#include <stdio.h>
#include <math.h>

// M_PI value of pi

struct Circle {
	double radius;
	double diameter;
	double area; 
};

void _change_value(struct Circle *p, int choice, double r, double d) {
	double area; 

	if(choice == 0) {
		area = (M_PI/4)*(d*d);

		p->diameter = d;
		p->area = area;
		
	} else if (choice == 1) {
		area = M_PI*(r*r);

		p->radius = r;
		p->area = area;
	}
}

int main() {
	char choice;
	double d, r;
	
	printf("Diameter or Radius? [d/r]: ");
	scanf("%s", &choice);

	struct Circle Circle1;

	if(choice == 'd') {
		printf("Enter Diameter: ");
		scanf("%lf", &d);
		
		_change_value(&Circle1, 0, 0, d);

		printf("Diameter: %lf\n", Circle1.diameter);
		printf("Area: %lf\n", Circle1.area);
	} else if (choice == 'r') {
		printf("Enter Radius: ");
		scanf("%lf", &r);
		
		_change_value(&Circle1, 1, r, 0);
		
		printf("Radius: %lf\n", Circle1.radius);
		printf("Area: %lf\n", Circle1.area);
	} else {
		printf("Incorrect Option");
	}
}