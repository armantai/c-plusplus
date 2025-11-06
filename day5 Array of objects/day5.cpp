#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    // Setter function to input data
    void setData() {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;
        cin.ignore();

        cout << "Enter Hotel Name: ";
        getline(cin, hotel_name);

        cout << "Enter Hotel Type (e.g., Hotel/Motel): ";
        getline(cin, hotel_type);

        cout << "Enter Hotel Rating (1 to 7 Star): ";
        cin >> hotel_rating;
        cin.ignore();

        cout << "Enter Hotel Location (City Name): ";
        getline(cin, hotel_location);

        cout << "Enter Hotel Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Hotel Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Hotel Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    // Getter function to display data
    void displayData() const {
        cout << "\n------------------------------";
        cout << "\nHotel ID: " << hotel_id;
        cout << "\nHotel Name: " << hotel_name;
        cout << "\nHotel Type: " << hotel_type;
        cout << "\nHotel Rating: " << hotel_rating << " Star";
        cout << "\nHotel Location: " << hotel_location;
        cout << "\nHotel Establish Year: " << hotel_establish_year;
        cout << "\nHotel Staff Quantity: " << hotel_staff_quantity;
        cout << "\nHotel Room Quantity: " << hotel_room_quantity;
        cout << "\n------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel hotels[n]; // Array of objects

    cout << "\n--- Enter Hotel Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Hotel " << i + 1 << ":\n";
        hotels[i].setData();
    }

    cout << "\n\n=== Displaying Hotel Information ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nHotel " << i + 1 << " Details:";
        hotels[i].displayData();
    }

    return 0;
}
