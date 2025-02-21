#include <iostream>
#include <string>
using namespace std;

class GGS{
    set<string> brand;
    set<string> model;
    int year;
    int baseprice;
    
    int Calculate_Rental_Cost(string brand, int year){
        int final_price = brand*0.1*baseprice + (year-2025)*0.01*baseprice + baseprice;
        return final_price;
    }
};

class car extends GGS{
    int no_of_doors;
    
    int Calculate_Rental_Cost(){
        
    } 
}

int main() {
    
    return 0;
}
