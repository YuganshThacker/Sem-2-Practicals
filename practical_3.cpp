#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class cars
{
public:
    string model_name;
    string fuel_type;
    float showroom_price, mileage;
    string transmission;
    float tank_capacity;
    int seating;
    string airbags;

    void set_model_name(string model_name)
    {
        this->model_name = model_name;
    }
    string get_model_name()
    {
        return model_name;
    }

    void set_fuel_type(string fuel_type)
    {
        this->fuel_type = fuel_type;
    }
    string get_fuel_type()
    {
        return fuel_type;
    }

    void set_showroom_price(float showroom_price)
    {
        this->showroom_price = showroom_price;
    }
    float get_showroom_price()
    {
        return showroom_price;
    }

    void set_mileage(float mileage)
    {
        this->mileage = mileage;
    }
    float get_mileage()
    {
        return mileage;
    }

    void set_transmission(string transmission)
    {
        this->transmission = transmission;
    }
    string get_transmission()
    {
        return transmission;
    }

    void set_tank_capacity(float tank_capacity)
    {
        this->tank_capacity = tank_capacity;
    }

    float get_tank_capacity()
    {
        return tank_capacity;
    }

    void set_seating(int seating)
    {
        this->seating = seating;
    }
    int get_seating()
    {
        return seating;
    }
    void set_airbags(string airbags)
    {
        this->airbags = airbags;
    }
    string get_airbags()
    {
        return airbags;
    }
    void input_details()
    {

        cout << "Enter Model Name : ";
        cin >> model_name;
        set_model_name(model_name);
        fflush(stdin);

        cout << "Enter Fuel Type : ";
        cin >> fuel_type;

        cout << "Enter ShowRoom price in (Lakhs): ";
        cin >> showroom_price;
        set_showroom_price(showroom_price);

        cout << "Enter Mileage : ";
        cin >> mileage;
        set_mileage(mileage);

        int nn;

        cout << "For Transmission Enter 1 for Manual and 2 for AMT: ";
        cin >> nn;
        switch(nn)
        {   case 1:
            transmission="Manual";
            break;
            case 2:
            transmission="AMT";
            break;
            default:
            exit;

        }
        set_transmission(transmission);

        cout << "Enter Tank Capacity : ";
        cin >> tank_capacity;
        set_tank_capacity(tank_capacity);

        cout << "Enter Seating : ";
        cin >> seating;
        set_seating(seating);

        cout << "Enter Yes or No for Airbags : ";
        cin >> airbags;
        set_airbags(airbags);
    }
    void output_details()
    {
        cout << " Model   "
             << "Fuel    "
             << "Price  "
             << "Mileage  "
             << "Transmission  "
             << "Seating Capacity  "
             << "Airbags" << endl;
        cout << get_model_name() << "  " << get_fuel_type() << "  " << get_showroom_price() << "    " << get_mileage() << "       " << get_transmission() << "           " << get_seating() << "                 " << get_airbags() << endl;
    }
};

int main()
{
    int option;
    int i;
    int n; // No of cars
    cout << "Enter Number of Cars :";
    cin >> n;
    cars a[n];
    for (i = 0; i < n; i++)
    {
        a[i].input_details();
    }
    system("CLS");
    cout << "WELCOME TO TATA MOTORS" << endl;
    cout << "GET THE CAR DETAILS AS PER YOUR PREFERENCE" << endl;
    cout << "(1)Model Name (2)Fuel Type (3)Price Range" << endl<<endl;
    cout << "ENTER YOUR OPTION: ";
    cin >> option;
    cout << "----------------------" << endl;
    switch (option)
    {
    case 1:
        cout << "LIST OF TATA CARS"<<endl;
        for (int i = 0; i < n; i++)
        {
            if (i % 5 == 0)
            {
                cout << endl;
            }
            cout << "(" << i + 1 << ")"
                 << " " << a[i].get_model_name();
        }
        int model_details;
        cout << endl
             << "CHOOSE YOUR CAR TO GET DETAILS: ";
        cin >> model_details;
        a[--model_details].output_details();
        break;

    case 2:
        int choice_fuel;
        cout << "TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS" << endl;
        cout << "(1)Petrol (2)Diesel (3)CNG (4)Electric" << endl;
        cin >> choice_fuel;
        switch (choice_fuel)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                if (a[i].get_fuel_type() == "petrol")
                {
                    a[i].output_details();
                }
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                if (a[i].get_fuel_type() == "diesel")
                {
                    a[i].output_details();
                }
            }
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                if (a[i].get_fuel_type() == "CNG")
                {
                    a[i].output_details();
                }
            }
            break;
        case 4:
            for (i = 0; i < n; i++)
            {
                if (a[i].get_fuel_type() == "electric")
                {
                    a[i].output_details();
                }
            }
            break;
        }
        break;
    case 3:
        float range;
        cout << "ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS: ";
        cin >> range;
        int flag=0;
        for (i = 0; i < n; i++)
        {
            if (range >= a[i].get_showroom_price())
            {
                a[i].output_details();
                flag++;
            }
        }
        if(flag==0)
        {
            cout << "NO CARS ARE AVAILABLE FOR THIS PRICE RANGE"<<endl;
        }
        break;
    }
}