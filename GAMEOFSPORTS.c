#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
void play(char word[]);
void cricket(int n);
void football(int o);
void badminton(int p);
void cls();
void tab(int n);
void newline(int n);
void run(char ca[10][10]);
char ca[10][10];
void start();
void end();
void winner();
void lost();

void main()
{
    int n;
    tab(5);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(1000);
    tab(5);printf("||@*****************************************************@||\n");Sleep(1000);
    tab(5);printf("||@******************** W E L C O M E ******************@||\n");Sleep(1000);
    tab(5);printf("||@*****************************************************@||\n");Sleep(1000);
    tab(5);printf("||@******************** T H I S   I S ******************@||\n");Sleep(1000);
    tab(5);printf("||@*****************************************************@||\n");Sleep(1000);
    tab(5);printf("||@*********** G A M E    O F     S P O R T S **********@||\n");Sleep(1000);
    tab(5);printf("||@*****************************************************@||\n");Sleep(1000);
    tab(5);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(1000);
    newline(2);
    printf("ABOUT THE GAME\n");Sleep(1000);
    printf("This is the Game of Sports,\nThere is a Vocab Check on your chosen Sport\nThe puzzle will help you guess the word.\n");Sleep(1000);
    printf("Before Going Forward Understand the Steps\n");Sleep(1000);
    printf("Step 1: We have sports of 3 Categories.\nLevel 1:Cricket\nLevel 2: Football\nLevel 3: Badminton\n");Sleep(1000);
    printf("Step 2: First, a hint will be given along with a Puzzle.\n");Sleep(1000);
    printf("Step 3: Guess the word according to the hint, you can take help from the puzzle\n");Sleep(1000);
    printf("Step 4: The guessed word will be disappear from the puzzle, if it is correct.\n");Sleep(1000); 
    printf("Step 5: You will get 10 Tries in order to guess the correct term.\n");Sleep(1000); 
    printf("Step 6: Guess at least 15 words correct and you will be leveled up.Finally you will WIN");Sleep(1000);newline(2);
    tab(6);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(1000); 
    tab(6);printf("||@@@@@  A L L   T H E   B E S T  @@@@@||\n");Sleep(1000); 
    tab(6);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(1000);  
    printf("\n\nCATEGORIES\n");
    printf("\n\n1.Cricket\n2.Football \n3.Badminton\n");Sleep(1000);
    printf("Press 1 if you are READY\nPress 0 if you are not READY");newline(1);
    scanf("%d",&n);
    cricket(n);
}
void cricket(int n)
{
 cls(); int c;
    int i,o,j; char word[100];
    tab(5);printf("L E V E L [1]   C R I C K E T");newline(3);
    char ca[10][10] ={
    {'L','X','N','B','A','T','P','Y','F','S'},{'B','G','O','O','G','L','Y','O','U','T'},
    {'W','B','B','D','F','O','U','R','L','U'},{'I','O','A','I','A','T','Q','K','L','M'},
    {'C','U','L','N','S','U','R','E','T','P'},{'K','N','L','N','X','S','R','R','O','I'},
    {'E','C','P','I','T','C','H','T','S','R'},{'T','E','O','N','H','F','F','B','S','E'},
    {'L','R','Y','G','U','S','I','X','W','N'},{'M','A','I','D','E','N','O','V','E','R'}};
    printf("\n");
if(n==1)
{
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");Sleep(1000);
run(ca);Sleep(1000);
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
newline(2);
printf("HINT 1 : It is a short of  Leg Before Wicket");
strcpy(word,"LBW");
play(word);
ca[0][0]='_';
ca[1][0]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 2: An Over in which no runs are score");
strcpy(word,"MAIDENOVER");
play(word);
    for(j=0;j<6;j++)
    {
        ca[9][j]='_';
    }
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 3: A set of three upright wooden sticks that form the wicket");
strcpy(word,"STUMP");
play(word);
ca[0][9]='_';
ca[1][9]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 4: It is a short of One Day International");
strcpy(word,"ODI");
play(word);
ca[2][3]='_';
ca[3][3]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 5: a type of delivery bowled by right-arm leg spin bowler, don't Google it");
strcpy(word,"GOOGLY");
play(word);
ca[1][1]='_';
for(i=3;i<7;i++)
{
    ca[1][i]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 6: Group of Six Deliveries of ball");
strcpy(word,"OVER");
play(word);
for(i=6;i<9;i++)
{
ca[9][i]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("\nHINT 7: Rectangular Area on ground to play the real cricket");
strcpy(word,"PITCH");
play(word);
ca[6][2]='_';
ca[6][4]='_';
ca[6][5]='_';
ca[6][6]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 8: A long piece of wood for hitting the ball");
strcpy(word,"BAT");
play(word);
ca[0][3]='_';
ca[0][4]='_';
ca[0][5]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 9: A person stands on ground and check if rules are followed");
strcpy(word,"UMPIRE");
play(word);
for(i=2;i<8;i++)
{
    ca[i][9]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 10: When the Ball hits the Stump and throw the batsman out it's wicked ;)");
strcpy(word,"WICKET");
play(word);
for(i=2;i<8;i++)
{
    ca[i][0]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 11: Each division of game where both side have a turn at batting");
strcpy(word,"INNING");
play(word);
for(i=3;i<8;i++)
{
    ca[i][3]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 12: A ball bowled such that it pitched immediately under the bat");
strcpy(word,"YORKER");
play(word);
ca[7][0]='_';
ca[7][1]='_';
ca[7][3]='_';
ca[7][4]='_';
ca[7][5]='_';
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 13: when four runs scored in a hit");
strcpy(word,"FOUR");
play(word);
for(i=4;i<8;i++)
{
    ca[2][i]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 14: Illegitimate delivery of ball to the batsman resulting in a extra run and a free hit");
strcpy(word,"NOBALL");
play(word);
for(i=0;i<6;i++)
{
    ca[i][2]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 15: A ball tht delievers without bouncing on the pitch first ");
strcpy(word, "FULLTOSS");
play(word);
for(i=0;i<8;i++)
{
    ca[i][8]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 16:a ball that bounce once and reaches the batsman's  head-height ");
strcpy(word, "BOUNCER");
play(word);
for(i=2;i<9;i++)
{
ca[i][1]='_';
}
run(ca);c++;
newline(2);Sleep(600);
printf("HINT 17: when six runs are scored in a hit ");
strcpy(word,"SIX");
play(word);
ca[8][5]='_';
ca[8][6]='_';
ca[8][7]='_';
run(ca);c++;
newline(2);Sleep(600);
if(c>=15)
{
    winner();
    printf("Press 1 if you are READY for Level 2: FOOTBALL\nPress 0 if you are not READY");
    scanf("%d",&o);
    football(o);
}
else
{
    lost();
}
}
else
{
   printf("OOPS SORRY !!!"); 
   end();
   exit(0);
}
} 
void football(int o)
{
    cls(); int c;
    int i,p,j; char word[100];
    tab(5);printf("L E V E L [2]   F O O T B A L L");newline(3);
    char ca[10][10] ={
    {'Q','F','B','R','A','C','E','G','M','X'},{'Y','O','O','S','T','R','I','K','E','R'},
    {'P','U','O','J','M','A','N','O','N','C'},{'A','L','T','F','H','U','U','W','Q','R'},
    {'S','O','I','D','P','I','T','C','H','E'},{'S','I','T','T','E','R','M','L','O','D'},
    {'G','O','A','L','S','V','E','N','W','C'},{'K','S','H','O','O','F','G','B','L','A'},
    {'C','H','I','P','S','H','O','T','E','R'},{'Y','E','L','L','O','W','C','A','R','D'}};
    printf("\n");
if(o==1)
{
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");Sleep(1000);
  run(ca);Sleep(1000);
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  newline(2); 
  printf("HINT 1:When a player score 2 goals in one game");
  strcpy(word,"BRACE");
  play(word);
  ca[0][3]='_'; 
  ca[0][4]='_';
  ca[0][5]='_';
  ca[0][6]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 2: An illegal action punishable by a free kick");
  strcpy(word,"FOUL");
  play(word);
  ca[0][1]='_';
  ca[1][1]='_';
  ca[2][1]='_';
  ca[3][1]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 3:Instruction to kick the ball with full power");
  strcpy(word,"BOOTIT");
  play(word);
  for(i=0;i<5;i++)
 {    ca[i][2]='_';  }
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 4: A player whose role is to score goals");
  strcpy(word,"STRIKER");
  play(word);
  for(i=3;i<10;i++)
  {   ca[1][i]='_'; }
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 5:Name of the warning issued by refree to a player for a serious foul");
  strcpy(word,"YELLOWCARD");
  play(word);
  for(i=0;i<8;i++)
   {ca[9][i]='_';}
  run(ca);c++;Sleep(600);
  newline(2);
  printf("HINT 6: Name of the punishment where refree send the player off the pitch");
  strcpy(word,"REDCARD");
  play(word);
  for(i=3;i<10;i++)
  {   ca[i][9]='_'; }
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 7:A kick from underneath the ball to make it reach over the opponent,MESSI does it ");
  strcpy(word,"CHIPSHOT");
  play(word);
  for(i=0;i<8;i++)
 { ca[8][i]='_'; }
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 8:Puposelessly kicking the ball towards the opposite goal with power");
  strcpy(word,"HOOF");
  play(word);
  ca[7][2]='_';
  ca[7][3]='_';
  ca[7][4]='_';
  ca[7][5]='_'; 
  run(ca);c++;Sleep(600);
  newline(2);
  printf("HINT 9:Kicking or putting the ball through an opponent's legs ");
  strcpy(word,"NUTMEG");
  play(word);
  ca[3][6]='_';
  for(i=5;i<8;i++)
  { ca[i][6]='_'; }
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 10: The loud cry to inform a teammate that opponent is approaching");
  strcpy(word,"MANON");
  play(word);
  ca[2][4]='_';
  ca[2][5]='_';
  ca[2][7]='_';
  ca[2][8]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 11:A shocking miss that was very easy to hit");
  strcpy(word,"SITTER");
  play(word);
  ca[5][1]='_';
  ca[5][2]='_';
  ca[5][3]='_';
  ca[5][4]='_';
  ca[5][5]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 12:A mistake by player that proves costly");
  strcpy(word,"HOWLER");
  play(word);
  for(i=4;i<10;i++)
  {ca[i][8]='_';}
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 13:when the ball head into the goal");
  strcpy(word,"GOAL");
  play(word);
  ca[6][0]='_';
  ca[6][1]='_';
  ca[6][2]='_';
  ca[6][3]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 14: To kick the ball to another player of one's own team ");
  strcpy(word,"PASS");
  play(word);
  ca[2][0]='_';
  ca[3][0]='_';
  ca[4][0]='_';
  ca[5][0]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  printf("HINT 15:The total Playing area of Football Match");
  strcpy(word,"PITCH");
  play(word);
  ca[4][4]='_';
  ca[4][5]='_';
  ca[4][7]='_';
  run(ca);c++;
  newline(2);Sleep(600);
  if(c>=15)
{
    winner();
    printf("Press 1 if you are READY for Level 3: BADMINTON\nPress 0 if you are not READY");
    scanf("%d",&p);
    badminton(p);
}
else if(c<15)
{
    lost();
}
else
{
   printf("OOPS SORRY !!!");
   end(); 
   exit(0);
}
}
}
void badminton(int p)
{
    cls(); int c;
    int i,j; char word[100];
    tab(5);printf("L E V E L [3]    B A D M I N T O N");newline(2);
    char ca[10][10] ={
    {'D','R','I','V','E','C','E','G','C','C'},{'R','A','L','L','Y','C','L','E','A','R'},
    {'P','C','O','F','A','U','L','T','R','O'},{'A','Q','B','I','R','D','I','E','R','S'},
    {'P','U','S','H','S','H','O','T','Y','S'},{'L','E','T','K','I','L','L','S','O','C'},
    {'G','T','A','I','S','V','E','M','W','O'},{'K','S','F','L','I','C','K','A','L','U'},
    {'S','H','U','T','T','L','E','S','E','R'},{'Y','E','D','R','O','P','S','H','O','T'}};
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");Sleep(1000);
    run(ca);Sleep(1000);
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    newline(2); 
if(p==1)
{
 printf("HINT 1:Another name for ShuttleCock ");
 strcpy(word,"BIRDIE");
 play(word);
 for(i=2;i<8;i++)
 { ca[3][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 2: A hard downward shot that is not returnable by the opponent");
 strcpy(word,"KILL");
 play(word);
 for(i=3;i<7;i++)
 { ca[5][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 3: A shot diagonally over the net , from one side to the other");
 strcpy(word,"CROSSCOURT");
 play(word);
 ca[0][9]='_';
 for(i=2;i<9;i++)
 { ca[i][9]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 4:A powerful shot played just over the top of the net");
 strcpy(word,"DRIVE");
 play(word);
 ca[0][0]='_';
 for(i=2;i<5;i++)
 { ca[0][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 5:A wrist movement that changes the soft shot into hard one");
 strcpy(word,"FLICK");
 play(word);
 for(i=2;i<7;i++)
 { ca[7][i]='_'; }
 run(ca);c++;
 newline(2); Sleep(600);
 printf("HINT 6: A call by umpire to restart a point");
 strcpy(word,"LET");
 play(word);
 ca[5][0]='_';
 ca[5][1]='_';
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 7: An exchange of shots following the serve");
 strcpy(word,"RALLY");
 play(word);
 ca[1][0]='_';
 ca[1][2]='_';
 ca[1][3]='_';
 ca[1][4]='_';
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 8:A hard powerful shot putting the birdie downward to opponent's side");
 strcpy(word,"SMASH");
 play(word);
 for(i=5;i<9;i++)
 { ca[i][7]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 9: A violation of the rules");
 strcpy(word,"FAULT");
 play(word);
 for(i=3;i<8;i++)
 { ca[2][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 10: Hitting the shuttle twice , it's a fault");
 strcpy(word,"DROPSHOT");
 play(word);
 for(i=2;i<10;i++)
 { ca[9][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 11: A shot hit deep in the back of the opponent's court");
 strcpy(word,"CLEAR");
 play(word);
 ca[1][5]='_';
 ca[1][6]='_';
 ca[1][7]='_';
 ca[1][9]='_';
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 12: A soft shot executed by pushing the shuttle");
 strcpy(word,"PUSHSHOT");
 play(word);
 ca[4][0]='_';
 for(i=2;i<8;i++)
 { ca[4][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 13: A bat with oval or round shaped frame having net of nylon strings");
 strcpy(word,"RACQUET");
 play(word);
 for(i=0;i<7;i++)
 { ca[i][1]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 14:A illegal stroke that occur when shuttle comes to stop on the racquet");
 strcpy(word,"CARRY");
 play(word);
 for(i=0;i<5;i++)
 { ca[i][8]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
 printf("HINT 15: A object used in badminton made of goose feathers");
 strcpy(word,"SHUTTLE");
 play(word);
 for(i=0;i<7;i++)
 { ca[8][i]='_'; }
 run(ca);c++;
 newline(2);Sleep(600);
  if(c>=15)
{
    winner();
    newline(5);
    tab(5);printf("YOU ARE THE REAL WINNER OF ALL TIME");
    end();
}
else if(c<15)
{
    lost();
}
else
{
   printf("OOPS SORRY !!!"); 
   end();
   
}
}
}
void play(char word[100])
{
   int i,length;
   char guess,dash[100];
   int tries = 10, guessed = 0;
   length=strlen(word);
   printf("\n\n\n");
   for(i=0;i<length;i++)
   {
      dash[i]='_';
      printf("%c", dash[i]);
   }
   dash[length]='\0';
   printf("\nGuess the Word given in Hint\n");
   printf("Keep the capslock on\n");
   while (tries > 0 && guessed < length) {
        printf("Enter a letter:\n ");
        scanf(" %c", &guess);
        for (i = 0; i < length; i++) {
            if (word[i] == guess && dash[i] == '_') {
                dash[i] = guess;
                guessed++;
            }
        }
        printf("%s\n", dash);
        tries--;
    }
if(guessed==length)
{
printf("Congrats !! you guessed the word\n");
printf("\nYour new puzzle looks like this\n");


}
else
{
printf("Sorry You lost\n");
lost();
end();
}

}
void cls()
{
    system("cls");
}
void tab(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\t");
    }
}
void newline(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\n");
    }
}
void run(char ca[10][10])
{
    int i , j;
for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
    printf("%c  ", ca[i][j]);
    }
    printf("\n");
    }
}
void end()
{
    newline(2);
    tab(5);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(600);
    tab(5);printf("||@*****************************************************@||\n");Sleep(600);
    tab(5);printf("||@************** P R E S E N T E D   B Y **************@||\n");Sleep(600);
    tab(5);printf("||@*****************************************************@||\n");Sleep(600);
    tab(5);printf("||@************* S A K S H I   S H A R M A  ************@||\n");Sleep(600);
    tab(5);printf("||@*****************************************************@||\n");Sleep(600);
    tab(5);printf("||@*********** G A M E    O F     S P O R T S **********@||\n");Sleep(600);
    tab(5);printf("||@*****************************************************@||\n");Sleep(600);
    tab(5);printf("||@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@||\n");Sleep(600);
    exit(0);
}
void winner()
{
    printf("**         **       *****       **          **\n");Sleep(800);
    printf(" **      **       **     **     **          **\n");Sleep(800);
    printf("   **  **        **       **    **          **\n");Sleep(800);
    printf("     **          **       **    **          **\n");Sleep(800);
    printf("     **           **     **     **          **\n");Sleep(800);
    printf("     **             *****       **************\n");Sleep(800);
    printf("\n\n\n");
    printf("**               **   ******    ***           ** \n");Sleep(800);
    printf("**               **     **      ** **         ** \n");Sleep(800);
    printf("**      **       **     **      **   **       ** \n");Sleep(800);
    printf("**     ****      **     **      **     **     ** \n");Sleep(800);
    printf("**   **    **    **     **      **       **   ** \n");Sleep(800);
    printf("** **        **  **     **      **         ** ** \n");Sleep(800);
    printf("*****        ******   ******    **           *** \n");Sleep(800);

}
void lost()
{
   printf("**          **       *****       **          **\n");Sleep(800);
    printf(" **      **       **     **     **          **\n");Sleep(800);
    printf("   **  **        **       **    **          **\n");Sleep(800);
    printf("     **          **       **    **          **\n");Sleep(800);
    printf("     **           **     **     **          **\n");Sleep(800);
    printf("     **             *****       **************\n");Sleep(800);
    printf("\n\n\n");
    printf("**                  *****         **********     *************** \n");Sleep(800);
    printf("**                **     **       **             *************** \n");Sleep(800);
    printf("**               **       **      **                  ****       \n");Sleep(800);
    printf("**               **       **      **********          ****       \n");Sleep(800);
    printf("**               **       **              **          ****       \n");Sleep(800);
    printf("***********       **     **               **          ****       \n");Sleep(800);
    printf("***********         *****         **********          ****       \n");Sleep(800);

}
