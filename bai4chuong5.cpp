#include <iostream>
using namespace std;
void set_bit(int &num, int pos);
void clear_bit(int &num, int pos);
int get_bit_value(int &num, int pos);
int main()
{
    int num;
    int pos; 
    cin >> num;
    cin >> pos;
    int a = num;
    int b = num;
    int c = num;
    set_bit(a, pos);
    clear_bit(b, pos);
    cout << get_bit_value(c, pos);
    return 0;
}
void set_bit(int &num, int pos)
{
    num = num | (0x1 << pos);
    cout << num << endl;
}
void clear_bit(int &num, int pos)
{
    num = num & (~(0x1 << pos));
    cout << num << endl;
}
int get_bit_value(int &num, int pos)
{
    return (num >> pos) & (0x1);    
}
//by #NhatAnh0236
