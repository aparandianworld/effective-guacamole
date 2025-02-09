#include <iostream>
#include <format>

using std::cout;
using std::format;

struct library_catalog_card {
    const char* title {};
    const char* author {};
    const char* publisher {};
    const char* subject {};
    const char* isbn {};

    int year_published {};
    int year_aquired {};
    int quantity {};
};

int main() {
    library_catalog_card lcc {
        "Example Book Title",                
        "Example Book Author",         
        "Example Publisher",                 
        "Example Subject",                 
        "112233445566778899",    
        2020,                          
        2022,         
        10                           
    };

    cout << format("Title: {}\n", lcc.title);
    cout << format("Author: {}\n", lcc.author);
    cout << format("Publisher: {}\n", lcc.publisher);
    cout << format("Subject: {}\n", lcc.subject);
    cout << format("ISBN: {}\n", lcc.isbn);
    cout << format("Year published: {}\n", lcc.year_published);
    cout << format("Year aquired: {}\n", lcc.year_aquired);
    cout << format("Quantity: {}\n", lcc.quantity);

    return 0;
}