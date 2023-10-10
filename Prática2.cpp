#include <iostream> 
#include <cmath>
main (){
	int abase, bexpo, powr;
	
	//Text that will be displayed on the screen.
	printf("Hello, my name is powerb and Im will calculate a exponential for you.");
	printf("\n\nAll you have to do is tell me a number to insert as -a- and another to insert as -b-");
	printf("\nr = a^b -- ex: a = 2 and b = 2");
	printf("\nr = 2^2 --> r = 2 * 2 --> r = 4");
	printf("\n\nKey a integer and positive number to insert as -a-\n");
	scanf("%d", &abase);
	printf("\n\nKey a integer and positive number to insert as -b-\n");
	scanf("%d", &bexpo);
	printf("\nThe actual structure of your potentiation is: r= %d^%d", abase,bexpo);
	
	//Calculation
	powr = pow(abase,bexpo);
	
	//Result on the screen
	printf("\n\nThe result accord your entries is: %d", powr);
	
	return 0;
}