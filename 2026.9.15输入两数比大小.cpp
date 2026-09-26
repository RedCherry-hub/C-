#include <stdio.h>
int main(){
	float max(float x,float y);
	float a,b,c;
	scanf("%f%f",&a,&b);
	c=max(a,b);
	printf("%.2f",c);
	return 0;
}
float max(float x,float y){
	float z;
	if(x>y) z=x;
	else z=y;
	return z;
}
