# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# define over 1.5
	int main(void){ 
	double total, tax, income;
	total = tax = income = 0;
	double hour;
	int level;
	int i;
	double onehour = 0;
	
	printf("******************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate to action:\n");
	printf("%-20s%-20s\n%-20s%-20s\n%-20s\n","1) $8.75/hr","2) $9.33/hr","3) $10.00/hr","4) $11.20/hr","q) quit");
	printf("******************************************************************\n");
					
	while (level = getchar()) {
		switch (level) {
		case '1' : 
			onehour = 8.75; 
			while ((level = getchar()) != '\n')
				continue;
			break;
		case '2' : 
			onehour = 9.33;
			while ((level = getchar()) != '\n')
				continue;
			break;
		case '3' : 
			onehour = 10.00; 
			while ((level = getchar()) != '\n')
				continue;
			break;
		case '4' : 
			onehour = 11.20; 
			while ((level = getchar()) != '\n')
				continue;
			break;
		case 'q' : 
			printf("Done!");
			exit(0);
		default : printf("enter 1 ~ 4 (q to quit): ");
				while ((level = getchar()) != '\n')
					continue;
				continue;
		}
		break;
	}	
	
	if (level != 'q') {
		 printf("How long have you worked:");
		 scanf("%lf", &hour);
				
	if (hour > 40){
		hour = (hour - 40) * over + 40;
	}
		
	income = hour * onehour ;
	
	if (income < 300){
		tax = 0;
	}else if(income >= 300 && income < 450) {
		tax = 0.15*300;	
	}else if (income == 450) {
		tax = 0.15*300 + 0.2*150 ;
	}else if (income > 450) {
		tax = 0.15*300 + 0.2*150 + (income-450)*0.25;
	}
		
	total = income - tax;
	
	printf("your total: %.1f tax: %.1f income: %.1f", total, tax, income);
}
	getchar();
	return 0;
 } 
