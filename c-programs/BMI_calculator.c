#include <stdio.h>

int main() {
	while(true){
	  double x,y;
	      printf("Enter your height in meter:");
		    scanf("%lf",&x);
		        printf("Enter your weight in KiloGrams (kg):");
			    scanf("%lf",&y);
			        double bmi=y/(x*x);
				    printf("Your BMI is : %lf", bmi);
		printf("Do you want to restart the program?(Y/N)");
		char c;
		scanf("%c",&c);
		if(c!='Y'){
		return 0;
		}
	}
				        return 0;
}



