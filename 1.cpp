#include<iostream>
#include<string.h>
using namespace std;
class A
{
    char accno[10];
    char acctype[15];
    double balance;
public:
    Account (char *no,char *type,double bl){
    strcpy(accno,no);
    strcpy(acctype,type);
    balance=bl;
}
void showinfo()
{
    cout<<"account number:"<<accno<<endl;
    cout<<"account type:"<<acctype<<endl;
    cout<<"current balance:"<<balance<<endl;
}
};
