#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Login variables
    string usernames[3]; // To store attempted usernames
    string username, password;
    bool loginSuccess = false;

    // Student arrays (max 3 students)
    string studentNames[1000]; // Large array to store student names
    int studentAges[1000];     // Large array to store student ages
    int studentCount = 0;

    // Course array (max 3 courses)
    string courses[1000]; // Large array to store course names
    int courseCount = 0;

    int choice;

    // 1. 3 Login Attempts using FOR loop
    cout << "=== UNIVERSITY MANAGEMENT SYSTEM ===" << endl;
    cout << "Login (3 attempts):\n";

    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout << "\nAttempt " << attempt << ":\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        // Store username in array
        usernames[attempt - 1] = username;

        // 2 & 4. Check credentials using && operator
        if (username == "admin" && password == "1234")
        {
            loginSuccess = true;
            cout << "\nLogin Successful!\n";
            break;
        }
        else
        {
            cout << "Invalid credentials!\n";
            if (attempt < 3)
            {
                cout << "Attempts remaining: " << (3 - attempt) << endl;
            }
            else
            {
                cout << "Login Failed! System Locked.\n";
                cout << "Failed usernames: ";
                for (int i = 0; i < 3; i++)
                {
                    cout << usernames[i] << " ";
                }
                cout << endl;
            }
        }
        cin.ignore();
    }

    // 5. Main Menu after successful login
    if (loginSuccess)
    {
        while (true)
        {
            cout << "\n=== MAIN MENU ===\n";
            cout << "1. Add Student\n";
            cout << "2. View Students\n";
            cout << "3. Add Course\n";
            cout << "4. View Courses\n";
            cout << "5. Exit\n";
            cout << "Enter choice (1-5): ";
            cin >> choice;
            cin.ignore();

            // Menu options using if-else
            if (choice == 1)
            {
                // 6. Add Student
                if (studentCount < 3)
                {
                    cout << "\nEnter student name: ";
                    getline(cin, studentNames[studentCount]);
                    cout << "Enter student age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student added successfully!\n";
                    cin.ignore();
                }
                else
                {
                    cout << "Maximum students reached (3)!\n";
                }
            }
            else if (choice == 2)
            {
                // 7. View Students
                cout << "\n=== STUDENTS LIST ===\n";
                if (studentCount == 0)
                {
                    cout << "No students enrolled.\n";
                }
                else
                {
                    for (int i = 0; i < studentCount; i++)
                    {
                        cout << (i + 1) << ". " << studentNames[i]
                             << " (Age: " << studentAges[i] << ")\n";
                    }
                }
            }
            else if (choice == 3)
            {
                // 8. Add Course
                if (courseCount < 3)
                {
                    cout << "\nEnter course name: ";
                    getline(cin, courses[courseCount]);
                    courseCount++;
                    cout << "Course added successfully!\n";
                }
                else
                {
                    cout << "Maximum courses reached (3)!\n";
                }
            }
            else if (choice == 4)
            {
                // 9. View Courses
                cout << "\n=== COURSES LIST ===\n";
                if (courseCount == 0)
                {
                    cout << "No courses available.\n";
                }
                else
                {
                    for (int i = 0; i < courseCount; i++)
                    {
                        cout << (i + 1) << ". " << courses[i] << endl;
                    }
                }
            }
            else if (choice == 5)
            {
                // 10. Exit
                cout << "\nThank you for using University Management System!\n";
                break;
            }
            else
            {
                cout << "Invalid choice! Enter 1-5.\n";
            }
        }
    }

    return 0;
}