#include<iostream>
using namespace std;
#include<string>

class DiamondsCompany{

    private:

        int comp_id,comp_staff_quantity,comp_import_raw_diamonds,comp_export_raw_diamonds;
        string comp_name,comp_ceo;
        double comp_revenue;

    public:

    //parameterized constructor
    
        DiamondsCompany(int id,string name,int staff,double revenue,int import_raw_diamonds,int export_raw_diamonds,string ceo){
            comp_id=id;
            comp_name=name;
            comp_staff_quantity=staff;
            comp_revenue=revenue;
            comp_import_raw_diamonds=import_raw_diamonds;
            comp_export_raw_diamonds=export_raw_diamonds;
            comp_ceo=ceo;
        }

        void displayData(){
            cout<<"\n..................................";
            cout<<"Company ID                 : "<<comp_id<<endl;
            cout<<"Company Name               : "<<comp_name<<endl;
            cout<<"Company Staff              : "<<comp_staff_quantity<<endl;
            cout<<"Company Revenue            : "<<comp_revenue<<endl;
            cout<<"Company import raw diamonds: "<<comp_import_raw_diamonds<<endl;
            cout<<"Company export raw diamonds: "<<comp_export_raw_diamonds<<endl;
            cout<<"Company ceo                : "<<comp_ceo<<endl;
        }

        //destructor
        ~DiamondsCompany(){

        }
        

};

int main(){

    int n;
    cout<<"Enter number of Diamonds Companies: ";
    cin>>n;

    DiamondsCompany obj[n];

    for(int i=0; i<n; i++){

        int id, staff, import_raw_diamonds,export_raw_diamonds;
        string name, ceo;
        double revenue;

        cout<<"\n...........Enter company details.............\n"<<i+1<<endl;;

         cout << "Company ID: ";
        cin >> id;

        cin.ignore();
        cout << "Company Name: ";
        getline(cin, name);

        cout << "Company Staff: ";
        cin >> staff;

        cout << "Company Revenue: ";
        cin >> revenue;

        cout << "Import Raw Diamonds: ";
        cin >> import_raw_diamonds;

        cout << "Export Raw Diamonds: ";
        cin >> export_raw_diamonds;
        cin.ignore();

        cout << "Company CEO: ";
        getline(cin, ceo);

        obj[i]=DiamondsCompany( id, name, staff, revenue, import_raw_diamonds, export_raw_diamonds, ceo);

    }

    for(int i = 0; i < n; i++) {
       obj[i].displayData();
    }



    return 0;
}
