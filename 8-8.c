# include <stdio.h>

void clean(void){
	int c;
	while ((c = getchar()) != '\n')
			continue;
	return;
}

int main(void) {
	int choose;
	float num1, num2;
	short i;
	int c;
	
	printf("Enter the operation of your choice\n"
	"%-15s%-15s\n%-15s%-15s\n%-15s\n", "a. add", "s. subtract", "m. multiply", "d. divide", "q. quit");
	choose = getchar();
	
	while (choose != 'q') {
		while (choose != 'a' && choose != 's' && choose != 'm' && choose != 'd' && choose != 'q') {
			printf("please enter a, s, m, d, (q to quit): ");	
			clean();
			choose = getchar();
		}
	clean();
	if (choose == 'q') 
		break;
		
	printf("Enter frist number: ");
	while ((i = scanf("%f", &num1)) == 0){
		printf("your enter is not an number! please enter a number:");
		clean();
	}
	clean();
	
	printf("Enter second number: ");	
	i = scanf("%f", &num2);
	clean();

	while (i == 0 || choose == 'd'){
		if (i == 0){
			printf("your enter is not an number! please enter a number:");
		}else if (choose == 'd' && num2 == 0){
			printf("enter an number other than 0: ");
		}
		if (choose == 'd' && num2 != 0 && i == 1)
			break;
		i = scanf("%f", &num2);
		clean();
	}
	
	switch (choose) {
	case 'a' : printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);break;
	case 's' : printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);break;
	case 'm' : printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);break;
	case 'd' : printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);break;
	}
	
	printf("Enter the operation of your choice\n"
	"%-15s%-15s\n%-15s%-15s\n%-15s\n", "a. add", "s. subtract", "m. multiply", "d. divide", "q. quit");
	choose = getchar();
}
printf("Done!");
	return 0;
}
