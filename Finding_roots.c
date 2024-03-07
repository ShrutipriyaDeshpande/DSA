#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("Enter the values of a,b and c:\n");
	scanf("%d%d%d",&a,&b,&c);
	findRoots(a, b, c);
	return 0;
}

void findRoots(int a, int b, int c)
{

	int discriminant;
	discriminant = b * b - 4 * a * c;
	double sqrt_val = sqrt(discriminant);

	if (a == 0)
    {
		printf("Invalid");
		return;
	}
	if (discriminant > 0)
    {
		printf("Roots are real and different\n");
		printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),
			(double)(-b - sqrt_val) / (2 * a));
	}
	else if (discriminant == 0)
    {
		printf("Roots are real and same\n");
		printf("%f", -(double)b / (2 * a));
	}
	else
	{
		printf("Roots are complex\n");
		printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),
			sqrt_val / (2 * a), -(double)b / (2 * a),
			sqrt_val / (2 * a));
	}


}

