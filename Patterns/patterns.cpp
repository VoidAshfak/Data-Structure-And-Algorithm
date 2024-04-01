#include<bits/stdc++.h>
using namespace std;
/*
pattern 1:
1
22
333
4444
*/
void pattern_1(int n)
{
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
pattern 2:
1
2 3
4 5 6
7 8 9 10
*/
void pattern_2(int n)
{

   int i=1;
   int Count=1;
   while(i<=n)
   {
       int j=1;
       while(j<=i)
       {
           cout<< Count << ' ';
           Count++;
           j++;
       }
       cout<<endl;
       i++;
   }
}
/*
pattern 3:
1
2 3
3 4 5
4 5 6 7
*/
void pattern_3(int n)
{
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row+col-1 << ' ';
            col++;
        }
        cout<<endl;
        row++;
    }
}
/*
pattern 4:
1
2 1
3 2 1
4 3 2 1
*/
void pattern_4(int n)
{
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row-col+1 << ' ';
            col++;
        }
        cout<<endl;
        row++;
    }
}
/*
pattern 5:
A A A
B B B
C C C
*/
void pattern_5(int n)
{
    int row = 1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout << ch << ' ';
            col++;
        }
        cout<<endl;
        ch = ch+1;
        row++;
    }
}
/*
pattern 6:
A B C
A B C
A B C
*/
void pattern_6(int n)
{
    int row = 1;

    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 'A'+col-1;
            cout << ch << ' ';
            col++;
        }
        cout<<endl;
        row++;
    }
}
/*
pattern 7:
A B C
B C D
C D E
*/
void pattern_7(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=n)
        {
            char ch = 'A';
            ch = ch+col+row-2;
            cout << ch << ' ';
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
pattern 8:
A
B B
C C C
*/
void pattern_8(int n)
{
    int row = 1;
    char ch;
    while(row <= n)
    {
        int col = 1;
        while(col<=row)
        {
            ch = 'A'+row-1;
            cout << ch << ' ';
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
pattern 9:
A
B C
C D E
D E F G
*/
void pattern_9(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=row)
        {
            char ch = 'A'+row+col-2;
            cout << ch << ' ';
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 10:
D
C D
B C D
A B C D
*/
void pattern_10(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=row)
        {
            char ch = 'A'+n-row+col-1;
            cout << ch << ' ';
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 11:
   *
  **
 ***
****
*/
void pattern_11(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<= n-row)
        {
            cout << ' ';
            col++;
        }

        while(col<=n)
        {
            cout << '*';
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 12:
****
 ***
  **
   *
*/
void pattern_12(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<= row-1)
        {
            cout << ' ';
            col++;
        }

        while(col<=n)
        {
            cout << '*';
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 13:
1111
 222
  33
   4
*/

void pattern_13(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=row-1)
        {
            col++;
            cout << ' ';
        }

        while(col<=n)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 14:
   1
  22
 333
4444
*/

void pattern_14(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=n-row)
        {
            col++;
            cout << ' ';
        }

        while(col<=n)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 15:
1111
 222
  33
   4
*/

void pattern_15(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=row-1)
        {
            col++;
            cout << ' ';
        }

        while(col<=n)
        {
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
pattern 14:
   1
  23
 456
78910
*/

void pattern_16(int n)
{
    int Count = 1;
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=n-row)
        {
            col++;
            cout << ' ';
        }

        while(col<=n)
        {
            cout << Count;
            Count++;
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
pattern 14:
   1
  121
 12321
1234321
*/
void pattern_17(int n)
{
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col<=n-row)
        {
            col++;
            cout << ' ' << ' ';
        }

        int Count = 1;
        while(col<=n)
        {
            cout << Count << ' ';
            Count++;
            col++;
        }
        int Count2 = row;
        while(col <= row-1+n)
        {
            cout << Count2-1 << ' ';
            col++;
            Count2--;
        }
        cout << endl;
        row++;
    }
}


int main()
{
    int n;
    ///cin >> n;
    pattern_1(10);
    pattern_2(10);
    pattern_3(10);
    pattern_4(10);
    pattern_5(10);
    pattern_6(10);
    pattern_7(10);
    pattern_8(10);
    pattern_9(10);
    pattern_10(10);
    pattern_11(10);
    pattern_12(10);
    pattern_13(10);
    pattern_14(10);
    pattern_15(10);
    pattern_16(10);
    pattern_17(10);

    return 0;
}
