#include<stdio.h><br>
#include<stdlib.h><br>
#include<time.h><br>
#include"dice.h"<br>


struct sandl<br>
{<br>
    int initial_position;<br>
    int end_position;<br>
};<br>



int main ()<br>
{
  char ch;<br>

  int diceout,gamer1=0,gamer2=0,i;<br>

  struct sandl snake[10]={{25,9},{43,4},{56,8},{65,40},{73,15},{84,58},{99,1}};<br>

    struct sandl ladder[10]={{5,23},{13,42},{20,59},{52,72},{60,83},{70,93}};<br>

  printf
    ("                          WECOME TO SNAKES AND LADDERS        \n");<br>

  printf ("\t\t\t\tInstructions                   \n\n");<br>

  printf
    ("-> Snakes:- 25 to 9,\t 43 to 4,\t 56 to 8,\t 65 to 40,\t 73 to 15,\t 84 to 58,\t 99 to  1.\n");<br>

  printf
    ("-> Ladders:- 5 to 23,\t 13 to 42,\t 20 to 59,\t 52 to 72,\t 60 to 83,\t 70 to 93,\t 75 to 90\n");<br>

  printf
    ("-> Maximum of two players can play and the player reaching 100 first wins the game.\n");<br>

  printf
    ("-> A player rolling a 6 will get an another chance\n\n");<br>

  printf
    ("                                  LET'S play                     \n\n");<br>


  while(1)  
  { printf ("choose player1 or player2:type 1,2 or 3 to select the options\n");<br>

    printf ("1. Player 1\n");<br>

    printf ("2. Player 2\n");<br>

    printf ("3. exit\n");<br>

    printf
    ("---------------------------------------------------------------------------------------------------------------\n");<br>

    scanf("%s",&ch);<br>


    switch(ch)<br>
    { <br>
        case '1':<br>
            system("cls");<br>

            diceout = dice_output();<br>

            if(diceout==6)<br>
            {<br>
              diceout6();<br>
            }<br>
            
           gamer1=gamer1+diceout;<br>

            if(gamer1<101)<br>
             {
               for(i=0;i<7;i++)<br>
               {<br>
                 if(gamer1==snake[i].initial_position)<br>
                 {<br>
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");<br>

                   gamer1=snake[i].end_position;<br>
                 }<br>
                 else if(gamer1==ladder[i].initial_position)<br>
                 {<br>
                   printf("BINGO! YOU GOT A LADDER\n\n");<br>

                      gamer1=ladder[i].end_position;<br>
                 }<br>
               }<br>
             }<br>
             else<br>
             {<br>
              gamer1=100;<br>

               printf("Congratulations! Player1 wins.....\n\n");<br>

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n", diceout,gamer1,gamer2);<br>

               return(0);<br>
             }<br>
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,gamer1,gamer2);<br>

             break;<br>
        case '2':<br>
             system("cls");<br>

            diceout = dice_output();<br>

           if(diceout==6)<br>
           {<br>
             diceout6();<br>
           }<br>
            gamer2=gamer2+diceout;<br>

            if(gamer2<101)<br>
             {<br>
               for(i=0;i<7;i++)<br>
               {<br>
                 if(gamer2==snake[i].initial_position)<br>
                 {<br>
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");<br>

                   gamer2=snake[i].end_position;<br>
                 }<br>
                 else if(gamer2==ladder[i].initial_position)<br>
                 {<br>
                   printf("BINGO! YOU GOT A LADDER\n\n");<br>

                      gamer2=ladder[i].end_position;<br>
                 }<br>
               }<br>
             }<br>
             else<br>
             {<br>
              gamer2=100;<br>

               printf("Congratulations! Player2 wins.....\n\n");<br>

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,gamer1,gamer2);<br>

               return(0);<br>
             }<br>
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,gamer1,gamer2);<br>
             break;<br>
        case '3':<br>
            exit(0);<br>
            break;<br>
        default:<br>
            system("cls");<br>
            printf("Incorrect choice!\n\n");<br>
    }<br>
  }<br>
}<br>
