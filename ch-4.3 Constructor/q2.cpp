#include<iostream>
using namespace std;
#include<string>

class FastFoodCafe{

    private:

        int cafe_id,cafe_rating,cafe_establish_year,cafe_staf_quantity;
        string cafe_name,cafe_type,cafe_location;
       

    public:

    //default constructor
    
        FastFoodCafe(){
           
        cout<< " \nCafe Details..........\n";

        cout << "Cafe ID: ";
        cin >> cafe_id;
        cin.ignore();

        cout << "Cafe Name: ";
        getline(cin, cafe_name);

        cout << "Cafe Type: ";
        getline(cin, cafe_type);

        cout << "Cafe Rating: ";
        cin >> cafe_rating;

        cout << "Cafe Establish Year: ";
        cin >> cafe_establish_year;

        cout << "Cafe Staff Quantity: ";
        cin >> cafe_staf_quantity;
        cin.ignore();

        cout << "Cafe Location: ";
        getline(cin, cafe_location);
        }

        void displayData(){
            cout<<"\n..................................\n";
            cout<<"Cafe ID            : "<<cafe_id<<endl;
            cout<<"Cafe Name          : "<<cafe_name<<endl;
            cout<<"Cafe type          : "<<cafe_type<<endl;
            cout<<"Cafe rating        : "<<cafe_rating<<endl;
            cout<<"Cafe location      : "<<cafe_location<<endl;
            cout<<"Cafe establish year: "<<cafe_establish_year<<endl;
            cout<<"Cafe staf quantity : "<<cafe_staf_quantity<<endl;
        }

        //destructor
        ~FastFoodCafe(){

        }
        

};

int main(){

    int n;
    cout<<"\nEnter number of Fast Food Cafe:";
    cin>>n;

    FastFoodCafe obj[n];

    
    for(int i = 0; i < n; i++) {

        cout<<"\nFast Food Cafe Details......."<<i+1<<endl;
       obj[i].displayData();
    }



    return 0;
}
