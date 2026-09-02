#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <string>
using namespace std;

// ============================================================
// SCHOLARSHIP ELIGIBILITY SYSTEM
// DSA Project in C++
//
// DSA Used:
// 1. Vector       -> Store student records
// 2. Queue        -> Process applications
// 3. Stack        -> Store processing history
// 4. Merge Sort   -> Rank students by scholarship score
// 5. Binary Search-> Search student by ID
// ============================================================


// ============================================================
// STUDENT STRUCTURE
// ============================================================

struct Student {
    int id;
    string name;
    float cgpa;
    float familyIncome;
    float attendance;
    int extracurricular;

    float scholarshipScore;
    bool eligible;
};


// ============================================================
// SCHOLARSHIP SCORE CALCULATION
// ============================================================

float calculateScore(const Student& s) {

    float score = 0;

    // CGPA contribution: 50 marks
    score += (s.cgpa / 4.00) * 50;

    // Attendance contribution: 20 marks
    score += (s.attendance / 100) * 20;

    // Family income contribution: 20 marks
    // Lower income gets higher score
    if (s.familyIncome <= 15000)
        score += 20;
    else if (s.familyIncome <= 30000)
        score += 15;
    else if (s.familyIncome <= 50000)
        score += 10;
    else
        score += 5;

    // Extracurricular contribution: 10 marks
    if (s.extracurricular)
        score += 10;

    return score;
}


// ============================================================
// ELIGIBILITY CHECK
// ============================================================

bool checkEligibility(const Student& s) {

    /*
       Basic scholarship requirements:

       CGPA        >= 3.50
       Attendance  >= 75%
       Income      <= 50000
    */

    if (s.cgpa >= 3.50 &&
        s.attendance >= 75 &&
        s.familyIncome <= 50000) {

        return true;
    }

    return false;
}


// ============================================================
// UPDATE STUDENT INFORMATION
// ============================================================

void prepareStudent(Student& s) {

    s.scholarshipScore = calculateScore(s);
    s.eligible = checkEligibility(s);
}


// ============================================================
// DISPLAY ONE STUDENT
// ============================================================

void displayStudent(const Student& s) {

    cout << "\n----------------------------------------\n";

    cout << "Student ID       : " << s.id << endl;
    cout << "Name             : " << s.name << endl;
    cout << "CGPA             : " << fixed << setprecision(2)
         << s.cgpa << endl;
    cout << "Family Income    : " << s.familyIncome << endl;
    cout << "Attendance       : " << s.attendance << "%" << endl;

    cout << "Extracurricular  : ";

    if (s.extracurricular)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "Scholarship Score: "
         << s.scholarshipScore << "/100" << endl;

    cout << "Eligibility      : ";

    if (s.eligible)
        cout << "ELIGIBLE";
    else
        cout << "NOT ELIGIBLE";

    cout << endl;

    cout << "----------------------------------------\n";
}


// ============================================================
// MERGE FUNCTION
// ============================================================

