#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el  "\n"
using namespace std;

struct Bkrqst
{
    string bktl;
    string stdnm;
};

class Lb_systm
{
public:
    queue< Bkrqst> book;
    stack< Bkrqst> stack;
void add(string bktl, string stdnm)
{
       Bkrst request = { bktl, stdnm};
        book.push(request);
        cout <<" added: "<<stdnm<< bktl<<el;
}
void process() {
       
    }

}
int main()
{
    Lb_systm library;
    library.add("OOP ","Alam");
    library.add("Data strctr ","Amit");
}