#include <iostream>
#include <vector>
using namespace std;

int main() {
int i,j,n;
string s;
float t;
bool scambio;
cout << "Quanti corridori ci sono?" << endl;
cin >> n;
float p[n];
string nomi[n];
i=0;
while (i<n)
{
    cout << "Nome corridore" << endl;
    cin>> nomi[n];
    cout << "posizione corridore" << endl;
    cin >> p[n];
    i=i+1;
}
i=0;
scambio=true;
while (i<=n-1 and scambio)
{
    j=0;
    scambio=false;
    while(j<=(n-2)-i)
    {
        if (p[j]>p[j+1])
        {
            t=p[j];
            p[j]=p[j+1];
            p[j+1]=t;
            s=nomi[j];
            nomi[j]=nomi[j+1];
            nomi[j+1]=s;
            scambio=true;
        }
        j=j+1;
    }
    i=i+1;
}
i=0;
while (i<n)
{
    cout << nomi[i] << " " << p[i];
    i=i+1;
}
}