/* 
 * COMP2710 Spring 2025
 * Homework 4
 * Student Name:
 * Auburn UserID: 
 * Compiler used: [e.g., g++, Visual Studio, etc.]
 * 
 * Instructions:
 * [Students should add specific instructions from the PDF here]
 */

 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 #include <cassert>
 
 using namespace std;
 
 /* Function prototypes */
 void displayMenu();
 bool readFile(string filename, /* appropriate parameters for your data */);
 bool writeFile(string filename, /* appropriate parameters for your data */);
 /* Add other function prototypes as needed */
 
 /* Constants */
 const int MAX_SIZE = 100; // Adjust as needed
 
 int main() {
     cout << "Welcome to Homework 4!" << endl;
     
     // Variable declarations
     
     // Main program loop
     bool continueProgram = true;
     while (continueProgram) {
         displayMenu();
         int choice;
         cin >> choice;
         
         switch (choice) {
             case 1:
                 // Implement option 1
                 break;
             case 2:
                 // Implement option 2
                 break;
             case 3:
                 // Implement option 3
                 break;
             // Add more cases as needed
             
             case 0:
                 cout << "Thank you for using the program. Goodbye!" << endl;
                 continueProgram = false;
                 break;
             default:
                 cout << "Invalid option. Please try again." << endl;
         }
     }
     
     return 0;
 }
 
 /**
  * Displays the menu of options for the user.
  */
 void displayMenu() {
     cout << "\n*** MAIN MENU ***" << endl;
     cout << "1. [Option 1 description]" << endl;
     cout << "2. [Option 2 description]" << endl;
     cout << "3. [Option 3 description]" << endl;
     // Add more options as needed
     cout << "0. Exit the program" << endl;
     cout << "Enter your choice: ";
 }
 
 /**
  * Reads data from a file.
  * @param filename The name of the file to read from
  * [Add parameter descriptions as needed]
  * @return true if file was read successfully, false otherwise
  */
 bool readFile(string filename, /* appropriate parameters */) {
     ifstream inFile;
     inFile.open(filename.c_str());
     
     if (!inFile) {
         cout << "Error: Could not open file " << filename << endl;
         return false;
     }
     
     // Read data from file
     
     inFile.close();
     return true;
 }
 
 /**
  * Writes data to a file.
  * @param filename The name of the file to write to
  * [Add parameter descriptions as needed]
  * @return true if file was written successfully, false otherwise
  */
 bool writeFile(string filename, /* appropriate parameters */) {
     ofstream outFile;
     outFile.open(filename.c_str());
     
     if (!outFile) {
         cout << "Error: Could not open file " << filename << endl;
         return false;
     }
     
     // Write data to file
     
     outFile.close();
     return true;
 }
 
 /* 
  * Implement additional functions as required by the assignment.
  */
 