#include <iostream>
#include <vector>
#include "../include/FileHandler.h"

using namespace std;

int main() {
    // 1. Define file paths and encryption key
    string originalFile = "C:/Users/SPARK/Desktop/101_project/TrustIssues-/test/test.txt";
    string encryptedFile = "C:/Users/SPARK/Desktop/101_project/TrustIssues-/test/locked.vega";
    string decryptedFile = "C:/Users/SPARK/Desktop/101_project/TrustIssues-/test/recovered.txt";
    string myKey = "Mariam_Vault_2026";

    cout << "--- Vega Vault Engine Test ---" << endl;

    // 2. Read the original file
    vector<unsigned char> data = FileHandler::readfile(originalFile);
    
    if (data.empty()) {
        cout << "Error: Could not find " << originalFile << "! Please create it first." << endl;
        return 1;
    }
    cout << "Step 1: File loaded successfully. Size: " << data.size() << " bytes." << endl;

    // 3. Encrypt the data
    FileHandler::encryptDecrypt(data, myKey); // scope resolution
    FileHandler::writefile(encryptedFile, data);
    cout << "Step 2: File encrypted and saved as " << encryptedFile << endl;

    // 4. Decrypt the data (Running XOR again with the same key)
    FileHandler::encryptDecrypt(data, myKey);
    FileHandler::writefile(decryptedFile, data);
    cout << "Step 3: File decrypted and saved as " << decryptedFile << endl;

    cout << "--- Test Complete. Check your folder! ---" << endl;

    return 0;
}