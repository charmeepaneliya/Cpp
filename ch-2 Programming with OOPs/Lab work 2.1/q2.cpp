    #include<iostream>
    using namespace std;


    class Car{

        public:
            int car_id,car_release_year;
            string car_color, car_company_name, car_model;
            

            void getData(){
                cout<<"\nEnter car id: ";
                cin>>car_id;
                cin.ignore();

                cout<<"Enter Company Name: ";
                getline (cin,car_company_name);

                cout<<"Enter color: ";
                getline(cin,car_color);

                cout<<"Enter Car Model: ";
                getline(cin,car_model);

                cout<<"Enter Car Release Year: ";
                cin>>car_release_year;

                
            }

            void displayData(){
                cout<<"\n-----Car Details------"<<endl;
                cout<<"Car ID: "<<car_id<<endl;
                cout<<"Company Name:"<<car_company_name<<endl;
                cout<<"Car Color: "<<car_color<<endl;
                cout<<"Car Model: "<<car_model<<endl;
                cout<<"Release Year: "<<car_release_year<<endl;
                
            }

        
    };

    int main(){

        Car c[4];

        for(int i=0; i<4; i++){
            cout<<"\nEnter Details of Car "<<i+1<<endl;
            c[i].getData();
        }

        for(int i=0; i<4; i++){
            c[i].displayData();
        }

        return 0;
    }