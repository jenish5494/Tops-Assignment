#include <iostream>
#include <math.h>
using namespace std;
class Event
{
public:
    int guest, time;
    float averageCost, totalCost, depositAmount, servers, costForOneserves, minute, food;
    string name, surname, event;
    void ditails()
    {
        // cout << "\n Enter customer Details : \n";
        cout << "...................Event Management System...................\n";

        cout << "\nEnter the name of the Event. ";
        cin >> event;
        cin.ignore();
        getline(cin, event);

        cout << "\nEnter first Name : ";
        cin >> name;
        // getline(cin, name);

        cout << "\nEnter last Name : ";
        cin >> surname;
        // getline(cin, surname);

        cout << "\nEnter the Number of Guests : ";
        cin >> guest;

        cout << "\nEnter the Number of Minutes in the event : ";
        cin >> time;
        cout << endl;
    }

    void cost()
    {
        // int costForOneserves, minute,  food;
        float minutes, hour, cost1, cost2;

        // 1. GET Number of Servers.
        servers = ceil(guest / 20); // 1 Server can handle 20 guests

        float CostPerHour = 18.50;
        float CostPerMinute = 0.40;
        cost1 = time / 60 * CostPerHour;
        cost2 = time % 60 * CostPerMinute;
        // 2. GET COST of ONE Server.
        costForOneserves = cost1 + cost2;

        // 3. GET COST for FOOD.
        food = float(guest) * 20.70; // CostOfDinner = 20.70;

        // 4. Get Average Cost Per Person
        averageCost = food / guest;

        // 5. GET TOTAL COST.
        totalCost = food + (costForOneserves * servers);

        // 6. GET DEPOSIT AMOUNT
        depositAmount = totalCost * 0.25;
    }

    void printvalues()
    {
        cout << "...................Event Management System...................\n";

        cout << "Total Number Of Servers : " << servers << endl; // 1 Server can handle 20 guests
        cout << "Total cost Of Servers : " << costForOneserves << endl;
        cout << "The Cost For Food Is : " << food << endl;
        cout << "Average Cost Per Person : " << averageCost << endl;

        cout << "\nTotal Cost Is : " << totalCost << endl;
        cout << "Please Deposite a 25% Deposit to reserve the event  " << endl;
        cout << "The Deposit Needed is : " << depositAmount << endl;
    }
};

int main()
{
    Event e1;
    e1.ditails();
    e1.cost();
    e1.printvalues();
    return 0;
}
