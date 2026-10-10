#include "book.h"

using namespace std;

Book::Book()
    : title(""),
      author(""),
      isbn(""),
      isAvailable(true),
      borrowerId("") {
}


Book::Book(const string& title, const string& author, const string& isbn)
    : title(title),
      author(author),
      isbn(isbn),
      isAvailable(true),
      borrowerId("") {
}

string Book::getTitle() const{
    return title;
}


string Book::getAuthor() const{
    return author;
}
string Book::getISBN() const{
    return isbn;
}
bool Book::getAvailability() const{
    return isAvailable;
}
string Book::getBorrowerId() const{
    return borrowerId;
}

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

void Book::setAvailability(bool available) {
    isAvailable = available;
}

void Book::setBorrowerId(const string& id) {
    borrowerId = id;
}


void Book::checkOut(const string& borrowerId) {
    setAvailability(false);
    setBorrowerId(borrowerId);
}

void Book::returnBook() {
    setAvailability(true);
    setBorrowerId("");
}
