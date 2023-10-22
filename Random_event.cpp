//Random event generator
//Random event generator
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int randNum= rand() % 6+1;
    switch(randNum)
    {
        case 1: cout<< "You win a burger coupon!";
                break;
        case 2: cout<< "You win a movie ticket!";
                break;
        case 3:cout<< "You win a flight ticket!";
                break;
        case 4:cout<< "You win a shopping coupon!";
                break;
        case 5:cout<< "You win a gift card!";
                break;
        case 6:cout<< "You win a Earbuds!";
                break;

    }
    return 0;
}
