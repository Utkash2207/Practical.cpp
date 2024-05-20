#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence;

    // Accept a sentence from the user
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // Create a string stream from the sentence
    std::stringstream ss(sentence);
    std::string word;
    int wordCount = 0;

    // Count the number of words
    while (ss >> word) {
        wordCount++;
    }

    // Display the number of words
    std::cout << "Number of words in the sentence: " << wordCount << std::endl;

    return 0;
}
