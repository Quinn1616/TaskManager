#include "task.h"
using namespace std;

Task::Task() {

}

Task::Task(const string& description) : taskDescription(description), completed(false) {
    
}

void Task::setDescription(const string& description) {
    taskDescription = description;
}

std::string Task::getDescription() const {
    return taskDescription;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::markCompleted() {
    completed = true;
}