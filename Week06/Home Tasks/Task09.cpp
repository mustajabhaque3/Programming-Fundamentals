#include <iostream>
using namespace std;

int main()
{
    string books[100];   // Book titles
    int bookStatus[100]; // 1=Available, 0=Borrowed
    int bookCount = 0;
    int choice;

    cout << "=== LIBRARY MANAGEMENT SYSTEM ===\n";

    while (true)
    {
        // Display Menu
        cout << "\n========== MENU ==========\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. Return Books\n"; // Fixed: Added Return option
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        if (choice == 1)
        {
            // 1. Add Books
            cout << "\n--- ADD BOOK ---\n";
            if (bookCount < 100)
            {
                cout << "Enter book title: ";
                getline(cin, books[bookCount]);
                bookStatus[bookCount] = 1; // Mark as Available
                bookCount++;
                cout << "Book added successfully!\n";
            }
            else
            {
                cout << "Library is full! Cannot add more books.\n";
            }
        }
        else if (choice == 2)
        {
            // 2. View Books
            cout << "\n--- LIBRARY BOOKS ---\n";
            if (bookCount == 0)
            {
                cout << "No books in library.\n";
            }
            else
            {
                cout << "Total Books: " << bookCount << endl;
                for (int i = 0; i < bookCount; i++)
                {
                    cout << (i + 1) << ". \"" << books[i]
                         << "\" [" << (bookStatus[i] ? "Available" : "Borrowed") << "]\n";
                }
            }
        }
        else if (choice == 3)
        {
            // 3. Borrow Books
            cout << "\n--- BORROW BOOK ---\n";
            if (bookCount == 0)
            {
                cout << "No books available to borrow.\n";
            }
            else
            {
                cout << "Enter book number to borrow: ";
                int bookNum;
                cin >> bookNum;
                cin.ignore();

                if (bookNum >= 1 && bookNum <= bookCount)
                {
                    int index = bookNum - 1;
                    if (bookStatus[index])
                    {
                        bookStatus[index] = 0; // Mark as Borrowed
                        cout << "Book \"" << books[index] << "\" borrowed successfully!\n";
                    }
                    else
                    {
                        cout << "Book \"" << books[index] << "\" is already borrowed!\n";
                    }
                }
                else
                {
                    cout << "Invalid book number!\n";
                }
            }
        }
        else if (choice == 4)
        {
            // 4. Return Books
            cout << "\n--- RETURN BOOK ---\n";
            cout << "Enter book number to return: ";
            int bookNum;
            cin >> bookNum;
            cin.ignore();

            if (bookNum >= 1 && bookNum <= bookCount)
            {
                int index = bookNum - 1;
                if (!bookStatus[index])
                {
                    bookStatus[index] = 1; // Mark as Available
                    cout << "Book \"" << books[index] << "\" returned successfully!\n";
                }
                else
                {
                    cout << "Book \"" << books[index] << "\" is already available!\n";
                }
            }
            else
            {
                cout << "Invalid book number!\n";
            }
        }
        else if (choice == 5)
        {
            // 5. Exit
            cout << "\nThank you for using Library Management System!\n";
            cout << "Goodbye! 📚\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Please enter 1-5.\n";
        }
    }

    return 0;
}