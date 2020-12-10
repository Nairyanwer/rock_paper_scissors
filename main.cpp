#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<ctime>
using namespace std;
int main(){
string P_N;
int n_rounds,P_sc=0,Com_sc=0;
cout<<"Please enter your name:  ";
cin>>P_N;
system("cls");
cout<<"HI "<<P_N<<", How many rounds do you want to play?"<<endl;
cin>>n_rounds;

for(int i=1;i<=n_rounds;i++){
    system("cls");
    int P_Ch,Com_Ch;
    cout<<"Round no : "<<i<<" - "<<n_rounds<<endl;
    cout<<"your score : "<<P_sc<<"\t Computer score : "<<Com_sc<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<P_N<<", Make your choice : \n 1-Rock\n 2-Paper\n3-Scissors"<<endl;
   cin>>P_Ch;
   while(P_Ch!=1 &&P_Ch!=2 &&P_Ch!=3 ){ cout<<"!! input is invalid ,choose between (1-2-3) !!"<<endl;cin>>P_Ch; }
srand(time(0));
Com_Ch=(rand()%3)+1;

if(P_Ch==1){
    if(Com_Ch==1){cout<<"DRAW"<<endl;}
 else if(Com_Ch==2){cout<<"Computer Win !"<<endl;Com_sc++;}
else{cout<<"You Win !"<<endl; P_sc++;}
}
if(P_Ch==2){
    if(Com_Ch==1){cout<<"You Win !"<<endl; P_sc++;}
 else if(Com_Ch==2){cout<<"DRAW"<<endl;}
else {cout<<"Computer Win !"<<endl;Com_sc++;}
}
if(P_Ch==3){
    if(Com_Ch==1){cout<<"Computer Win !"<<endl;Com_sc++;}
else if(Com_Ch==1){cout<<"You Win !"<<endl;P_sc++;}
else{cout<<"DRAW"<<endl;}
}
cout<<"Press enter to continue...."<<endl;
getch();
}
system("cls");
cout<<"The Final Result is ...."<<endl;
if(Com_sc>P_sc){cout<<"Sorry, Computer is the champion of the rounds"<<endl;}
 else if(Com_sc<P_sc){cout<<P_N<<",You are the champion of the rounds"<<endl;}
else {cout<<"Draw!"<<endl;}
return 0 ;
}
