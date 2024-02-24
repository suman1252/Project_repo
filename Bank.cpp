#include <iostream>
#include <vector>

class Account {
private:
    int accountNumber;
    double balance;
    std::vector<std::string> transactions;

public:
    Account(int accNumber, double initialBalance = 0) : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        transactions.push_back("Deposit: +$" + std::to_string(amount));
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactions.push_back("Withdrawal: -$" + std::to_string(amount));
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    const std::vector<std::string>& getTransactions() const {
        return transactions;
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << "\nBalance: $" << balance << std::endl;
    }
};

class Customer {
private:
    int customerId;
    std::string name;
    std::string address;
    std::string phone;
    std::vector<Account> accounts;

public:
    Customer(int id, const std::string& n, const std::string& addr, const std::string& ph)
        : customerId(id), name(n), address(addr), phone(ph) {}

    void addAccount(const Account& acc) {
        accounts.push_back(acc);
    }

    void display() const {
        std::cout << "Customer ID: " << customerId << "\nName: " << name << "\nAddress: " << address
                  << "\nPhone: " << phone << std::endl;
    }

    void displayAccounts() const {
        std::cout << "Customer Accounts:" << std::endl;
        for (const auto& acc : accounts) {
            acc.display();
        }
    }
};

class Bank {
private:
    std::string name;
    std::vector<Customer> customers;

public:
    Bank(const std::string& bankName) : name(bankName) {}

    void addCustomer(const Customer& customer) {
        customers.push_back(customer);
    }

    Customer* getCustomerById(int customerId) {
        for (auto& customer : customers) {
            if (customer.getId() == customerId) {
                return &customer;
            }
        }
        return nullptr;
    }

    void display() const {
        std::cout << "Bank: " << name << std::endl;
    }
};

int main() {
    Bank myBank("MyBank");

    Customer customer1(1, "John Doe", "123 Main St", "555-1234");
    myBank.addCustomer(customer1);

    Account account1(101, 1000);
    customer1.addAccount(account1);

    customer1.display();
    account1.display();

    account1.deposit(500);
    account1.withdraw(200);

    account1.display();
    std::cout << "Transactions:" << std::endl;
    for (const auto& transaction : account1.getTransactions()) {
        std::cout << transaction << std::endl;
    }

    return 0;
}
