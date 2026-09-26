#include <stdio.h>
int main(){
	float a,c,d;
	char b;
	d=0;
	scanf("%f%c%f",&a,&b,&c);
	if (b=='+'){
	d=a+c;
    }
	else if (b=='-'){
	d=a-c;
    }
	else if (b=='*'){
	d=a*c;
	}
	else if (b=='/'){
		if (c!=0){
			d=a/c;
	}
	    else{
		printf("error");
		return 0;
	}
    }
	printf("%.2f\n",d);
	return 0;
}
