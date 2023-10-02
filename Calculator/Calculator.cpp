#include <iostream>
using namespace std;


int add(int FirstNum, int SecondNum)
{
    // this is the add function
    int answer;
    answer = FirstNum + SecondNum;
    return answer;
}

int sub(int FirstNum, int SecondNum)
{
    // this is the subtraction function
    int answer;
    answer = FirstNum - SecondNum;
    return answer;
}

int multi(int FirstNum, int SecondNum)
{   
    //this is the multiplication function
    int answer;
    answer = FirstNum * SecondNum;
    return answer;
}
int divide(int FirstNum, int SecondNum)
{
    //this is the divide function
    int answer;
    answer = FirstNum / SecondNum;
    return answer;
}

int main()
{ 
    int FirstNum;
    int SecondNum;
    int Selection;

    //get user numbers
    cout << "Enter your first number: ";
    cin >> FirstNum;
    cout << "Enter your second number: ";
    cin >> SecondNum;

    //figure out what operation the user wants to perform
    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division: ";
    cin >> Selection;

    if (Selection == 1)
    {
        //perform addition
        cout << "Answer is: " << add(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 2)
    {
        //perform subtraction
        cout << "Answer is: " << sub(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 3)
    {
        //perform multiplication
        cout << "Answer is: " << multi(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 4)
    {
        //perform division
        cout << "Answer is: " << divide(FirstNum, SecondNum) << endl;
    }

    //if the user enters a invalid number, tell them
    else
        cout << "Invalid selection, run the program again" << endl;
}


