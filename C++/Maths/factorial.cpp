/*********************************************************************

                        FACTORIAL PROGRAM                         
Factorial is represented by !. It is calculated by mutiplying natural
numbers upto that number, i.e., n! = 1 x 2 x 3... x n. 
(n should be positive)
Note: 0! = 1 and 1! = 1

**********************************************************************/

#include<iostream>
using namespace std;

int factorial(int num){
    if(num == 0 || num == 1) // factorial of 0 and 1 is 1
        return 1;
    else // if num > 1
        return (num * factorial(num - 1));
}

int main()
{
    int num; 
    long int res = 1;
    
    cout << "Enter a number: ";
    cin >> num; // factorial of this no will be calculated
    
    // calling the function 
    res = factorial(num);
    
    cout << "Factorial of " << num << " is " << res;
    return 0;
}
