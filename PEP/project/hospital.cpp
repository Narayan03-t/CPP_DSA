#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

// ------ Array: Doctor information ------
const int MAX_DOCTORS = 5;
struct Doctor {
    string name;
    string specialty;
};
Doctor doctors[MAX_DOCTORS] = {
    {"Dr. A Sharma", "Cardiology"},
    {"Dr. B Singh", "Neurology"},
    {"Dr. C Varma", "Orthopedics"},
    {"Dr. D Patel", "Pediatrics"},
    {"Dr. E Khan", "General"}
};

// ------ Linked List: Treated Patients ------
struct PatientRecord {
    string name;
    int age;
    string symptoms;
    string severity;
    PatientRecord* next;
    PatientRecord(string n, int a, string s, string v)
        : name(n), age(a), symptoms(s), severity(v), next(nullptr) {}
};

// Active patient linked list head
PatientRecord* activeHead = nullptr;

// ------ Queue: Patients Waiting ------
struct Patient {
    string name;
    int age;
    string symptoms;
    string severity;
};

// Simple Queue implementation using vector (FIFO)
class PatientQueue {
    vector<Patient> q;
public:
    void enqueue(Patient p) { q.push_back(p); }
    bool empty() { return q.empty(); }
    Patient dequeue() {
        if(q.empty()) throw runtime_error("Queue empty!");
        Patient p = q.front();
        q.erase(q.begin());
        return p;
    }
    Patient& front() {
        if(q.empty()) throw runtime_error("Queue empty!");
        return q.front();
    }
};

// Emergency (priority) queue
class EmergencyQueue {
    vector<Patient> q;
public:
    void enqueue(Patient p) { q.insert(q.begin(), p); }
    bool empty() { return q.empty(); }
    Patient dequeue() {
        if(q.empty()) throw runtime_error("Queue empty!");
        Patient p = q.front();
        q.erase(q.begin());
        return p;
    }
};

// Undo/Redo stacks for patient record updates
stack<PatientRecord*> undoStack;
stack<PatientRecord*> redoStack;

// Main queues
PatientQueue normalQueue;
EmergencyQueue priorityQueue;

// ------ Functions ------

void registerPatient() {
    Patient p;
    cout << "Enter name: "; cin >> ws; getline(cin, p.name);
    cout << "Enter age: "; cin >> p.age;
    cout << "Enter symptoms: "; cin >> ws; getline(cin, p.symptoms);
    cout << "Severity (normal/emergency): "; cin >> p.severity;
    if (p.severity == "emergency") {
        priorityQueue.enqueue(p);
        cout << "Added to EMERGENCY queue.\n";
    } else {
        normalQueue.enqueue(p);
        cout << "Added to normal queue.\n";
    }
}

void servePatient() {
    Patient p;
    if (!priorityQueue.empty()) {
        p = priorityQueue.dequeue();
    } else if (!normalQueue.empty()) {
        p = normalQueue.dequeue();
    } else {
        cout << "No patients in queue.\n";
        return;
    }
    PatientRecord* newRec = new PatientRecord(p.name, p.age, p.symptoms, p.severity);
    // Add to treated patient list (linked list at HEAD)
    newRec->next = activeHead;
    activeHead = newRec;
    cout << "Patient served: " << p.name << endl;
}

void showActivePatients() {
    PatientRecord* curr = activeHead;
    if (!curr) {
        cout << "No active patients.\n";
        return;
    }
    cout << "Active Patients:\n";
    while (curr) {
        cout << "Name: " << curr->name << ", Age: " << curr->age
             << ", Symptoms: " << curr->symptoms << ", Severity: " << curr->severity << endl;
        curr = curr->next;
    }
}

void showDoctors() {
    cout << "Doctors:\n";
    for(int i=0; i<MAX_DOCTORS; i++) {
        cout << "Name: " << doctors[i].name << ", Speciality: " << doctors[i].specialty << endl;
    }
}

void updatePatientRecord() {
    string searchName;
    cout << "Enter patient name to update: "; cin >> ws; getline(cin, searchName);
    PatientRecord* curr = activeHead;
    while(curr && curr->name != searchName) curr = curr->next;
    if (!curr) {
        cout << "Patient not found.\n";
        return;
    }
    // Push current state for undo
    undoStack.push(new PatientRecord(curr->name, curr->age, curr->symptoms, curr->severity));
    cout << "Enter new symptoms: "; getline(cin, curr->symptoms);
    cout << "Enter new severity: "; getline(cin, curr->severity);
    cout << "Update successful. You can undo.\n";
    // Clear redo stack
    while (!redoStack.empty()) redoStack.pop();
}

void undoUpdate() {
    if (undoStack.empty()) {
        cout << "Nothing to undo.\n";
        return;
    }
    string searchName = undoStack.top()->name;
    PatientRecord* curr = activeHead;
    while(curr && curr->name != searchName) curr = curr->next;
    if (!curr) {
        cout << "Patient not found.\n";
        return;
    }
    // Push current for redo
    redoStack.push(new PatientRecord(curr->name, curr->age, curr->symptoms, curr->severity));
    // Pop and restore
    PatientRecord* old = undoStack.top();
    undoStack.pop();
    curr->symptoms = old->symptoms;
    curr->severity = old->severity;
    cout << "Undo successful.\n";
}

void redoUpdate() {
    if (redoStack.empty()) {
        cout << "Nothing to redo.\n";
        return;
    }
    string searchName = redoStack.top()->name;
    PatientRecord* curr = activeHead;
    while(curr && curr->name != searchName) curr = curr->next;
    if (!curr) {
        cout << "Patient not found.\n";
        return;
    }
    // Push current for undo
    undoStack.push(new PatientRecord(curr->name, curr->age, curr->symptoms, curr->severity));
    // Pop and restore
    PatientRecord* redo = redoStack.top();
    redoStack.pop();
    curr->symptoms = redo->symptoms;
    curr->severity = redo->severity;
    cout << "Redo successful.\n";
}

// ------ Main Menu ------
void menu() {
    int choice;
    do {
        cout << "--- Hospital Patient Management ---\n"
             << "1. Register Patient\n"
             << "2. Serve Patient\n"
             << "3. Update Patient Record\n"
             << "4. Undo Update\n"
             << "5. Redo Update\n"
             << "6. Show Active Patients\n"
             << "7. Show Doctors\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: registerPatient(); break;
            case 2: servePatient(); break;
            case 3: updatePatientRecord(); break;
            case 4: undoUpdate(); break;
            case 5: redoUpdate(); break;
            case 6: showActivePatients(); break;
            case 7: showDoctors(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
        cout << endl;
    } while(choice != 0);
}

int main() {
    menu();
    return 0;
}
