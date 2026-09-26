#include <stdio.h>
#include <math.h>
int main(){
	double pi=3.141592657;
	double p=11340;
	double l=9.8,weight,r;
	r=pow(l/200,3);
	weight=p*(4.0/3.0)*pi*r;
	printf("%f\n",weight);
	return 0;
}