void merge(vector<Student>& students,
           int left,
           int mid,
           int right) {

    vector<Student> temp;

    int i = left;
    int j = mid + 1;

    // Compare scholarship scores
    while (i <= mid && j <= right) {

        if (students[i].scholarshipScore >
            students[j].scholarshipScore) {

            temp.push_back(students[i]);
            i++;
        }
        else {
            temp.push_back(students[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(students[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(students[j]);
        j++;
    }

    // Copy back
    for (int k = 0; k < temp.size(); k++) {
        students[left + k] = temp[k];
    }
}


// ============================================================
// MERGE SORT
// ============================================================

void mergeSort(vector<Student>& students,
               int left,
               int right) {

    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(students, left, mid);

    mergeSort(students, mid + 1, right);

    merge(students, left, mid, right);
}


// ============================================================
// SORT BY STUDENT ID
// Used before Binary Search
// ============================================================

void sortByID(vector<Student>& students) {

    // Simple insertion sort for ID ordering
    for (int i = 1; i < students.size(); i++) {

        Student key = students[i];

        int j = i - 1;

        while (j >= 0 &&
               students[j].id > key.id) {

            students[j + 1] = students[j];
            j--;
        }

        students[j + 1] = key;
    }
}


// ============================================================
// BINARY SEARCH
// Search student by ID
// ============================================================

int binarySearch(const vector<Student>& students,
                 int id) {

    int left = 0;
    int right = students.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (students[mid].id == id)
            return mid;

        else if (students[mid].id < id)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}


// ============================================================
// DISPLAY ALL STUDENTS
// ============================================================

void displayAll(const vector<Student>& students) {

    if (students.empty()) {

        cout << "\nNo student records available.\n";
        return;
    }

    cout << "\n\n================ STUDENT RECORDS ================\n";

    for (const Student& s : students) {

        cout << "\nID: " << s.id;
        cout << "\nName: " << s.name;
        cout << "\nCGPA: " << s.cgpa;
        cout << "\nIncome: " << s.familyIncome;
        cout << "\nAttendance: " << s.attendance << "%";

        cout << "\nScholarship Score: "
             << s.scholarshipScore;

        cout << "\nStatus: ";

        if (s.eligible)
            cout << "Eligible";
        else
            cout << "Not Eligible";

        cout << "\n-----------------------------------------------";
    }

    cout << endl;
}


// ============================================================
// SHOW SCHOLARSHIP RANKING
// ============================================================

void showRanking(vector<Student> students) {

    if (students.empty()) {

        cout << "\nNo students available for ranking.\n";
        return;
    }

    // DSA: Merge Sort
    mergeSort(students, 0, students.size() - 1);

    cout << "\n\n================ SCHOLARSHIP RANKING ================\n";

    cout << left
         << setw(8) << "Rank"
         << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(10) << "CGPA"
         << setw(15) << "Score"
         << "Status\n";

    cout << "----------------------------------------------------------\n";

    int rank = 1;

    for (const Student& s : students) {

        cout << left
             << setw(8) << rank
             << setw(10) << s.id
             << setw(20) << s.name
             << setw(10) << s.cgpa
             << setw(15) << s.scholarshipScore;

        if (s.eligible)
            cout << "Eligible";
        else
            cout << "Not Eligible";

        cout << endl;

        rank++;
    }
}


// ============================================================
// ADD STUDENT
// ============================================================

void addStudent(vector<Student>& students,
                queue<int>& applicationQueue) {

    Student s;

    cout << "\nEnter Student ID: ";
    cin >> s.id;

    // Check duplicate ID
    for (const Student& existing : students) {

        if (existing.id == s.id) {

            cout << "\nStudent ID already exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter CGPA (0.00 - 4.00): ";
    cin >> s.cgpa;

    while (s.cgpa < 0 || s.cgpa > 4) {

        cout << "Invalid CGPA. Enter again: ";
        cin >> s.cgpa;
    }

    cout << "Enter Family Monthly Income: ";
    cin >> s.familyIncome;

    cout << "Enter Attendance Percentage: ";
    cin >> s.attendance;

    while (s.attendance < 0 || s.attendance > 100) {

        cout << "Invalid attendance. Enter again: ";
        cin >> s.attendance;
    }

    cout << "Participated in Extracurricular Activities?\n";
    cout << "1. Yes\n";
    cout << "0. No\n";
    cout << "Enter choice: ";
    cin >> s.extracurricular;

    // Calculate score and eligibility
    prepareStudent(s);

    // DSA: Vector
    students.push_back(s);

    // DSA: Queue
    applicationQueue.push(s.id);

    cout << "\nStudent application added successfully!\n";

    displayStudent(s);
}


// ============================================================
// SEARCH STUDENT
// ============================================================

void searchStudent(vector<Student> students) {

    if (students.empty()) {

        cout << "\nNo student records available.\n";
        return;
    }

    int id;

    cout << "\nEnter Student ID to search: ";
    cin >> id;

    // Sort by ID first
    sortByID(students);

    // DSA: Binary Search
    int index = binarySearch(students, id);

    if (index != -1) {

        cout << "\nStudent Found!\n";

        displayStudent(students[index]);
    }
    else {

        cout << "\nStudent not found.\n";
    }
}


// ============================================================
// PROCESS APPLICATION
// ============================================================

void processApplication(
    vector<Student>& students,
    queue<int>& applicationQueue,
    stack<int>& history) {

    if (applicationQueue.empty()) {

        cout << "\nNo pending applications.\n";
        return;
    }

    // DSA: Queue
    int id = applicationQueue.front();

    applicationQueue.pop();

    cout << "\nProcessing application for Student ID: "
         << id << endl;

    for (Student& s : students) {

        if (s.id == id) {

            cout << "\nApplication processed successfully.";

            displayStudent(s);

            // DSA: Stack
            history.push(id);

            return;
        }
    }
}


// ============================================================
// SHOW PROCESSING HISTORY
// ============================================================

void showHistory(stack<int> history) {

    if (history.empty()) {

        cout << "\nNo applications processed yet.\n";
        return;
    }

    cout << "\n\n=========== PROCESSING HISTORY ===========\n";

    int count = 1;

    // DSA: Stack
    while (!history.empty()) {

        cout << count
             << ". Student ID: "
             << history.top()
             << endl;

        history.pop();

        count++;
    }

    cout << "==========================================\n";
}


// ============================================================
// SHOW STATISTICS
// ============================================================

void showStatistics(const vector<Student>& students) {

    if (students.empty()) {

        cout << "\nNo data available.\n";
        return;
    }

    int eligible = 0;
    int notEligible = 0;

    float totalScore = 0;

    for (const Student& s : students) {

        totalScore += s.scholarshipScore;

        if (s.eligible)
            eligible++;
        else
            notEligible++;
    }

    float averageScore =
        totalScore / students.size();

    cout << "\n\n================ STATISTICS ================\n";

    cout << "Total Applications : "
         << students.size() << endl;

    cout << "Eligible Students  : "
         << eligible << endl;

    cout << "Not Eligible       : "
         << notEligible << endl;

    cout << "Average Score      : "
         << fixed << setprecision(2)
         << averageScore << endl;

    cout << "============================================\n";
}


// ============================================================
// MAIN MENU
// ============================================================

void showMenu() {

    cout << "\n\n";
    cout << "====================================================\n";
    cout << "        SCHOLARSHIP ELIGIBILITY SYSTEM              \n";
    cout << "====================================================\n";

    cout << "1. Add Student Application\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student by ID\n";
    cout << "4. Process Next Application\n";
    cout << "5. Scholarship Ranking\n";
    cout << "6. Application Processing History\n";
    cout << "7. Scholarship Statistics\n";
    cout << "8. Exit\n";

    cout << "====================================================\n";
    cout << "Enter your choice: ";
}


// ============================================================
// MAIN FUNCTION
// ============================================================

int main() {

    // --------------------------------------------------------
    // DSA DATA STRUCTURES
    // --------------------------------------------------------

    vector<Student> students;

    queue<int> applicationQueue;

    stack<int> processingHistory;


    int choice;

    do {

        showMenu();

        cin >> choice;

        switch (choice) {

            case 1:

                addStudent(
                    students,
                    applicationQueue
                );

                break;


            case 2:

                displayAll(students);

                break;


            case 3:

                searchStudent(students);

                break;


            case 4:

                processApplication(
                    students,
                    applicationQueue,
                    processingHistory
                );

                break;


            case 5:

                showRanking(students);

                break;


            case 6:

                showHistory(processingHistory);

                break;


            case 7:

                showStatistics(students);

                break;


            case 8:

                cout << "\nThank you for using "
                     << "Scholarship Eligibility System!\n";

                break;


            default:

                cout << "\nInvalid choice! "
                     << "Please try again.\n";
        }

    } while (choice != 8);


    return 0;
}