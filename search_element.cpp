// Code to search the guven element in the array
#include<iostream>
using namespace std;
int searchelement(int array[],int size,int element);
int main()
{
    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int myNum;
    int index;
    int size= sizeof(number)/sizeof(number[0]);

    cout << "Enter the element to search " << endl;
    cin >> myNum;

    index = searchelement(number,size,myNum);

    if(index!= -1)
    {
        cout<< myNum << " is at index " << index;

    }
    else{
        cout << myNum << " is not in the array ";
    }
    
    return 0;
}
int searchelement(int array[],int size,int element)
{
  for (int i=0; i<size;i++)
  {
    if(array[i]== element)
    {
        return i;
    }

  }
   return -1;
}
