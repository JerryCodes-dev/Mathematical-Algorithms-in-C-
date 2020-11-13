#include <iostream>
using std::cout;
using std::cin;

//program to solve a square of a number


int square(int num) //a function that runs the square algorithm
{
    int sq = 1;
    sq = num * num ;
    return sq;

}

void square_input() // a function that inputs a number to be squared
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int mysquare= square(number);
    cout << " the square of " << number << " is " << mysquare ;
}

int main() 
{
    square_input();
}