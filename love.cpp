#include<iostream>
using namespace std;
int main(){
    int l1,l2,i,x,y=0,min,max;
    float per,match=y;
    char name1[100],name2[100];
    cout<<"enter the name of the 1st person (without space)\t";
    cin>>name1;
    i=0;
    while(name1[i]!='\0')
    { i++;}
    l1=i;
    cout<<"input the name of the 2nd person(without space)\t";
    cin>>name2;
    i=0;
    while(name2[i]!='\0')
    { i++;}
    l2=i;
    if(l2>l1){ min=l1; max=l2;}
    else{min=l2; max=l1;}
    for(i=0;i<min;i++){
        for(x=0;x<max;x++){
            while(name1[i]==name2[x])
            {name2[x]=2;  y++;}   }     }
    per = y*100/(min);
    cout<<" love percentage b/w you is \t";
    cout<<per<<"%\t";
    if(per<=50){cout<<"you both need more time";}
    else{cout<<"wow! you guys are awesome";}
    return 0;
    }