#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

int main() {

    vector<string> drivers;
    queue<string> normalQueue;   
    priority_queue<string> vipQueue;  
    stack<string> undoStack;
    vector<string> rideHistory;

    int choice;
    string id, driver;
    int type;

    do {
        cout << " RIDE BOOKING SYSTEM (VIP)\n";
        cout << "1. Add Driver\n";
        cout << "2. Request Ride\n";
        cout << "3. Assign Driver\n";
        cout << "4. Complete Ride\n";
        cout << "5. Show Ride History\n";
        cout << "6. Sort Rides\n";
        cout << "7. Search Ride\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // 1. Add Driver
        if (choice == 1) {
            cout << "Enter Driver ID: ";
            cin >> id;
            drivers.push_back(id);
            cout << "Driver added\n";
        }

        // 2. Request Ride
        else if (choice == 2) {
            cout << "Enter Ride ID: ";
            cin >> id;

            cout << "Enter type (1 = VIP, 0 = Normal): ";
            cin >> type;

            if (type == 1) {
                vipQueue.push(id);   
                cout << "VIP Ride requested\n";
            } else {
                normalQueue.push(id);
                cout << "Normal Ride requested\n";
            }
        }

        // 3. Assign Driver
        else if (choice == 3) {
            if (drivers.empty()) {
                cout << "No drivers available\n";
            }
            else if (vipQueue.empty() && normalQueue.empty()) {
                cout << "No rides available\n";
            }
            else {
                driver = drivers.back();
                drivers.pop_back();

                string ride;

                
                if (!vipQueue.empty()) {
                    ride = vipQueue.top();
                    vipQueue.pop();
                    cout << "VIP ";
                }
                else {
                    ride = normalQueue.front();
                    normalQueue.pop();
                }

                undoStack.push(ride);

                cout << "Driver " << driver << " assigned to Ride " << ride << endl;
            }
        }

        // 4. Complete Ride
        else if (choice == 4) {
            if (undoStack.empty()) {
                cout << "No ride to complete\n";
            } else {
                string ride = undoStack.top();
                undoStack.pop();

                rideHistory.push_back(ride);

                cout << "Ride " << ride << " completed\n";
            }
        }

        // 5. Show Ride History
        else if (choice == 5) {
            if (rideHistory.empty()) {
                cout << "No history\n";
            } else {
                cout << "Completed Rides:\n";
                for (int i = 0; i < rideHistory.size(); i++) {
                    cout << rideHistory[i] << endl;
                }
            }
        }

        // 6. Sort Rides
        else if (choice == 6) {
            if (rideHistory.empty()) {
                cout << "No rides to sort\n";
            } else {
                sort(rideHistory.begin(), rideHistory.end());
                cout << "Rides sorted\n";
            }
        }

        // 7. Binary Search
        else if (choice == 7) {
            if (rideHistory.empty()) {
                cout << "No rides available\n";
            } else {
                cout << "Enter Ride ID: ";
                cin >> id;

                int low = 0, high = rideHistory.size() - 1;
                int mid;
                bool found = false;

                while (low <= high) {
                    mid = (low + high) / 2;

                    if (rideHistory[mid] == id) {
                        found = true;
                        break;
                    }
                    else if (rideHistory[mid] < id) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }
                }

                if (found)
                    cout << "Ride found\n";
                else
                    cout << "Ride not found\n";
            }
        }

    } while (choice != 8);

    cout << "Program Ended\n";

    return 0;
}