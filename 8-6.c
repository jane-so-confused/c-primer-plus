# include <stdio.h>

int get_frist(void) {
	int c;
	while ((c = getchar()) == ' ') ;
	return c;
}

int main(void) {
	printf("%c", get_frist());
	return 0;
}
	

