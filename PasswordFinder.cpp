#include <bits/stdc++.h>
using namespace std;
string TTT();


int main()
{
    srand(time(0));
    string input;
    string store;

    cout<<"input= ";
    cin>>input;
    int TRY=0;

    while(true)
    {
        TRY++;
        string mes=TTT();

        if(store.find(TTT())<store.size() && input==mes)
        {
            cout<<"Password Found!"<<endl;
            cout<<"Attempts to find the code: "<<TRY<<endl;
            break;
        }
        else
        {
            store.append(mes);
        }
    }


    return main();
}

string TTT()
{
    int first, second, third, fourth;

    first=rand()%10;
    second=rand()%10;
    third=rand()%10;
    fourth=rand()%10;

    string collect=to_string(first)+to_string(second)+to_string(third)+to_string(fourth);
    return collect;

}
