#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	int real, img;
}complex;
int main(){
	complex x,y,z,num,denom,temp;
	float a,b;
	char input;
	printf("Please type in your preferred operation. [+ - * /]\n");
	scanf("%c",&input);
	printf("Enter Real and Imaginary number for two complex numbers.");
	printf("First complex number: \n");
	printf("Real: ");
	scanf("%d",&x.real);
	printf("Imaginary:i*");
	scanf("%d",&x.img);
	printf("Second complex number: \n");
	printf("Real: ");
	scanf("%d",&y.real);
	printf("Imaginary:i*");
	scanf("%d",&y.img);
	switch (input){
		case '+':
			z.real=x.real+y.real;
			z.img=z.real+y.real;
			if (z.img>=0){
				printf("(%d+[%d]i)+(%d+[%d]i) = (%d+%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}else{
				printf("(%d+[%d]i)+(%d+[%d]i) = (%d%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}
			break;
		case '-':
			z.real=x.real-y.real;
			z.img=x.img-y.img;
			if(z.img>=0){
				printf("(%d+[%d]i)-(%d+[%d]i) = (%d+%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}else{
				printf("(%d+[%d]i)-(%d+[%d]i) = (%d%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}
			break;
		case '*':
			z.real=x.real*y.real-x.img*y.img;
			z.img=x.img*y.real+x.real*y.img;
			if(z.img>=0){
				printf("(%d+[%d]i)*(%d+[%d]i) = (%d+%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}else{
				printf("(%d+[%d]i)*(%d+[%d]i) = (%d%di)\n",x.real,x.img,y.real,y.img,z.real,z.img);
			}
			break;
		case '/':
			if (y.real == 0 && y.img == 0){
				printf("Syntax Error \n");
				break;
			}else{
				temp.img=y.img*-1;
				num.real=x.real*y.real-x.img*temp.img;
				num.img=x.img*y.real+x.real*temp.img;
				denom.real=y.real*y.real+y.img*temp.img;
				a=num.real/denom.real;
				b=num.img/denom.real;
				if(b>=0){
					printf("(%d+[%d]i)/(%d+[%d]i) = (%f+%fi)\n",x.real,x.img,y.real,y.img,a,b);
				}else{
					printf("(%d+[%d]i)/(%d+[%d]i) = (%f%fi)\n",x.real,x.img,y.real,y.img,a,b);
				}
			}
			break;
	}
	return 0;
}
