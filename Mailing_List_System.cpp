#include<iostream>
#include<string.h>
using namespace std;
class Person_Data{
string First_Name;
string Last_Name;
string Phone_Number;
string Address;
string City;
string State;
int zip_code;

public:
Person_Data(){}
Person_Data(string a, string b, string c, string d, string e,
int x, int y ){
First_Name=a;
Last_Name=b;
Phone_Number=x;
Address=c;
City=d;

3

State=e;
zip_code=y;
}

void Set_Person_Data(){
cout<<"Enter the First name: "<<endl;
cin>>First_Name;
cout<<"Enter the Last name: "<<endl;
cin>>Last_Name;
cout<<"Enter the Phone number: "<<endl;
cin>>Phone_Number;
cin.ignore();
cout<<"Enter the Address: "<<endl;
getline(cin, Address);
cout<<"Enter the City: "<<endl;
cin.ignore();
getline(cin, City);
cout<<"Enter the State: "<<endl;
cin>>State;
cout<<"Enter the Zip Code: "<<endl;
cin>>zip_code;
}

4
void Get_Person_Data(){
cout<<"Name: "<< First_Name <<

Last_Name<<endl;

cout<<"Phone number: "<<Phone_Number<<endl;
cout<<"Address: "<<Address<<endl;

cout<<"City: "<<City<<endl;
cout<<"State: "<<State<<endl;
cout<<"Zip Code: "<<zip_code<<endl;
}

};

class Customer_Data : public Person_Data{
int Customer_Number;
bool Mailing_list;
Person_Data pd;
public:
Customer_Data(){}
Customer_Data(int h, bool k){
Customer_Number=h;
Mailing_list=k;
}
void Set_Customer_Number(){

5

cout<<"Enter the Customer Number: ";
cin>>Customer_Number;
}
void Get_Customer_Number(){
cout<<"Customer number: "<<

Customer_Number<<endl;

}
void Select_Enter_and_Display_Mailing_list(){
cout<<"Do you agree to enter the mailing list, T/F,

for true type 1 and for false type 0 :";
cin>>Mailing_list;
if(Mailing_list==1){
cout<<"The Customer wishes to be on the mailing

list"<<endl;

pd.Set_Person_Data();
pd.Get_Person_Data();
}
if(Mailing_list==0){
cout<<"Customer doesn't wishes to be on the

mailing list"<<endl;
}
}

};
int main(){

6

Customer_Data cd;
cd.Set_Customer_Number();
cd.Get_Customer_Number();
cd.Select_Enter_and_Display_Mailing_list();

return 0;
}