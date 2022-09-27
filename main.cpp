#include <iostream>

using namespace std;

int main()
{
    int osoA, osoB, i=0;
    cin>>osoA>>osoB;

    while(osoA<=osoB){
        osoA*=3;
        osoB*=2;
        i++;
    }
    cout<<i;
    return 0;
}
