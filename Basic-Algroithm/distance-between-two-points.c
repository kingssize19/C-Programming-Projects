#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	double x1, y1, x2, y2, d;
	
	printf("Please enter the x1 : ");	scanf("%lf",&x1);
	printf("Please enter the y1 : ");	scanf("%lf",&y1);
	printf("Please enter the x2 : ");	scanf("%lf",&x2);
	printf("Please enter the y2 : ");	scanf("%lf",&y2);
	
	d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	
	printf("Distance between two points : %.2lf\n",d);
	
	
	
	
	
	return 0;
}
