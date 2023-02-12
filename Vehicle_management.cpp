#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

class vehicle {
    // các thành phần lớp vehicle
    private:
    int code;
    //
    string colour;
    float price;
    
    public: 
    vehicle(){
    }
    




    // Hàm nhập các thông tin của "xe"
    void Nhap() {
        cout << "Insert a vehicle" << endl;
        cout << "Code name: ";
        cin >> code;
        cout << endl << "Color: ";
        cin >> colour;
        cout << endl << "Price: ";
        cin >> price;  
        cout << endl;
    }


    // hiển thị các thông tin đã nhập ra màn hình
    void Hienthi() {
        cout << "Code name: " << code << endl; 
        cout << "Color: " << colour << endl;
        cout << "Price: " << price << endl;    
    }

};

// lớp xe oto thừa kế từ lớp vehicle 
class car : public vehicle {
    private: 
    int seats;
    public: 
    void Nhap() {
        vehicle::Nhap();
        cout << "please enter number of seats: ";
        cin >> seats;
    }
    void Hienthi() {
        vehicle::Hienthi();
        cout << "number of seats: " << seats;
    }
};

class motob : public vehicle {
    private: 
    float energy;
    public: 
    
    void Nhap() {
        vehicle::Nhap();
        cout << "please enter the energy consumed: ";
        cin >> energy;
    }
    void Hienthi() {
        vehicle::Hienthi();
        cout << "Energy consumed of the product: " << energy;
    }
};



int main() {
    vehicle xe[10];
    for (int i = 0; i < 3; i++) {
        xe[i].Nhap();
    }
    for (int i=0; i < 3; i++) {
        xe[i].Hienthi();
    }
}