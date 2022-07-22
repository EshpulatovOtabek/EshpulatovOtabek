#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string generateKey();

int main()
{

    srand(time(0));
    cout<<generateKey()<<endl;



    return 0 ;
}

string generateKey()
{
    int determine;
    string let = "ABCDEFGHIJKLMNPQRSTUVWXYZ";
    string r = "";


    for(int i=1; i<=25; i++)
    {
        determine = rand() % 3;

        if(determine == 1)
        {
            r += to_string(1+rand()%9);
        }
        else
        {
            r += let[rand()%25];
        }

        if(i%5==0 && i!=25)
        {
            r+="-";
        }
    }

    return r;
}
