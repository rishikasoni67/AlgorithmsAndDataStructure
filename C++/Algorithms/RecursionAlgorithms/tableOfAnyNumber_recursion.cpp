// To print table of any number

#include <iostream>
using namespace std;

int table(int number, int i)
{
    return (number * i);
}
int main()
{
    int i, number;
    cout << "Enter the number" << endl;
    cin >> number;

    i = 1;
    do
    {
        cout << "the value is : " << table(number, i) << endl;
        i++;

    } while (i <= 10);

    return 0;
}