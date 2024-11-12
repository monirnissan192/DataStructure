#include<iostream>
#define MaxQue 10
using namespace std;
int Queue[MaxQue];
int Front=-1;
int Rear=-1;
void Qinsert(int k){
if(Rear==MaxQue-1){
cout<<"Queue Overflow"<<endl;
}
else if(Front==-1&&Rear==-1){
Front=Rear=0;
Queue[Rear]=k;
}
else{
Rear=Rear+1;
Queue[Rear]=k;
}
}
void Qdelete(){
if(Front==-1&&Rear==-1){
cout<<"Queue Underflow"<<endl;
}
else if(Front==Rear){
Front=Rear=-1;
}
else{
Front=Front+1;
}
}
void Display(){
if(Front==-1&&Rear==-1){
cout<<"Queue is Empty"<<endl;
}
else{
for(int j=Front;j<=Rear;j++){
cout<<"Queue is:"<<Queue[j]<<""<<endl;
}
cout<<""<<endl;
}
}
int main(){
int n,Data;
cout<<"Enter the Element:";
cin>>n;
for(int i=0;i<n;i++){
cout<<"Data is:";
cin>>Data;
Qinsert(Data);
}
Display();
Qdelete();
Qdelete();
Qdelete();
cout<<"After delete Queue data is:"<<endl;
Display();
}

