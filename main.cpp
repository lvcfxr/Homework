#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

class Topic {
public:
    std::string code;
    std::string name;

    Topic(const std::string& code, const std::string& name) : code(code), name(name) {}
};

class Author {
public:
    std::string firstName;
    std::string lastName;
    Topic bestTopic;
    int numberOfBooks;

    Author(const std::string& firstName, const std::string& lastName, const Topic& bestTopic, int numberOfBooks) 
        : firstName(firstName), lastName(lastName), bestTopic(bestTopic), numberOfBooks(numberOfBooks) {}
};

class Book {
private:
    std::vector<Author> authors;
    std::string title;
    Topic topic;

public:
    Book(const std::string& title, const Topic& topic) : title(title), topic(topic) {}

    std::string getTitle() const {
        return title;
    }

    Topic getTopic() const {
        return topic;
    }

    void addAuthor(const Author& author) {
        authors.push_back(author);
    }

    void removeAuthor(const std::string& firstName, const std::string& lastName) {

        authors.erase(std::remove_if(authors.begin(), authors.end(),[&firstName, &lastName](const Author& author)
            {
                return author.firstName == firstName && author.lastName == lastName;
            }), authors.end());
    }

    bool isAuthor(const std::string& firstName, const std::string& lastName) const {
        return std::any_of(authors.begin(), authors.end(),[&firstName, &lastName](const Author& author)
            {
                return author.firstName == firstName && author.lastName == lastName;
            });
    }

    double averageNumberOfBooks() const {

        if (authors.empty()) return 0.0; int totalBooks = std::accumulate(authors.begin(), authors.end(), 0, [](int sum, const Author& author) {
                return sum + author.numberOfBooks;
            });
        return static_cast<double>(totalBooks) / authors.size();
    }

    Author authorWithMaxBooks() const {
        if (authors.empty()) throw std::runtime_error("No authors in the book");

        return *std::max_element(authors.begin(), authors.end(),[](const Author& a, const Author& b) {
                return a.numberOfBooks < b.numberOfBooks;
            });
    }

    int countAuthorsWithBestMatchingTopic() const {
        return std::count_if(authors.begin(), authors.end(),[this](const Author& author) {
                return author.bestTopic.code == this->topic.code;
            });
    }

    void printBookInfo() const {
        std::cout << "Title: " << title << ", Topic: " << topic.name << std::endl;
    }
};

int main() {
    Topic science("001", "Science");
    Topic literature("002", "Literature");

    Book book("Interesting Book", science);

    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add author\n";
        std::cout << "2. Remove author\n";
        std::cout << "3. Check if author wrote the book\n";
        std::cout << "4. Get average number of books written by authors\n";
        std::cout << "5. Find author with max books\n";
        std::cout << "6. Count authors with matching best topic\n";
        std::cout << "7. Print book info\n";
        std::cout << "8. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string firstName, lastName, topicCode, topicName;

            int numberOfBooks;

            std::cout << "Enter author's first name: ";
            std::cin >> firstName;

            std::cout << "Enter author's last name: ";
            std::cin >> lastName;

            std::cout << "Enter author's best topic code: ";
            std::cin >> topicCode;

            std::cout << "Enter author's best topic name: ";
            std::cin >> topicName;

            std::cout << "Enter number of books written by author: ";
            std::cin >> numberOfBooks;

            Topic authorTopic(topicCode, topicName);

            Author newAuthor(firstName, lastName, authorTopic, numberOfBooks);

            book.addAuthor(newAuthor);

            break;
        }
        case 2: {
            std::string firstName, lastName;

            std::cout << "Enter author's first name: ";
            std::cin >> firstName;

            std::cout << "Enter author's last name: ";
            std::cin >> lastName;
            book.removeAuthor(firstName, lastName);
            break;
        }
        case 3: {
            std::string firstName, lastName;

            std::cout << "Enter author's first name: ";
            std::cin >> firstName;

            std::cout << "Enter author's last name: ";
            std::cin >> lastName;

            bool isAuthor = book.isAuthor(firstName, lastName);

            std::cout << (isAuthor ? "Yes" : "No") << ", this author wrote the book.\n";
            break;
        }
        case 4: {
            double avgBooks = book.averageNumberOfBooks();

            std::cout << "Average number of books written by authors: " << avgBooks << "\n";
            break;
        }
        case 5: {
            try {
                Author maxBooksAuthor = book.authorWithMaxBooks();

                std::cout << "Author with max books: " << maxBooksAuthor.firstName << " " << maxBooksAuthor.lastName << " (" << maxBooksAuthor.numberOfBooks << " books)\n";
            }
            catch (std::runtime_error& e) {
                std::cout << e.what() << "\n";
            }
            break;
        }
        case 6: {
            int count = book.countAuthorsWithBestMatchingTopic();

            std::cout << "Number of authors whose best topic matches the book's topic: " << count << "\n";
            break;
        }
        case 7: {
            book.printBookInfo();
            break;
        }
        case 8: {
            std::cout << "Exiting...\n";
            break;
        }
        default: {
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
        }
    } while (choice != 8);

    return 0;
}
