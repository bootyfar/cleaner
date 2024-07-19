#include <iostream>
#include <cstdlib> // For system()
#include <chrono>  // For timing
#include <thread>  // For sleep
#include <string>  // For string operations

using namespace std;
using namespace std::chrono;

// Global variable to store license key status
int keyStatusDays = 0;

void simulateLoading(int durationMs) {
    const int totalSteps = 20;
    const int stepDurationMs = durationMs / totalSteps;

    cout << "[";
    for (int i = 0; i < totalSteps; ++i) {
        cout << "=";
        cout.flush();
        this_thread::sleep_for(milliseconds(stepDurationMs));
    }
    cout << "] Done!" << endl;
}

void validateLicenseKey(string enteredKey) {
    // Compare entered key with the valid key
    if (enteredKey == "pblMKsWsP7") {
        cout << "License key is valid." << endl;
        keyStatusDays = 7; // Set key status to 7 days
    }
    else {
        cout << "Invalid license key. Program will exit." << endl;
        exit(0); // Exit program if key is invalid
    }
}

void runSystemCleanup() {
    cout << "Performing system cleanup..." << endl;
    system("echo Cleaning temporary files...");
    simulateLoading(3000); // Simulate cleanup process
    system("echo Removing old logs and caches...");
    simulateLoading(2000); // Simulate cleaning old logs
    system("echo Deleting unnecessary registry entries...");
    simulateLoading(2500); // Simulate registry cleanup
    cout << "System cleanup complete." << endl;
}

void optimizeFortnitePerformance() {
    cout << "Optimizing Fortnite performance..." << endl;
    system("echo Analyzing game settings...");
    simulateLoading(1500); // Simulate settings analysis
    system("echo Adjusting GPU and CPU priority for Fortnite...");
    simulateLoading(2000); // Simulate priority adjustment
    system("echo Tweaking network settings for low latency...");
    simulateLoading(1800); // Simulate network settings optimization
    cout << "Fortnite optimization complete." << endl;
}

void adjustGameplaySettings() {
    cout << "Adjusting settings for smoother gameplay..." << endl;
    system("echo Setting optimal screen resolution and refresh rate...");
    simulateLoading(2000); // Simulate resolution and refresh rate adjustment
    system("echo Configuring sound settings for immersive experience...");
    simulateLoading(1500); // Simulate sound settings configuration
    system("echo Optimizing mouse sensitivity and key bindings...");
    simulateLoading(1800); // Simulate sensitivity and key bindings optimization
    cout << "Gameplay settings adjustment complete." << endl;
}

void cleanOutdatedDrivers() {
    cout << "Cleaning outdated drivers..." << endl;
    system("echo Scanning for outdated drivers...");
    simulateLoading(2500); // Simulate driver scan
    system("echo Removing outdated driver versions...");
    simulateLoading(2000); // Simulate driver removal
    cout << "Driver cleaning complete." << endl;
}

void removeDriverRemnants() {
    cout << "Removing unnecessary driver remnants..." << endl;
    system("echo Deleting leftover driver files...");
    simulateLoading(1800); // Simulate remnants deletion
    system("echo Clearing driver registry entries...");
    simulateLoading(1500); // Simulate registry cleanup
    cout << "Driver remnants removal complete." << endl;
}

int main() {
    cout << "Welcome toWindows Fortnite Optimizer and Driver Cleaner!" << endl;

    string enteredKey;
    cout << "Enter license key: ";
    cin >> enteredKey;

    validateLicenseKey(enteredKey);

    if (keyStatusDays > 0) {
        cout << "License key status: " << keyStatusDays << " days remaining." << endl;

        int choice;
        do {
            cout << "\nSelect an option:" << endl;
            cout << "1. Run System Cleanup" << endl;
            cout << "2. Optimize Fortnite Performance" << endl;
            cout << "3. Adjust Gameplay Settings" << endl;
            cout << "4. Clean Outdated Drivers" << endl;
            cout << "5. Remove Driver Remnants" << endl;
            cout << "6. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                runSystemCleanup();
                break;
            case 2:
                optimizeFortnitePerformance();
                break;
            case 3:
                adjustGameplaySettings();
                break;
            case 4:
                cleanOutdatedDrivers();
                break;
            case 5:
                removeDriverRemnants();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 6);
    }

    return 0;
}
