#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    // srand(time(NULL));//srand is inside stdlib used to generate random numbers
   
    int name,comp,input,a;
    char nam[50];
     int c=0,p=0,i;
    
    printf("Enter Your name: ");
    scanf("%s",&nam);
     start:
     c=0;
     p=0;
     

     //Label to play again

// for loop will run 3 times 
   for ( i = 0; i < 3; i++)
   {
  
   printf("\n------------------------------------------------\n");
    
    printf("Its your turn!!\nSelect one among the below\n1.Rock\n2.Papers\n3.Scissors\n");
    scanf("%d",&input);

    srand(time(NULL));
    comp = rand()%3;//Here we are generating a random number
    if (comp==0)
    {
        printf("Computers Choice is \"ROCK\"");
    }
    else if (comp==1)
    {
        printf("Computers Choice is \"PAPERS\"");
    }
    else
    {
        printf("Computers Choice is \"SCISSORS\"");
    }
    


    
   //Here we are checking for the winner
    if (input==1&&comp==0 || input==2&&comp==1 || input==3&&comp==2)
    {
        printf("\nMatch tied!!\n");
    }
    else if (input==1&&comp==2 || input==3&&comp==1 || input==2&&comp==0)
    {
         printf("\n%s Won this round\n",nam);
         p++;
    }
    else if (input==1&&comp==1 || input==2&&comp==2 || input==3&&comp==0)
    {
         printf("\nComputer Won this round\n",nam);
        c++;

    }
    else{
        printf("Invalid");
    }
    

   }
   printf("\n------------------------------------------------\n");

 
//Displaying scores of both player and computer
    printf("%s's score: %d\n",nam,p);
    printf("Computer's score: %d",c);
    if (c>p)
    {
        printf("\nComputer won the game!!\nBetter Luck next time.\n ");
    }
    else if (p>c)
    {
        printf("\n%s won the game!!\n ",nam);
    }
    else{
        printf("\nMatch tied");
    }

    printf("\nPress 1 to play again or press 2 to exit:\n ");
    scanf("%d",&a);
    if (a==1)
    {
        goto start;//to play again
    }
    else{
        printf("\n\n*****ENDGAME******\n");
    }
    

return 0;
}
