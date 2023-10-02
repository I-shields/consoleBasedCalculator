#include <iostream>
using namespace std;


int add(int FirstNum, int SecondNum)
{
    int answer;
    answer = FirstNum + SecondNum;
    return answer;
}

int sub(int FirstNum, int SecondNum)
{
    int answer;
    answer = FirstNum - SecondNum;
    return answer;
}

int multi(int FirstNum, int SecondNum)
{   
    int answer;
    answer = FirstNum * SecondNum;
    return answer;
}
int divide(int FirstNum, int SecondNum)
{
    int answer;
    answer = FirstNum / SecondNum;
    return answer;
}

int main()
{ 
    int FirstNum;
    int SecondNum;
    int Selection;
    cout << "Enter your first number: ";
    cin >> FirstNum;
    cout << "Enter your second number: ";
    cin >> SecondNum;

    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division: ";
    cin >> Selection;

    if (Selection == 1)
    {
        cout << "Answer is: " << add(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 2)
    {
        cout << "Answer is: " << sub(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 3)
    {
        cout << "Answer is: " << multi(FirstNum, SecondNum) << endl;
    }

    else if (Selection == 4)
    {
        cout << "Answer is: " << divide(FirstNum, SecondNum) << endl;
    }
}


