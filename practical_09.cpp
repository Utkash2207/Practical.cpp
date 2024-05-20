#include <iostream>
#include <string>

// Define a structure for a book
struct Book {
    std::string title;
    std::string authorName;
    std::string publication;
    float price;
};

int main() {
    Book book;

    // Prompt the user to enter details of the book
    std::cout << "Enter details of the book:\n";
    std::cout << "Title: ";
    std::getline(std::cin >> std::ws, book.title);
    std::cout << "Author Name: ";
    std::getline(std::cin >> std::ws, book.authorName);
    std::cout << "Publication: ";
    std::getline(std::cin >> std::ws, book.publication);
    std::cout << "Price: ";
    std::cin >> book.price;

    // Display the book record
    std::cout << "\nBook Record:\n";
    std::cout << "Title: " << book.title << std::endl;
    std::cout << "Author Name: " << book.authorName << std::endl;
    std::cout << "Publication: " << book.publication << std::endl;
    std::cout << "Price: " << book.price << std::endl;

    return 0;
}
