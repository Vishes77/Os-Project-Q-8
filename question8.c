#include<stdio.h>
#include<string.h>


int main()
{
	int type;
	int available_process;
	printf("     ENTER 1 OR 2      ");
	printf("For STUDENT -> Enter 1");
	printf("For FACULTY -> Enter 2");
	scanf("%d",&type);
	
	switch(type)
	{
		case 1:
			printf("   STUDENT TYPE IS SELECTED   ");
			printf("\n\n");
			printf("Enter No of Process for STUDENT : ");
			scanf("%d",&available_process);
			forfaculty(available_process);
			break;
		case 2:
			printf("   FACULTY TYPE IS SELECTED   ");
			printf("\n\n");
			printf("Enter No of Process for FACULTY : ");
			scanf("%d",&available_process);
			forfaculty(available_process);	
			break;
		default:
			printf("Wrong option Selected Sorry");
			printf("Re-Run AGAIN");			
	}
	return 0;	
}
