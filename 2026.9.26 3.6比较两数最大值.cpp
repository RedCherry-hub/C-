#include <stdio.h>
int main(){
	float max(float x,float y,float z);
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
	d=max(a,b,c);
	printf("%.2f",d);
	return 0;
}
float max(float x,float y,float z){
	float f;
	if (x>=y&&x>=z)
	{
		f=x;
	}
	if (y>=x&&y>=z)
	{
		f=y;
	}
	if (z>=y&&z>=x)
	{
		f=z;
	}
	return f;
}
