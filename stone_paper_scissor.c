#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void winner(int,int);
void winner (int p,int c){
        if (p==1&&c==2)
        {
            printf("Paper\nYou Lost");
        }
        else if (p==1&&c==3)
        {
            printf("Scissor\nYou Won");
        }
        else if (p==2&&c==1)
        {
            printf("Stone\nYou Won");
        }
        else if (p==2&&c==3)
        {
            printf("Scissor\nYou Lost");
        }
        else if (p==3&&c==1)
        {
            printf("Stone\nYou Lost");
        }
        else if (p==3&&c==2)
        {
            printf("Paper\nYou Won");
        }
    }


    
    

int main(){
    srand(time(NULL));
    int randnumber=(rand()%3)+1;
    int player,rounds=0;
    printf("Enter 1 for stone\nEnter 2 for paper\nEnter 3 for scissor\n");
    scanf("%d",&player);
    if (player>3 || player<1)
    {
        printf("Invalid Input");
        return 1;
    }
    else
    {
        while (2>1)
        {
            if (player==randnumber)
            {
                if (player==1)
                {
                    printf("Stone\nDraw Try Again\nEnter 1 for stone\nEnter 2 for paper\nEnter 3 for scissor\n");
                    randnumber=(rand()%3)+1;
                    scanf("%d",&player);
                }
                else if (player==2)
                {
                    printf("Paper\nDraw Try Again\nEnter 1 for stone\nEnter 2 for paper\nEnter 3 for scissor\n");
                    randnumber=(rand()%3)+1;
                    scanf("%d",&player);
                }
                else if (player==3)
                {
                     printf("Scissor\nDraw Try Again\nEnter 1 for stone\nEnter 2 for paper\nEnter 3 for scissor\n");
                    randnumber=(rand()%3)+1;
                    scanf("%d",&player);
                }
                rounds++;
                
            }
            else
            {
                winner(player,randnumber);
                rounds++;
                printf("Number of rounds:%d",rounds);
                break;
            }
        }
    }
    return 0;
}