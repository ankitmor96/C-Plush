#include <iostream>
using namespace std;

class DiamondCompany {
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
   
    DiamondCompany(int id, string name, int staff, double revenue, 
                   int importRaw, int exportDia, string ceo) {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importRaw;
        comp_export_diamonds = exportDia;
        comp_ceo = ceo;
    }

    void display() {
        cout << "\nCompany ID: " << comp_id;
        cout << "\nCompany Name: " << comp_name;
        cout << "\nStaff Quantity: " << comp_staff_quantity;
        cout << "\nRevenue (Per Year): " << comp_revenue;
        cout << "\nRaw Diamonds Imported: " << comp_import_raw_diamonds;
        cout << "\nDiamonds Exported: " << comp_export_diamonds;
        cout << "\nCEO Name: " << comp_ceo << endl;
    }
   
};

int main() {
    int n;
    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id, staff, importRaw, exportDia;
        double revenue;
        string name, ceo;

        cout << "\nEnter Company ID: ";
        cin >> id;
        cout << "Enter Company Name: ";
        cin >> name;
        cout << "Enter Staff Quantity: ";
        cin >> staff;
        cout << "Enter Revenue: ";
        cin >> revenue;
        cout << "Enter Raw Diamonds Imported: ";
        cin >> importRaw;
        cout << "Enter Diamonds Exported: ";
        cin >> exportDia;
        cout << "Enter CEO Name: ";
        cin >> ceo;

        DiamondCompany d(id, name, staff, revenue, importRaw, exportDia, ceo);
        d.display();
    }

    return 0;
}
