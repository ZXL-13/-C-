#include<stdio.h>
int main(){
int mike_score=89;
int john_score=98;
	printf("%d\n",mike_score);
mike_score=john_score;
john_score=89;
	printf("%d\n",mike_score);
	printf("%d\n",john_score);
	return 0;
}
