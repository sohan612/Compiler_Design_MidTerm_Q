#include <iostream>
#include <string>
using namespace std;

//MD SOHANUR RAHMAN SOHAN
//id : 23-54611-3

void checkNumeric()
{
    string s;
    cout << "\nEnter an Input: "<<endl;
    cin >> s;

    bool isNumeric = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Numeric Constant\n";
    else
        cout << "Not Numeric\n";
}


void checkOperator()
{
    string s;
    cout << "\nEnter an Expression: ";
    cin >> s;

    bool isOperator = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' ||
                s[i] == '/' || s[i] == '%' || s[i] == '=')
        {
            isOperator = true;
            break;
        }
    }

    if (isOperator)
        cout << "Operator Found\n";
    else
        cout << "No Operator Found\n";
}


void checkComment()
{
    string s;
    cin.ignore();

    cout << "\nEnter a line: ";
    getline(cin, s);

    if (s.length() >= 2 && s[0] == '/' && s[1] == '/')
    {
        cout << "Single Line Comment\n";
    }
    else if (s.length() >= 2 && s[0] == '/' && s[1] == '*')
    {
        cout << "Multiple Line Comment\n";
    }
    else
    {
        cout << "No Comment\n";
    }
}


void checkIdentifier()
{
    string obj;

    cout << "\nEnter an object to identify: ";
    cin >> obj;

    if ((obj[0] >= 'A' && obj[0] <= 'Z') ||
            (obj[0] >= 'a' && obj[0] <= 'z') ||
            (obj[0] == '_'))
    {
        cout << obj << " is an Identifier\n";
    }
    else
    {
        cout << obj << " is Not an Identifier\n";
    }
}


void calculateAverage()
{
    int n;

    cout << "\nEnter number of elements: "<<endl;
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Average = " << average << endl;
}


void findMinMax()
{
    int n;

    cout << "\nEnter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];

        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Minimum Value = " << minVal << endl;
    cout << "Maximum Value = " << maxVal << endl;
}

void checkStringConcatenation()
{
    string firstName, lastName;
    cout << "\nEnter First name: ";
    cin >> firstName;
    cout << "Enter Last name: ";
    cin >> lastName;
    string fullName = firstName + " " + lastName;
    cout << "full name = " << fullName << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n... START ..."<<endl;
        cout << "1. Check Numeric Constant [Task 1]"<<endl;
        cout << "2. Check Operator [Task 2]"<<endl;
        cout << "3. Check Comment [Task 3]"<<endl;
        cout << "4. Check Identifier [Task 4]"<<endl;
        cout << "5. Calculate Average [Task 5]"<<endl;
        cout << "6. Find Min and Max [Task 6]"<<endl;
        cout << "7. String Concatenation (Full) [Task 7]"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkNumeric();
            break;
        case 2:
            checkOperator();
            break;
        case 3:
            checkComment();
            break;
        case 4:
            checkIdentifier();
            break;
        case 5:
            calculateAverage();
            break;
        case 6:
            findMinMax();
            break;
        case 7:
            checkStringConcatenation();
            break;
        case 0:
            cout << "Exit....."<<endl;
            break;
        default:
            cout << "Invalid ,,,,,"<<endl;
        }

    }
    while (choice != 0);

    return 0;
}
