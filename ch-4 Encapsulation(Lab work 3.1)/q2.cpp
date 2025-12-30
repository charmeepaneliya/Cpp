#include<iostream>
#include<string.h>
using namespace std;

class Customer{

    private:

        int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
        string cust_name,cust_city,cust_telecom_brand_name;

   public:
   
        void setData(int id,string name,int age,string city,int mobile_number,int simcard_validity,string telecom_brand_name){

            this->cust_id = id;
            this->cust_name = name;
            this->cust_age = age;
            this->cust_city = city;
            this->cust_mobile_number = mobile_number;
            this->cust_simcard_validity = simcard_validity;
            this->cust_telecom_brand_name = telecom_brand_name;

           

        }

        void getData(){

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

    int id,age,mobile_number,simcard_validity;
    string name,city,telecom_brand_name;

    Customer c[2];

    for(int i=0; i<2; i++){
        cout<<"Enter details of customer: "<<i+1<<endl;

         cout<<"Customer id: ";
            cin>>id;
            cin.ignore();

            cout<<"Customer name: ";
            getline(cin,name);

            cout<<"Customer age: ";
            cin>>age;
            cin.ignore();

            cout<<"Customer city: ";
            getline(cin,city);

            cout<<"Customer mobile number: ";
            cin>>mobile_number;
            cin.ignore();

            cout<<"Customer simcard validity: ";
            cin>>simcard_validity;
            cin.ignore();

            cout<<"Customer telecom brand name: ";
            getline(cin,telecom_brand_name);

            c[i].setData(id,name,age,city,mobile_number,simcard_validity,telecom_brand_name);
    }

    for(int i=0; i<2; i++){
        c[i].getData();
    }
    return 0;
}