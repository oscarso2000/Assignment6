#include<stdio.h>
#include<string.h>
#include<time.h>
typedef struct{
	char name[15];
	int scores[5];
	int sum;
	float average;
}student;
int main(){
	int x,grade,n;
	srand(time(NULL));
	int t=6;
	student s[t];
	strcpy(s[1].name, "Oscar");
	strcpy(s[2].name,"Eli");
	strcpy(s[3].name, "Jack");
	strcpy(s[4].name, "Olivier");
	strcpy(s[5].name, "John");
	s[1].sum=0;
	s[2].sum=0;
	s[3].sum=0;
	s[4].sum=0;
	s[5].sum=0;
	for (x=0;x<5;x++){
		for (t=1;t<6;t++){
			s[t].scores[x]=rand()%35+65;
			s[t].sum+=s[t].scores[x];
		}
	}
	for (t=1;t<6;t++){
		s[t].average = s[t].sum /5;
		printf(" %s's average score is: %f \n", s[t].name, s[t].average);
	}
}      
