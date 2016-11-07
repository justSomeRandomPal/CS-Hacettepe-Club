/*
6.23 (Turtle Graphics) The Logo language, which is particularly popular among personal com-
puter users, made the concept of turtle graphics famous. Imagine a mechanical turtle that walks
around the room under the control of a C program. The turtle holds a pen in one of two positions,
up or down. While the pen is down, the turtle traces out shapes as it moves; while the pen is up,
the turtle moves about freely without writing anything. In this problem you’ll simulate the operation of
 the turtle and create a computerized sketchpad as well.

Use a 50-by-50 array floor which is initialized to zeros. Read commands from an array that contains them.
Keep track of the current position of the turtle at all times and whether the pen is currently up or down. Assume that the turtle always starts at position 0, 0 of the floor with its pen up. The set of turtle commands your program must process are shown in Fig. 6.24. Suppose that the turtle is somewhere near the center of the floor. The following “program” would draw and print a 12-by-12 square:
        2
        5,12
        3
        5,12
        3
        5,12
        3
        5,12
        1
        6
        9
As the turtle moves with the pen down, set the appropriate elements of array floor to 1s. When the 6 command (print) is given, wherever there is a 1 in the array, display an asterisk, or some other character you choose. Wherever there is a zero, display a blank. Write a program to implement the turtle graphics capabilities discussed here. Write several turtle graphics programs to draw interest- ing shapes. Add other commands to increase the power of your turtle graphics language.
Exercises 247
Command Meaning
1
Pen up
2
Pen down
3
Turn right
4
Turn left
5, 10 Move forward 10 spaces (or a number other than 10)
6
Print the 50-by-50 array
9
End of data (sentinel)
Fig. 6.24 | Turtle commands.


*/


#include <stdio.h>
#include <stdlib.h>

typedef struct{

/*1 is for up and 0 for down */
  int pen, *ptr;

/* 1 is for towarding up, 0 is towarding down ,3 is right and 4 is left   */
  int towardsTo;

int posY;

int posX;

}turtle;

void printTurtlePath(int floor[][50]);

int main(int argc, char const *argv[]) {


  turtle beetle;

  beetle.pen = 1;

  beetle.posY=0;
  beetle.posX=0;

  beetle.towardsTo=3;

  int floor[50][50];

  int i,j;

  for(i=0; i<50;i++)
    for(j=0;j<50;j++)
        floor[i][j]=0;


/*Command Meaning
1
Pen up
2
Pen down
3
Turn right
4
Turn left
5, 10 Move forward 10 spaces (or a number other than 10)
6
Print the 50-by-50 array
9
End of data (sentinel) */
int command=0,howFar=0;;
  scanf("%d",&command );

scanf(",%d",&howFar );

while(command!=9)
{
  if(command == 5 )
  {
    if(beetle.pen==1)
    {
      if(beetle.towardsTo==0 )
      {
        beetle.posY += howFar;

      }
      else if(beetle.towardsTo==1 )
      {
        beetle.posY -= howFar;

      }
      else if(beetle.towardsTo==3 )
      {
        beetle.posX += howFar;

      }
      else if(beetle.towardsTo==4 )
      {
        beetle.posX -= howFar;

      }

    }
    else if(beetle.pen==0)
    {
      if(beetle.towardsTo==0 )
      {
        int dull = beetle.posY;
        for(dull; dull <= beetle.posY + howFar; dull++ )
        {
          floor[dull][beetle.posX]=1;
        }

        beetle.posY += howFar;


      }
      else if(beetle.towardsTo==1 )
      {
        int dull = beetle.posY;
        for(dull; dull >= beetle.posY - howFar; dull-- )
        {
          floor[dull][beetle.posX]=1;
        }


        beetle.posY -= howFar;

      }
      else if(beetle.towardsTo==3 )
      {
        int dull = beetle.posX;
        for(dull; dull <= beetle.posX + howFar; dull++ )
        {
          floor[beetle.posY][dull]=1;
        }

        beetle.posX += howFar;

      }
      else if(beetle.towardsTo==4 )
      {
        int dull = beetle.posX;
        for(dull; dull >= beetle.posX- howFar; dull-- )
        {
          floor[beetle.posY][dull]=1;
        }

        beetle.posX -= howFar;

      }

    }


  }
  /* If turn right */
  else if (command == 3 )
  {
    /* Down + right = left */
    if(beetle.towardsTo==0)
    {
      beetle.towardsTo=4;
    }
    /* Up + right = right */
    else if(beetle.towardsTo==1)
    {
      beetle.towardsTo=3;
    }
    /* Right + right = down */
    else if(beetle.towardsTo==3)
    {
      beetle.towardsTo=0;
    }
    /* left + right = up */
    else if(beetle.towardsTo==4)
    {
      beetle.towardsTo=1;
    }

  }
  else if (command == 4 )
  {
    /* Down + left = right */
    if(beetle.towardsTo==0)
    {
      beetle.towardsTo=3;
    }
    /* Up + left = left */
    else if(beetle.towardsTo==1)
    {
      beetle.towardsTo=4;
    }
    /* left + right = up */
    else if(beetle.towardsTo==3)
    {
      beetle.towardsTo=1;
    }
    /* left + left = down */
    else if(beetle.towardsTo==4)
    {
      beetle.towardsTo=0;
    }

  }
  else if( command==1)
  {
    beetle.pen = 1;
  }
  else if( command==2)
  {
    beetle.pen = 0;
  }
  else if(command == 6)
  {
    printTurtlePath(floor);

  }
  else if(command == 9)
  {
    break;
    return 0 ;
  }



  scanf("%d",&command );

  scanf(",%d",&howFar );

}



return 0;



}







void printTurtlePath(int floor[][50])
{int i,j;
  for ( i = 0; i <50; i++)
  {
      for (j = 0; j< 50; j++) {
        if(floor[i][j]==0)
        printf(".");
        else if(floor[i][j]==1)
        printf("*" );
      }
      printf("\n" );
  }

}
