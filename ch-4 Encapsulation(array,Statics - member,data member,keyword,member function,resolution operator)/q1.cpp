#include<iostream>
using namespace std;

class Hotel{
    private:

        int hotel_id,hotel_rating,hotel_establish_year,hotel_staff_quantity,hotel_room_quantity;
        string hotel_name,hotel_type,hotel_location;

        static int totalHotelCount;

    public:
        void setData(int id,string name,string type,int rating,string location,int establish_year,int staff_quantity,int room_quantity){
            hotel_id=id;
            hotel_name=name;
            hotel_type=type;
            hotel_rating=rating;
            hotel_location=location;
            hotel_establish_year=establish_year;
            hotel_staff_quantity=staff_quantity;
            hotel_room_quantity=room_quantity;

            totalHotelCount++;
        } 

        void getData(){
            cout<<"\n............................................";
            cout<<"\nHotel ID: "<<hotel_id<<endl;
            cout<<"\nName: " <<hotel_name<<endl;
            cout<<"\nType: " <<hotel_type<<endl;
            cout<<"\nRating: " <<hotel_rating<<endl;
            cout<<"\nLocation: " <<hotel_location<<endl;
            cout<<"\nEstablish Year: " <<hotel_establish_year<<endl;
            cout<<"\nStaff Quantity: " <<hotel_staff_quantity<<endl;
            cout<<"\nRoom Quantity: " <<hotel_room_quantity<<endl;

        }
        
       static void count(){

            cout<<"Total hotels: "<<totalHotelCount <<endl;
        }     
};

int Hotel::totalHotelCount = 0;

int main(){

    int hotel;

    cout << "Enter number of hotels: ";
    cin >> hotel;
    

    Hotel h[hotel];

    for(int i=0; i<hotel; i++){
        int id,rating,establish_year,staff_quantity,room_quantity;
        string name,type,location;
        cout<<"\n................Hotel Details.................\n "<<i+1;

        cout<<"id:  ";
        cin>>id;
        cin.ignore();

        cout<<"Name:  ";
        getline(cin,name);

        cout<<"Type:  ";
        getline(cin,type);

        cout<<"Rating:  ";
        cin>>rating;
        cin.ignore();

        cout<<"Location:  ";
        getline(cin,location);

        cout<<"Establish Year:  ";
        cin>>establish_year;
        cin.ignore();

        cout<<"Staff Quantity:  ";
        cin>>staff_quantity;
        cin.ignore();

        cout<<"Room Quantity:  ";
        cin>>room_quantity;
        cin.ignore();


        h[i].setData( id, name, type, rating, location, establish_year, staff_quantity, room_quantity);
    }

    cout<<"\n...............All Hotel Details print...................\n";

    for(int i=0; i<hotel; i++){
        h[i].getData();
    }
    Hotel::count();

    return 0;
}