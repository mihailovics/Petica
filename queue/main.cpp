#include <iostream>
#include <queue>
#include <string>
using namespace std;
//postoje tri reda pronaci najmanji i najveci red
//realizovati u funkciji
//da funkcija vraca strukturu. struktura se zove resenje ima dvaint polja koja pred redni broj najmanjeg i najveceg
struct res{
    int min;
    int max;

};
struct res resenje(queue<string>q1,queue<string>q2,queue<string>q3);



struct res resiti(queue<string>q1,queue<string>q2,queue<string>q3);
int main()
{
    struct res resenjee;
queue<string>q;
queue<string>q2;
queue<string>q3;
q.push("Prvi sam stao u red");
q.push("Drugi sam stao u red");
q.push("Treci sam stao u red");
q2.push("Prvi sam stao u sunku");
q2.push("drugi sam to uradi");
q3.push("jedan dva");
q3.push("mama");
q3.push("tata");
q3.push("steva");
resenjee = resiti(q,q2,q3);
cout<<resenjee.min<<endl;
cout<<resenjee.max<<endl;
}
struct res resiti(queue<string>q1,queue<string>q2,queue<string>q3)
{
    struct res reseee;

    int min;
    int max;
    min = q1.size();
max = q2.size();
if(min>max)
    max = min;
if(q3.size()>max)
    max = q3.size();
if(max<min)
    min = max;
if(q3.size()<min)
    min = q3.size();
    reseee.min= min;
    reseee.max = max;
    return reseee;
}
//struct resenje(queue<string>q1,queue<string>q2,queue<string>q3)

