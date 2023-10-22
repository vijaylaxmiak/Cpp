//Pseudo random number generation
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int num= (rand() % 20)+1;
    cout<<num;
    return 0;
}
