#include<iostream>
#include<math.h>
using namespace std;
void input(int &num);
void output(int result);
int countDigits(int num);
int getSumOfAmstrong(int num);
int main()
{
    int num;
    input(num);
    int result = getSumOfAmstrong(num);
    output(result);
    return 0;
}
void input(int &num)
{
    cin >> num;
}
int countDigits(int num)
{
    int count = 0;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int getSumOfAmstrong(int num)
{
    int sum = 0;
    int digit = 0;
    int originalNum = num;
    while(originalNum > 0)
    {
        digit = originalNum % 10;
        originalNum = originalNum / 10;
        sum = sum + pow(digit, countDigits(num));
    }
    if (sum == num)
        return sum;
    else 
        return -1;
}
void output(int result)
{
    cout << result;
}
//by #NhatAnh0236
