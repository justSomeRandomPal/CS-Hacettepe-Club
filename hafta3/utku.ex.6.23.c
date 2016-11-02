#include <stdio.h>
#include<time.h>
int main (void)
{
    int direction=6;// for 2 it goes up , for 6 goes right, for 8 goes down, for 4 goes left on the map
    int control=1;
    int command, moves, turtle, t_1=0, t_2=0, random_1, random_2;
    int i,j,k;
    int map[50][50];
    for (i=0; i<50; i++)
    {
        for (j=0; j<50; j++)
            map[i][j]=0;
    }
    map[0][0]=1;
    turtle=map[0][0];

    while(control==1)
    {
        printf("Enter a command:");
        scanf("%d",&command);

        if(command==1)
        {
            random_1=rand()%50;
            random_2=rand()%50;
            t_1=random_1;
            t_2=random_2;
            turtle=map[t_1][t_2];

        }
        else if (command==2)
        {
            printf("Turtle is walking...\n");
        }
        else if (command==3)// changing the directoion clockwise.
        {
            if (direction==6)
                direction=8;
            else if (direction==8)
                direction=4;
            else if (direction==4)
                direction=2;
            else if (direction==2)
                direction=6;
        }
        else if (command==4)//changing  the direction counter clockwise.
        {
            if (direction==6)
                direction=2;
            else if (direction==8)
                direction=6;
            else if (direction==4)
                direction=8;
            else if (direction==2)
                direction=4;
        }
        else if (command==5)
        {
            printf("Enter a move space:");
            scanf("%d", &moves);
            if (direction==6)
            {

                if((t_2+moves)<=50)
                {
                    turtle=map[t_1][t_2+moves];
                    for(k=0; k<moves; k++)
                        map[t_1][t_2+k]=1;
                    t_2+=moves;

                }
                else
                    printf("Map is ended. You can't go Further.\n");
            }
            else if (direction==8)
            {
                if((t_1+moves)<=50)
                {
                    turtle=map[t_1+moves][t_2];
                    for(k=0; k<moves; k++)
                        map[t_1+k][t_2]=1;
                    t_1+=moves;
                }
                else
                    printf("Map is ended. You can't go Further.\n");
            }
            else if (direction==4)
            {
                if((t_2-moves)>=0)
                {
                    turtle=map[t_1][t_2-moves];
                    for(k=0; k<moves; k++)
                        map[t_1][t_2-k]=1;
                    t_2-=moves;
                }
                else
                    printf("Map is ended. You can't go Further.\n");
            }
            else if (direction==2)
            {
                if((t_1-moves)>=0)
                {
                    turtle=map[t_1-moves][t_2];
                    for(k=0; k<moves; k++)
                        map[t_1-k][t_2]=1;
                    t_1-=moves;
                }
                else
                    printf("Map is ended. You can't go Further.\n");
            }

        }
        else if (command==6)
        {
            for (i=0; i<50; i++)
            {
                printf("\n");
                for (j=0; j<50; j++)
                    printf("%d", map[i][j]);
            }
            printf("\n");
        }
        else if (command==9)
        {
            printf("End of data...\n");
            control=0;
        }
        else
            printf("No such as command like %d.\n Enter (1,2,3,4,5,6,9)\n", command);
    }

    return 0;
}
