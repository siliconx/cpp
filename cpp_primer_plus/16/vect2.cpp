#include <iostream>
#include <string>
#include <vector>

struct Review {
    std::string title;
    int rating;
};

bool FillReview(Review&);
void ShowReview(const Review&);

int main() {
    using std::cout;
    using std::vector;

    vector<Review> books;
    Review temp;

    while (FillReview(temp)) {
        books.push_back(temp);
    }

    int num = books.size();

    if (num > 0) {
        cout << "Thank you. You entered the following:\n"
            << "Rating\tBook\n";

        for (int i = 0; i < num; ++i) {
            ShowReview(books[i]);
        }

        cout << "Reprising:\n" << "Rating\tBook\n";
        vector<Review>::iterator pr;

        for (pr = books.begin(); pr != books.end(); ++pr) {
            ShowReview(*pr);
        }

        vector<Review> oldlist(books);

        if (num > 3) {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure:\n";
            for (pr = books.begin(); pr != books.end(); ++pr) {
                ShowReview(*pr);
            }
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After insertion:\n";
            for (pr = books.begin(); pr != books.end(); ++pr) {
                ShowReview(*pr);
            }
        }

        books.swap(oldlist);
        cout << "Swapping oldlist with books:\n";
        for (pr = books.begin(); pr != books.end(); ++pr) {
            ShowReview(*pr);
        }
    } else {
        cout << "Nothing entered, nothing gained.\n";
    }
}

bool FillReview(Review& r) {
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, r.title);
    if (r.title == "quit") {
        return false;
    }

    std::cout << "Enter book rating: ";
    std::cin >> r.rating;
    if (!std::cin) {
        return false;
    }

    while (std::cin.get() != '\n') {
        continue;
    }

    return true;
}

void ShowReview(const Review& r) {
    std::cout << r.rating << "\t" << r.title << std::endl;
}
