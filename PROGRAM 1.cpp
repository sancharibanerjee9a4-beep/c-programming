PROGRAM 1
#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, temp;
    
    cout << "Enter a number:";
    cin >> n;
    
    temp = n;
    
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    
    if (temp == sum)
        cout << "Number is palindrome";
    else
        cout << "Number is not palindrome";
}

output:Enter a number:242
Number is palindrome
