#include <stdio.h>

int main(){
	int stop = 1;
	int answer = 0;
	double total = 0;
	double tip = 0;
	double tax = 0;

	while(stop){

		printMenu();

		printf("\nEnter the number of the item you want or enter 0 if you want to exit: ");
		fscanf(stdin, "%d", &answer);

		if(answer == 0){
			stop = 0;
		}

		switch(answer){
			case 1:
				total += 23;
				break;
			case 2:
				total += 16;
				break;
			case 3:
				total += 70;
				break;
			case 4:
				total += 5000;
				break;	
		}
		if(answer != 0){
			printf("Your total: %.2f\n", total);

			printf("Do you want to end your order? Enter 0 for yes and 1 for no: ");
			fscanf(stdin, "%d", &stop);
		}
	}
	
	if(total != 0){
		getTotal(total);
	}else{
		printf("Total is: %.2f\n", total);
	}
}

void getTotal (double total){
	printf("Total before tip and tax: %.2f\n", total);
	tip = total * .2;
	printf("Tip: %.2f\n", tip);
	tax = total * .0825;
	printf("Tax: %.2f\n", tax);
	total += (tax + tip);
	printf("Total including tax and tip: %.2f\n", total);
}

void printMenu(){
	printf("	   MENU\n");
	printf("============================\n");
	printf("1. Cheese Platter: $23\n");
	printf("2. French Onion Soup $16\n");
	printf("3. Ribeye $70\n");
	printf("4. Fleur Burger 5000 $5000\n");
}
