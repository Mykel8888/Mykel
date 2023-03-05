#include<stdio.h>



int main()

{
		printf("the list of discount attract to the goods purchase\n");
	printf("enter the amount of goods purchase\n");
	int buy;
	scanf("%d", &buy);
	double purch= 0.5;



	switch(buy)
	{
		case 1:
			printf(" you received 1/2 packet");
			break;
		case 2:
			printf(" you received 1 packet");
			break;
		case 3:
			printf(" you received 1.5 packet");
			break;
		case 4:
			printf(" you received 2 packet");
			break;
		case 5:
			printf(" you received 3 packet");
			break;
		case 6:
			printf(" you doin well to received the quatitie");
			break;
		default:
			printf(" let all be zero");
	}
		printf("\n");
		printf("your total goods is:%f\n", buy +  purch);
			return 0;
}

