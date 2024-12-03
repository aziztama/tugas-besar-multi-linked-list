//
// Created by Dimas Maulana Ahmad on 03/12/24.
//

#include "MLL.h"
#include <iostream>

using namespace std;

int main() {

    //tes
    DriverList driverList;



    driverList.insertDriver(1, "John Doe", "08123456789", "B1234XYZ", "Available");
    driverList.insertDriver(2, "Jane Smith", "08234567890", "B5678ABC", "Unavailable");

    
    cout << "Daftar Driver:" << endl;
    driverList.displayDrivers();

   
    Driver* driver = driverList.findDriver(1);
    if (driver) {
        cout << "Driver ditemukan: " << driver->name << endl;
    } else {
        cout << "Driver tidak ditemukan." << endl;
    }

    return 0;
}
