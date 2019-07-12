/*
 •• E3.7
 Write a program that reads in three integers and prints “in order” if they are sorted in ascending or descending order, or “not in order” otherwise. For example,
 
 1 2 5   in order
 1 5 2   not in order
 5 2 1   in order
 1 2 2   in order
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "enter three integers: ";
    int first, second, third;
    cin >> first >> second >> third;
    
    if ((first <= second && second <= third) || (first >= second && second >= third))
    {
        cout << "in order";
    }
    else
    {
        cout << "not in order";
    }
    cout << endl;
}
