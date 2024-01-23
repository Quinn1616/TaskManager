// Task Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "task.h"
#include <vector>
using namespace std;

int main()
{
    vector<Task> taskList;
    bool loop = true;

    cout << "Welcome to the Task Manager!\n\n";

    while (loop) {
        int userChoice = -1;

        cout << "Menu options:\n";
        cout << "1. Add Task\n";
        cout << "2. Report Task\n";
        cout << "3. Display Task List\n";
        cout << "4. Quit\n";
        cout << "Your choice : ";
        cin >> userChoice;

        switch (userChoice) {
            case 1: {
                string taskDescription;
                cout << "\nEnter the task: ";
                cin.ignore();
                getline(cin, taskDescription);
          

                Task newTask(taskDescription);
                taskList.push_back(newTask);

                cout << "Task added. \n\n";
                break;
                }

            case 2: {
                cout << "\nTask List:\n";

                for (size_t i = 0; i < taskList.size(); ++i) {
                    cout << i + 1 << ". [" << (taskList[i].isCompleted() ? 'x' : ' ') << "] " << taskList[i].getDescription() << endl;
                }

                size_t taskUpdateIndex;
                cout << "\nWhich task would you like to update: ";
                cin >> taskUpdateIndex;

                if (taskUpdateIndex > 0 && taskUpdateIndex <= taskList.size()) {
                    taskList[taskUpdateIndex - 1].markCompleted();
                    cout << "Marked as completed!\n\n";
                }

                else {
                    cout << "Invalid task .\n";
                }

                break;
                }

                break;

            case 3: {
                cout << "\nTask List:\n";

                for (size_t i = 0; i < taskList.size(); ++i) {
                    cout << i + 1 << ". [" << (taskList[i].isCompleted() ? 'x' : ' ') << "] " << taskList[i].getDescription() << endl;
                }

                cout << "\n";
                break;
            }

            case 4: {
                cout << "\nGoodbye!\n";
                loop = false;
                break;
            }

            default:
                cout << "\nInvalid input. Try again.\n\n";
                break;
        }
    }
}

