#include <stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a%10;//个位数 
	c=((a-b)%100)/10;//十位数 
	d=((a-b-c)%1000)/100;//百位数 
	e=((a-b-c-d)%10000)/1000;//千位数
	f=(a-b-c-d-e)/10000;//万位数 
	g=b*10000+c*1000+d*100+e*10+f; 
	if (g==a){
		printf("%d是回文数。",a);
	}
	else {
		printf("%d不是回文数。",a);
	}
	return 0;
}
