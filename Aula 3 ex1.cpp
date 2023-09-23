 #include <iostream>
 
 float masscalculate(float one, float two){
 	const float mass_one=321.43;
 	const float mass_two=150.72;
 	
 	printf("\n 1,2 : 1,0 \t: = %f", (1.2*mass_one + 1*mass_two));
 	printf("\n 1,3 : 1,0 \t: = %f", (1.4*mass_one + 1*mass_two));
 	printf("\n 1,0 : 1,6 \t: = %f", (1*mass_one + 1.6*mass_two));
 	
 	return (one * mass_one) + (two * mass_two);
 }
 
int main (){
	float one=0, two=0, result=0;
	printf("\n Please, type the elements one and two mass-g/mol-\n");
	scanf("%f %f", &one, &two);
	
	result = masscalculate(one,two);
	printf("\n Result is %f", result);
	
	return 0;
}
