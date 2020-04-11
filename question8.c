#include<stdio.h>

struct Selection{
    int processid;
    int timea;
    int timeb;
    int completet;
    int ertb;
}e[100], po[100], ko[100];

int n, fc=0, ace=0, nak=0;
int quantamtime;

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
                printf("PLEASE ENTER VALUE IN NUMBERS(like 1 to 999) \n");
                printf("ENTER Query Id : "); 
                scanf("%d", &e[fc].processid);
                printf("\n-->Enter Time in 2400 hours formtime  example for 10:30 am enter 1030 \n");
                printf("ENTER Arrival Time: "); 
                scanf("%d", &avg);
                if(avg<1000 || avg>1200)
                {
                    printf("WRITE IN FORMAT LIKE e.g 10:30  -> 1030 \n");
                    printf("\n!!! WRONG !!! Enter Correct TIME ");
                    takedata();
                }
                else
                {
                    e[fc].timea= avg-1000;
                }
                printf("\n-->Enter Time in 2400 hours formtime  example for 10:30 am enter 1030 \n");
                printf("Solving Time Required : ");
                scanf("%d", &e[fc].timeb); 
                e[fc].ertb= e[fc].timeb; 
                fc++;
            } 
            else
            {
                printf("PLEASE ENTER VALUE IN NUMBERS(e.g 1 to 9) \n");
                printf("ENTER Query Id: "); 
                scanf("%d", &po[ace].processid);
                printf("\n-->Enter Time in 2400 hours formtime  example for 10:30 am enter 1030 \n");
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
                printf("\n-->Enter Time in 2400 hours formtime  example for 10:30 am enter 1030 \n");
                printf("Solving Time Required: "); 
                scanf("%d", &po[ace].timeb);  
                po[ace].ertb= po[ace].timeb;
                ace++;
            }
        }
    }
}

void combine()
{
    int sec=0, de= 0, min, flag;
    if( fc!=0  && ace!=0){
        while(sec<ace && de<fc){
            if(e[de].timea == po[sec].timea){
                ko[nak] = e[de];
                nak++;
                de++;
                ko[nak]= po[sec];
                nak++;
                sec++;
            }
            else if(e[de].timea < po[sec].timea){
                ko[nak]= e[de];
                nak++;
                de++;
            }
            else if(e[de].timea > po[sec].timea){
                ko[nak]= po[sec];
                nak++;
                sec++;
            }
            else;
        }
        if(nak != (fc+ace)){
            if(fc!=de){
                while(de!=fc){
                    ko[nak]= e[de];
                    nak++;
                    de++;
                }
            }
            else if(ace!=sec){
                while(sec!=ace){
                    ko[nak]= po[sec];
                    nak++;
                    sec++;
                }
            }
        }
    }
    else if(fc==0){
        while(sec!=ace){
            ko[nak]= po[sec];
            nak++;
            sec++;
        }
    }
    else if(ace==0){
        while(de!=fc){
            ko[nak]= e[de];
            nak++;
            de++;
        }
    }
    else {
        printf("\n INVALID INPUT SORRY\n");
    }
}

void DoRR(){
    int tm= ko[0].timea, sym=0, ak=0, j, acr;
    while(tm!=120 && ak!=nak){
        for(j=0; j<=sym; j++){
            if(ko[j].ertb > quantamtime){
                tm += quantamtime;
                ko[j].ertb -= quantamtime;
            }
            else if(ko[j].ertb <=quantamtime && ko[j].ertb !=0){
                tm += ko[j].ertb;
                ko[j].ertb =0;
                ko[j].completet = tm;
                ak++;
            }
            else;
        }
        int nry = sym+1;
        for(acr= nry; acr<nak; acr++){
            if(ko[acr].timea <= tm){
                sym++;
            }
        }
    }   
}

void giveoutput(){
    int i=0, total=0, sum=0; 
    double avg;
    printf("\nSummary for the Execution\n");
    printf("\nQuery ID\tArrival tm\tRessolving tm\tCompletion tm\tTurn Around tm\tWaiting tm");
    for(i; i<nak; i++){
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d",
        ko[i].processid, (ko[i].timea+1000), ko[i].timeb, (ko[i].completet+1000), (ko[i].completet-ko[i].timea), ((ko[i].completet-ko[i].timea)- ko[i].timeb)); total= ko[i].completet;
        sum+= (ko[i].completet-ko[i].timea);
    }
    avg = sum/nak;
    printf("\n\nTotal tm Spent for all queries: %d", total);
    printf("\nAverage query tm: %lf", avg);
    printf("\nProcess Execution Complete");
}

 int main()
 {
    printf("\n INSTRUCTION \n"
            "\n**>Enter Query arrival times in ascending order, i.e., in real tm arrival manner\n"
            "\n-->ALL THE INPUTS AND OUTPUT OF VALUES ARE IN MINUTE TIME FORMAT  \n ");
    takedata();
    combine();
    DoRR();
    giveoutput();
}
