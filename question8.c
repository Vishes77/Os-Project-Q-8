#include<stdio.h>

void takedata(){
    int val,  i, avg;
    printf("Enter total Process (IN NUMBERS): "); 
    scanf("%d", &n);
    if(n==0) 
    { 
        printf("\n You have Enterd 0 \n"); 
    }
    else
    {
        printf("\n Now Enter The QUANTUM TIME for each Process : "); 
        scanf("%d", &quantamtime);
        printf("\nFor FACULTY( PRESS 1 ) \n");
        printf("\nFor STUDENT( PRESS 2 ) \n");
        for(i=0; i<n; i++)
        {
            printf("\n YOUR CHOICE ( 1 or 2)  : "); 
            scanf("%d", &val);
            if(val==1)
            {
                printf("PLEASE ENTER VALUE IN NUMBERS(e.g 1 to 9)");
                printf("ENTER Query Id : "); 
                scanf("%d", &e[fc].processid);
                printf("ENTER Arrival Time: "); 
                scanf("%d", &avg);
                if(avg<1000 || avg>1200)
                {
                    printf("WRITE IN FORMAT LIKE e.g 10:30  -> 1030 \n");
                    printf("\n!!! WRONG !!! Enter Correct TIME");
                    takedata();
                }
                else
                {
                    e[fc].timea= avg-1000;
                }
                printf("Enter time taken by to complete it e.g 10:50 -> 1050");
                printf("Solving Time Required : ");
                scanf("%d", &e[fc].timeb); 
                e[fc].ertb= e[fc].timeb; 
                fc++;
            } 
            else
            {
                printf("PLEASE ENTER VALUE IN NUMBERS(e.g 1 to 9)");
                printf("ENTER Query Id: "); 
                scanf("%d", &po[sc].processid);
                printf("ENTER Arrival Time: "); 
                scanf("%d", &avg); 
                if(avg<1000 || avg>1200)
                {
                    printf("\n!!! WRONG !!! Enter Correct TIME\n");
                    takedata();
                }
                else 
                {
                    po[ace].timea= avg-1000; 
                }
                printf("Enter time taken by to complete it e.g 10:50 -> 1050");
                printf("Solving Time Required: "); 
                scanf("%d", &po[ace].timeb);  
                po[ace].ertb= po[ace].timeb;
                ace++;
            }
        }
    }
}



 int main()
 {
    takedata();
    combine();
    DoRR();
    giveoutput();
}
