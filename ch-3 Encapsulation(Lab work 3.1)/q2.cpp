#include<iostream>
#include<string.h>
using namespace std;

class Customer{

    private:

        int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
        string cust_name,cust_city,cust_telecom_brand_name;

   public:
   
        void getData(){

            cout<<"Customer id: ";
            cin>>cust_id;
            cin.ignore();

            cout<<"Customer name: ";
            getline(cin,cust_name);

            cout<<"Customer age: ";
            cin>>cust_age;
            cin.ignore();

            cout<<"Customer city: ";
            getline(cin,cust_city);

            cout<<"Customer mobile number: ";
            cin>>cust_mobile_number;
            cin.ignore();

            cout<<"Customer simcard validity: ";
            cin>>cust_simcard_validity;
            cin.ignore();

            cout<<"Customer telecom brand name: ";
            getline(cin,cust_telecom_brand_name);

        }

        void setData(){

            cout<<"student details........";

            cout<<"ID: "<<cust_id<<endl;
            cout<<"\nName: "<<cust_name<<endl;
            cout<<"\nAge: "<<cust_age<<endl;
            cout<<"\ncity: "<<cust_city<<endl;
            cout<<"\nMobile number: "<<cust_mobile_number<<endl;
            cout<<"\nSimcard validity: "<<cust_simcard_validity<<endl;
            cout<<"\nTelecom brand name: "<<cust_telecom_brand_name<<endl;
        }
};

int main(){

    int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
    string cust_name,cust_city,cust_telecom_brand_name;

    Customer c[2];

    for(int i=0; i<2; i++){
        cout<<"Enter details of customer: "<<i+1<<endl;
        c[i].getData();
    }

    for(int i=0; i<2; i++){
        c[i].setData();
    }
    return 0;
}