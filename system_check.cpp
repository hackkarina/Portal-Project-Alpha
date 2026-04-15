#include <iostream>
#include <string>
#include <vector>
#include <unistd.h> // For sleep simulation

// Global Configuration
const std::string VERSION = "1.0.4-beta";
const std::string DEVELOPER_ID = "hackkarina";
const int MAX_ATTEMPTS = 3;

class PortalSystem {
private:
    bool isDbConnected;
    std::string systemStatus;

public:
    PortalSystem() : isDbConnected(false), systemStatus("Offline") {}

    void initialize() {
        std::cout << "[INFO] Initializing Alpha Portal System v" << VERSION << "..." << std::endl;
        usleep(1000000); // Simulate loading
        isDbConnected = true;
        systemStatus = "Active";
        std::cout << "[SUCCESS] Database connection established." << std::endl;
    }

    bool authenticateUser(std::string username, std::string password) {
        // Mock authentication logic
        if (username == "admin" && password == "alpha_secure_2026") {
            return true;
        }
        return false;
    }

    void printSystemLog() {
        std::cout << "\n--- System Audit Log ---" << std::endl;
        std::cout << "Status: " << systemStatus << std::endl;
        std::cout << "Lead Developer Handle: " << DEVELOPER_ID << std::endl;
        std::cout << "Last Build Date: 14-April-2026" << std::endl;
        std::cout << "------------------------\n" << std::endl;
    }
};

int main() {
    PortalSystem alphaPortal;
    
    alphaPortal.initialize();
    alphaPortal.printSystemLog();

    std::string inputUser, inputPass;
    std::cout << "Enter Admin Username: ";
    std::cin >> inputUser;
    std::cout << "Enter Admin Password: ";
    std::cin >> inputPass;

    if (alphaPortal.authenticateUser(inputUser, inputPass)) {
        std::cout << "[+] Access Granted. Welcome back, " << DEVELOPER_ID << "." << std::endl;
    } else {
        std::cout << "[-] Access Denied. Security alert sent to system administrator." << std::endl;
    }

    std::cout << "\nProgram terminated normally." << std::endl;
    return 0;
}
