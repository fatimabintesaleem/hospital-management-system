#include <iostream> 

using namespace std; 

 

// Structure to store patient information 

struct Patient { 

    int id; 

    string name; 

    int age; 

    string disease; 

}; 

 

// array to store patients 

Patient patients[50]; 

int count = 0;   

 

// Function to add  patient 

void Add_Patient() { 

    cout << "Enter Patient ID: "; 

    cin >> patients[count].id; 

     

    cout << "Enter Patient Name: "; 

    cin >> patients[count].name; 

     

    cout << "Enter Patient Age: "; 

    cin >> patients[count].age; 

     

    cout << "Enter Disease: "; 

    cin >> patients[count].disease; 

 

    count++; 

    cout << "Patient record added successfully."<<endl; 

} 

// Function to display all patients 

void Display_Patients() { 

    if (count == 0) { 

        cout << "No patient record available."<<endl; 

        return; 

    } 

 

    cout << "\n--- Patient Records ---\n"; 

    for (int i = 0; i < count; i++) { 

    	 

        cout << "Patient ID: " << patients[i].id << endl; 

        cout << "Name: " << patients[i].name << endl; 

        cout << "Age: " << patients[i].age << endl; 

        cout << "Disease: " << patients[i].disease << endl; 

       

    } 

} 

 

// Function to search a patient  

void Search_Patient() { 

    int searchId; 

    bool found = false; 

 

    cout << "\nEnter Patient ID to search: "; 

    cin >> searchId; 

 

    for (int i = 0; i < count; i++) { 

        if (patients[i].id == searchId) { 

            cout << "\nPatient Found\n"; 

            cout << "Name: " << patients[i].name << endl; 

            cout << "Age: " << patients[i].age << endl; 

            cout << "Disease: " << patients[i].disease << endl; 

            found = true; 

            break; 

        } 

    } 

 

    if (!found) { 

        cout << "Patient record not found."<<endl; 

    } 

} 

//main functionn 

int main() { 

    int choice; 

 

    do { 

        cout << "\n--- Hospital Management System ---\n"; 

        cout << "1. Add Patient\n"; 

        cout << "2. Display Patients\n"; 

        cout << "3. Search Patient\n"; 

        cout << "4. Exit\n"; 

        cout << "Enter your choice: "; 

        cin >> choice; 

 

        if (choice == 1)  

Add_Patient();            //call to add_patient function 

        else if (choice == 2)  

Display_Patients();           //call to display_patient function 

        else if (choice == 3) 

 Search_Patient();           //call to search_patient function 

        else if (choice == 4) 

 cout << "Program exited."<<endl; 

        else 

 cout << "Invalid choice. Please try again."<<endl; 

 

    } while (choice != 4); 

 

    return 0; 

} 