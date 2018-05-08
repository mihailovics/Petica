#include <iostream>
#include <iostream>
#include <list>
#include<queue>
#include <string>
#include <stack>
#include <vector>
using namespace std;



int main()
{
    int zadatak;
    cout<<"Izaberite zadatak"<<endl;
    cin>>zadatak;
    if(zadatak>=5)
        return 0;
    else{
        if(zadatak == 1)
            {
                list<int> l;
    l.push_back(3);
    l.push_front(1);
    l.insert(++l.begin(),2);
    list<int>::iterator it;

    for(it=l.begin(); it!=l.end(); it++)
        cout<< *it<<' ';
    return 0;
            }
            if(zadatak==2)
                {
                    queue<string> q;

    q.push("PROBA 1");
    q.push("PROBA 2");
    q.push("PROBA 3");

    string w;
    cin>>w;
    q.push(w);


    cout<< "Broj elemenata reda = " << q.size() << endl;


    while (!q.empty()){
        cout<< q.front()<<endl;
        q.pop();
    }



                }
                if(zadatak==3)
                    {
                        stack<string>s;

    s.push("STRING 1");
    s.push("STRING 2");
    s.push("Str 3");

    cout<< "Unesi element steka: "<<endl;
    string w;
    cin>>w;
    s.push(w);

    cout<<"Broj elemenata steka = "<< s.size()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

                    }
                    if(zadatak==4)
                        {
                            vector <int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    for(int i=10;i<14;i++)
        v.push_back(i);

    v[0]--;
    v[5]=-200;

    for(unsigned i=0;i<v.size();i++)
        cout<<v[i]<<' ';

    cout<<endl;

                        }
                       /* if(zadatak==5)
                           {
                               vector <string> vs;
    vs.push_back("ja");
    vs.push_back("ne volim");
    vs.push_back("programiranje");

    for(unsigned i=0;i<vs.size();i++)
        cout<<vs[i]<<' ';

    cout<< endl;
    vector<vector<int>>matrica;

    for(int i=0;i<5;i++)
    {
        vector<int> v;
        matrica.push_back(v);

        for(int j=0;j<=i;j++)
            matrica[i].push_back(j);
    }

    for(unsigned i=0;i<matrica.size();i++)
    {
        for(unsigned j=0;j<matrica[i].size();j++)
            cout<< matrica[i][j]<<' ';

        cout<< endl;
    }*/


    }
return 0;
}


