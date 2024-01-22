#include <iostream>
#include <vector>

// Клас для роботи з базою даних
class DatabaseManager {
public:
    void connect() {
        // Логіка для підключення до бази даних
        std::cout << "Connected to the database\n";
    }

    void query(const std::string& sql) {
        // Логіка для виконання SQL-запиту
        std::cout << "Executing query: " << sql << "\n";
    }

    void disconnect() {
        // Логіка для відключення від бази даних
        std::cout << "Disconnected from the database\n";
    }
};

// Клас для обробки користувацького інтерфейсу
class UserInterface {
public:
    void displayMessage(const std::string& message) {
        // Логіка для виведення повідомлення на екран
        std::cout << message << "\n";
    }

    std::string getUserInput() {
        // Логіка для отримання введення від користувача
        std::string input;
        std::cout << "Enter your input: ";
        std::cin >> input;
        return input;
    }
};

int main() {
    // Використання класів, що відповідають за конкретні відповідальності
    DatabaseManager dbManager;
    UserInterface ui;

    dbManager.connect();
    ui.displayMessage("Connected to the database. Please enter your SQL query:");

    std::string userQuery = ui.getUserInput();
    dbManager.query(userQuery);

    dbManager.disconnect();
    ui.displayMessage("Disconnected from the database");

    return 0;
}
