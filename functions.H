#include <stdio.h>
#include <conio.h>
void title(void); //function prototype for title
void inst(void);       //function prototype for instructions
void hangman(int,int);   //function prototype for hangman
void credits(void);      //function prototype for credits
void title(void)   //defining title
{
      printf("   _________________________________________________________________________ \n");
      printf("  |                                                                         |\n");
      printf("  | **   **      **      ***   **  ******  ***    ***      **      ***   ** |\n");
      printf("  | **   **     ****     ****  ** **    ** ****  ****     ****     ****  ** |\n");
      printf("  | *******    **  **    ** ** ** **       ** **** **    **  **    ** ** ** |\n");
      printf("  | *******   ********   **  **** **   *** **  **  **   ********   **  **** |\n");
      printf("  | **   **  **********  **   *** **    ** **      **  **********  **   *** |\n");
      printf("  | **   ** **        ** **    **  ******  **      ** **        ** **    ** |\n");
      printf("  |_________________________________________________________________________|\n");
      printf("                                                            Can you save me?");
}
void inst(void)    //defining instructions
{
      clrscr();
      printf("\n\n\n\t\t INSTRUCTIONS \n\t\t ============");
      printf("\n\n   1: HANGAMN IS THE GAME WHERE YOU HAVE TO GUESS THE WORD.");
      printf("\n   2: YOU WILL HAVE TO GUESS THE MAXIMUM WORDS FOR THE MAXIMUM SCORE.");
      printf("\n   3: EVERY LEVEL WILL HAVE THE NEW WORD .");
      printf("\n   4: 1 CORRECT LETTER = 1 SCORE");
      printf("\n   5: YOU HAVE THE n CHOICES TO FIND THE MAXIMUM WORDS\n\n\n");

      getch();
      clrscr();               //clear the screen
      printf("\n\n\n\n\t\t   HOW TO PLAY \n\t\t ===========");
      printf("\nUse your keyboard and guess the word . if you press any letter and the letter is in the word the game will tell you the position of the game . \nguess more , score more . \n\n \t\t\t BEST OF LUCK !");
      delay(2000);
      clrscr();
      }
void hangman(int a,int score) {    //defining hangman
 switch (a) {
       case 1 :
       gotoxy(16,16);
      {
      printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      sound(200);            //sound on wrong letter
      delay(100);
     nosound();
     }
     break;


     case 2 :
      printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      sound(200);
      delay(100);
     nosound();
     break;

     case 3 :
      printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |    |\n");
      printf("  |    |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      sound(200);
      delay(100);
     nosound();
     break;




     case 4 :
      printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   /\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      sound(200);
      delay(100);
     nosound();
     break;


     case 5 :
      printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    X \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   / \\\n");
      printf("__|_________\n\n");
      printf("\nTotal score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      printf("\n\nYOU ARE DEAD ! GAME OVER!");
      sound(440);
      delay(1000);
      sound(200);
      delay(1000);
      sound(200);
      delay(1000);
      sound(440);
      delay(1000);
      nosound();
       return 0;                     
     break;

 }
}                               //defining credits
void credits(void)
{
clrscr();
  gotoxy(1, 3);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SUBMITTED BY ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  printf("                                MOHAMMAD ZAKARIYA                                \n");
  printf("                           MASOOM ZAID  |  VISHAL  KUMAR                           ");
  getch();
  gotoxy(1, 10);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ROLL NO. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  printf("                                   1875110038                                    \n");
  printf("                           1875110036  |  1875110061                               ");
  getch();
  clrscr();
  gotoxy(1, 3);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MINI PROJECT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  printf("                               HANGMAN Game using C                                ");
  getch();
  gotoxy(1, 9);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ INSTITUTE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  printf("            KIPM COLLEGE OF ENGINEERING & TECHNOLOGY, GIDA GORAKHPUR               ");
  getch();
  gotoxy(1, 14);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SUBMITTED TO ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  printf("                                 Mr. ANURAG SINGH                                  ");
}
