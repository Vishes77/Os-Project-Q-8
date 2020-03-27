#include<stdio.h>
#include<string.h>

struct avial_process
{
	char pname[30];
	int av_t,br_t,com_y,rem;
}obj;

void forfaculty(int av_process)
{
	int total,av_t,br_t,qun;
	struct avial_process fac[av_process];
	
	for(total = 0;total <av_process;total++){
		printf("Process Detail for Process[%d]",total+1);
		printf("\n");
		printf("Enter name of Process : ");
		scanf("%s",fac[total].pname);
		printf("Enter ARRIVAL TIME : ");
		scanf("%s",fac[total].av_t);
		printf("Enter BRUST TIME : ");
		scanf("%s",fac[total].br_t);	
	}
	printf("Enter QUANTUM TIME : ");
	scanf("%d",&qun);// part b
	for(total = 0;total <av_process;total++)
	{
		for(int j= total +1 ; j<total;total++)
		{
			if(fac[total].av_t > fac[j].av_t)
			{
				obj = fac[count];
				fac[count] = fac[j];
				fac[j] = obj;
			}
		}
	}
	//part b
	for(total = 0;total <av_process ; total++){
		fac[total].rem = fac[total].br_t;
		fac{total}.com_y = 0;
	}
	//part c
	int TT,Q,RR[20];
	TT = 0;
	Q = 0;
	RR[Q] = 0;
	
	int FG,X,N,Z,WT=0;
	do
	{
		for(total = 0;total<av_process;total++)
		{
			if(TT >= fac[av_pocess].av_t)
			{
				Z=0;
				for(X=0;X<=Q;X++)
				{
					if(RR[X] == av_process)
					{
						Z++;
					}
				}
				if(Z == 0)
				{
					Q++;
					RR[Q] == av_process;
				}	
			}
		}
		if(Q == 0)
		{
			N = 0;
		}
		if(fac[av_process].rem == 0)
		{
			N++;
		}
		if(N>Q)
		{
			N = (N-1)%Q;
		}
		if(N<=Q)
		{	if(fac[N].rem > 0)
			{
				if(fac[N].rem <qun)
				{
					TT += fac[N].rem;
					fac[N].rem=0;
				}
				else
				{
					TT += qun;
					fac[N].rem -= qun;
				}
				fac[N].com_y = TT;
			}
			N++;		
		}
		FG=0;
		
		for(count = 0; count < av_process; count++) 
		{
            if(fac[av_process].rem > 0) 
			{
                FG++;
            }
        }
	}while(FG !=0);
	
    printf("\n|\tProcess Name\t  |\tArrival Time\t  |\tBurst Time\t |\tCompletion Time  \t|\n");

    for(total = 0; total < av_process; total++)
	{
        WT = fac[total].com_y - fac[total].br_t - fac[total].av_t;

        printf("\n|\t  %s\t    |\t  %d\t   |\t  %d\t   |\t  %d\t   |\n", fac[total].p_name, fac[total].av_t, fac[total].br_t, fac[total].com_y);
    }	
}

void forstudent(int av_process)
{
	int total,av_t,br_t,qun;
	struct avail_process fac[av_process];
	
	for(total = 0;total <av_process;total++){
		printf("Process Detail for Process[%d]",total+1);
		printf("\n");
		printf("Enter name of Process : ");
		scanf("%s",fac[total].pname);
		printf("Enter ARRIVAL TIME : ");
		scanf("%s",fac[total].av_t);
		printf("Enter BRUST TIME : ");
		scanf("%s",fac[total].br_t);	
	}
	printf("Enter QUANTUM TIME : ");
	scanf("%d",&qun);
	//
	for(total = 0;total <av_process;total++)
	{
		for(int j= total +1 ; j<total;total++)
		{
			if(fac[total].av_t > fac[j].av_t)
			{
				obj = fac[count];
				fac[count] = fac[j];
				fac[j] = obj;
			}
		}
	}
	//
	for(total = 0;total <av_process ; total++){
		fac[total].rem = fac[total].br_t;
		fac{total}.com_y = 0;
	}
	int TT,Q,RR[20];
	TT = 0;
	Q = 0;
	RR[Q] = 0;
	int FG,X,N,Z,WT=0;
	do
	{
		for(total = 0;total<av_process;total++)
		{
			if(TT >= fac[av_pocess].av_t)
			{
				Z=0;
				for(X=0;X<=Q;X++)
				{
					if(RR[X] == av_process)
					{
						Z++;
					}
				}
				if(Z == 0)
				{
					Q++;
					RR[Q] == av_process;
				}	
			}
		}
		if(Q == 0)
		{
			N = 0;
		}
		if(fac[av_process].rem == 0)
		{
			N++;
		}
		if(N>Q)
		{
			N = (N-1)%Q;
		}
		if(N<=Q)
		{	if(fac[N].rem > 0)
			{
				if(fac[N].rem <qun)
				{
					TT += fac[N].rem;
					fac[N].rem=0;
				}
				else
				{
					TT += qun;
					fac[N].rem -= qun;
				}
				fac[N].com_y = TT;
			}
			N++;		
		}
		FG=0;
		
		for(count = 0; count < av_process; count++) 
		{
            if(fac[av_process].rem > 0) 
			{
                FG++;
            }
        }
	}while(FG !=0);
	
    printf("\n|\tProcess Name\t  |\tArrival Time\t  |\tBurst Time\t |\tCompletion Time  \t|\n");

    for(total = 0; total < av_process; total++)
	{
        WT = fac[total].com_y - fac[total].br_t - fac[total].av_t;

        printf("\n|\t  %s\t    |\t  %d\t   |\t  %d\t   |\t  %d\t   |\n", fac[total].p_name, fac[total].av_t, fac[total].br_t, fac[total].com_y);
    }	
}


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
			forstudent(available_process);	
			break;
		default:
			printf("Wrong option Selected Sorry");
			printf("Re-Run AGAIN");			
	}
	return 0;	
}
