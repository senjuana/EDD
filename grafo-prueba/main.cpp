#include <bits/stdc++.h>

using namespace std;

 bool buscE( int n, int j, bool* E){
 if(n<j){buscE(j,n,E);}
 n=n-1;
 return E[(n*(n-1)/2)+(j-1)];
 }



int main()
{

    int n;
    n=8;
    bool E[28];

    E[0]=1;
    E[1]=1;
    E[2]=0;
    E[3]=1;
    E[4]=0;
    E[5]=0;
    E[6]=0;
    E[7]=0;
    E[8]=1;
    E[9]=0;
    E[10]=0;
    E[11]=0;
    E[12]=1;
    E[13]=0;
    E[14]=1;
    E[15]=0;
    E[16]=0;
    E[17]=1;
    E[18]=0;
    E[19]=0;
    E[20]=0;
    E[21]=0;
    E[22]=0;
    E[23]=0;
    E[24]=0;
    E[25]=0;
    E[26]=0;
    E[27]=1;
    if(buscE(5,3,E))cout<<"esta";
    else cout<<"no esta";
     cout <<endl;
    if(buscE(8,7,E))cout<<"esta";
    else cout<<"no esta";
    cout <<endl;
    if(buscE(7,2,E))cout<<"esta";
    else cout<<"no esta";



    return 0;
}
