#include<iostream>
#include<ctime>
using namespace std;
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player,char computer);

int main()
{
    char player;
    char computer;

    player =getuserchoice();
    cout<<"Your choice: ";
    showchoice(player);

    computer =getcomputerchoice();
    cout<<"Computer's choice : ";
    showchoice(computer);

    choosewinner(player, computer);


return 0;
}
char getuserchoice()
{ 
    char player;
    cout<< "Rock-Paper-Scissor game!\n";
    do{
    cout<< "***********************\n";
    cout<<"Choose any one of the following\n";
    cout<<"r for rock\n";
    cout<<"p for paper\n";
    cout<<"s for scissor\n";
    cin>> player;

    }while(player!='r' && player!='p' && player!='s');

    return player; 
}
char getcomputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showchoice(char choice)
{
    switch(choice)
    {
        case 'r':cout<< "rock\n";
                 break;
        case 'p': cout<< "paper\n";
                 break;
        case 's' : cout<< "scissor\n";
                 break;
    }
}
void choosewinner(char player,char computer)
{
  switch(player)
  {
   case 'r': if(computer== 'r')
              {
                cout<< "It's a tie\n";
              }
              else if(computer=='p')
              {
                cout<< "You lose!\n";
              }
              else{
              cout<<"You win!\n"; }
              break;
   case 'p': if(computer== 'r')
              {
                cout<< "You win!\n";
              }
              else if(computer=='p')
              {
                cout<< "It's a tie\n";
              }
              else{
                cout<<"You lose!\n"; 
              }
              break;
    case 's': if(computer== 'r')
              {
                cout<< "You lose!\n";
              }
              else if(computer=='p')
              {
                cout<< "You win!\n";
              }
              else{
              cout<<"It's a tie\n"; }
              break;             


  }  
}
