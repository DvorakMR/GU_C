#include <ansi_c.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int low=-15,high=15;	// Define the two limits
	int low_to_high = abs(low) + abs(high)+1; //find out array length of answer (+1 because 0)
	int j = 0; //extra iterator used in for-loops
	double result[low_to_high];		//init result array with #elem = distance between low and high
	
	printf("x \t f(x)\n");
	for(int x=low;x<=high;x++){
		result[j] = 4*pow(x,3)+3*pow(sin(x),2)-5*x-7; // write to function answer to result array
		printf("%d \t %f\n",x, result[j]);
		j++;
	}
 	
	double low_f = -1; //float low
	double high_f = 1; //float high
	double step = 0.1; // stepsize
	j = 0; // reinit j to 0
	low_to_high = (abs(low_f) + abs(high_f)+1)/step; // new array size depending on stepsize
	
	printf("\n x \t\t f(x)\n");
	for(double x=low_f;x<high_f;x+=step){		//iterate with step instead of integer
		result[j] = 4*pow(x,3)+3*pow(sin(x),2)-5*x-7;
		printf("%.1f \t %f\n",x, result[j]);
		j++;
	}

	system("cmd /C pause");
    return 0;
}