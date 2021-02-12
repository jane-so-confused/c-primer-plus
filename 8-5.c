# include <stdio.h>
# define BIGGER 100
# define SMALLER 50
int main(void) {
	short choose;
	int ans = 50;
	printf("gress your number is 50, right?\n1) bigger 2) smaller 3) yes!\n");	
	while ((choose = getchar()) != '3') {
		switch (choose) {
			case '1' : 
				ans = (ans + BIGGER) / 2 ;
				printf ("is it %d?\n",ans );
				while ((choose = getchar()) != '\n') 
					continue;
				break;
			case '2' :
				ans = (ans + SMALLER) / 2 ;
				printf ("is it %d?\n",ans );
				while ((choose = getchar()) != '\n') 
					continue;
				break;
			default : 
				printf("only can choose 1, 2, 3.\n");
				while ((choose = getchar()) != '\n') 
					continue;
				continue;
		}
	}
	printf("Done!");
getchar();
return 0;
}
