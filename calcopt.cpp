#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Course {
public:
    string Cname;
    double Grade;
    int hours;

    double points() const {
        return Grade * hours;
    }
};

vector<Course> loadCourses(const string& filename) {
    vector<Course> courses;
    ifstream file(filename);
    if (file.is_open()) {
        Course course;
        while (file >> course.Cname >> course.Grade >> course.hours) {
            courses.push_back(course);
        }
        file.close();
        cout << "Data loaded from " << filename << endl;
    } else {
        cout << "Error: Unable to open file for reading." << endl;
    }
    return courses;
}

void saveCourses(const vector<Course>& courses, const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& course : courses) {
            file << course.Cname << " " << course.Grade << " " << course.hours << endl;
        }
        file.close();
        cout << "Data saved to " << filename << endl;
    } else {
        cout << "Error: Unable to open file for writing." << endl;
    }
}

double calculateGPA(const vector<Course>& courses) {
    double totalPoints = 0.0;
    int totalHours = 0;
    for (const auto& course : courses) {
        totalPoints += course.points();
        totalHours += course.hours;
    }
    if (totalHours == 0) {
        return 0.0; // Avoid division by zero
    }
    return totalPoints / totalHours;
}

void printCourses(const vector<Course>& courses) {
    cout << "Courses:" << endl;
    for (size_t i = 0; i < courses.size(); ++i) {
        cout << i + 1 << ". " << courses[i].Cname << ": Grade - " << courses[i].Grade << ", Hours - " << courses[i].hours << endl;
    }
}

void editCourses(vector<Course>& courses) {
    cout << "Select an option:" << endl;
    cout << "1. Edit existing course" << endl;
    cout << "2. Add new courses" << endl;

    int option;
    cin >> option;

    switch (option) {
        case 1: {
            printCourses(courses);
            int index;
            cout << "Enter the index of the course to edit or -1 to delete: ";
            cin >> index;
            if (index >= 1 && index <= static_cast<int>(courses.size())) {
                cout << "Enter new grade and hours for the course: ";
                cin >> courses[index - 1].Grade >> courses[index - 1].hours;
            } else if (index == -1) {
                cout << "Enter the index of the course to delete: ";
                cin >> index;
                if (index >= 1 && index <= static_cast<int>(courses.size())) {
                    courses.erase(courses.begin() + index - 1);
                    cout << "Course deleted" << endl;
                } else {
                    cout << "Invalid index" << endl;
                }
            } else {
                cout << "Invalid index" << endl;
            }
            break;
        }
        case 2: {
            int numNewCourses;
            cout << "Enter the number of new courses: ";
            cin >> numNewCourses;
            for (int i = 0; i < numNewCourses; ++i) {
                Course course;
                cout << "Enter course name, grade, and hours for course " << i + 1 << ": ";
                cin >> course.Cname >> course.Grade >> course.hours;
                courses.push_back(course);
            }
            cout << "New courses added" << endl;
            break;
        }
        default: {
            cout << "Invalid option" << endl;
            break;
        }
    }
}

int main() {
    string firstName;
    cout << "Enter student's first name: ";
    cin >> firstName;
    string filename = firstName + ".txt";

    cout << "Select an option:" << endl;
    cout << "1. Load existing data and calculate GPA" << endl;
    cout << "2. Load existing data, edit, and calculate GPA" << endl;
    cout << "3. Create new data, calculate GPA, and save" << endl;

    int option;
    cin >> option;

    vector<Course> courses;
    switch (option) {
        case 1: {
            courses = loadCourses(filename);
            printCourses(courses);
            cout << "GPA: " << calculateGPA(courses) << endl;
            break;
        }
        case 2: {
            courses = loadCourses(filename);
            editCourses(courses);
            printCourses(courses);
            saveCourses(courses, filename);
            cout << "GPA: " << calculateGPA(courses) << endl;
            break;
        }
        case 3: {
            int numCourses;
            cout << "Enter the number of courses: ";
            cin >> numCourses;
            courses.resize(numCourses);
            for (int i = 0; i < numCourses; ++i) {
                cout << "Enter course name, grade, and hours for course " << i + 1 << ": ";
                cin >> courses[i].Cname >> courses[i].Grade >> courses[i].hours;
            }
            // Save data to a text file
            saveCourses(courses, filename);
            cout << "GPA: " << calculateGPA(courses) << endl;
            break;
        }
        default: {
            cout << "Invalid option" << endl;
            break;
        }
    }

    return 0;
}