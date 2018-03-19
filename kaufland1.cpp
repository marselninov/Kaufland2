#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int beer=200;
    int wine=300;
    int beerOrder=0;
    int beerDelivery=0;
    int wineOrder=0;
    int wineDelivery=0;
    string input;

    while(true)
    {
        cin >> input;
        if(input=="END")
        {
            break;
        }
        string drink = input.substr(0,input.find(":"));
        int cnt=stoi(input.substr(input.find(":")+1));
        cout<<drink<<cnt<<endl;

        if(drink=="Beer")
        {
            beer+=cnt;
            if(cnt>0)
            {
                beerDelivery++;
            }
            else if(cnt<0)
            {
                beerOrder++;
            }
        }

        if(drink=="Wine")
        {
            wine+=cnt;
            if(cnt>0)
            {
                wineDelivery++;
            }
            else if(cnt<0)
            {
                wineOrder++;
            }
        }
    }
    cout<<"Wines"<<wine<<endl;
    cout<<"Wine Deliveries"<<wineDelivery<<endl;
    cout<<"Wine Orders"<<wineOrder<<endl;
    cout<<"Beers"<<beer<<endl;
    cout<<"Beer Deliveries"<<beerDelivery<<endl;
    cout<<"Beer Orders"<<beerOrder<<endl;
    return 0;
}
