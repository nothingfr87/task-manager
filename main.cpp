#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::string;

ofstream tasks_file;

void get_tasks()
{
  ifstream readfile("Tasks.txt");

  if (!readfile)
  {
    std::cout << "Error While Reading File\n";
  }

  string line;
  std::cout << "Your Tasks List: \n";
  while (getline(readfile, line))
  {
    std::cout << line << "\n";
  }

  readfile.close();
}

void add_tasks(string task_name)
{
  tasks_file.open("Tasks.txt", std::ios::app);
  if (!tasks_file)
  {
    std::cout << "Error While Opening the file\n";
  }
  tasks_file << task_name << "\n";
  std::cout << "Added The Task to Todo List Successfully\n";
  tasks_file.close();
}

int main()
{
  string task;
  string task_name;
  int choice;

  while (true)
  {
    std::cout << "=========== Task Manager ===========\n";
    std::cout << "[1] Add A Task\n";
    std::cout << "[2] List All Tasks\n";
    std::cout << "[3] Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore();

    std::cout << "\n";
    switch (choice)
    {
    case 1:
      std::cout << "Enter a task name: ";
      std::getline(std::cin, task_name);
      std::cout << "\n";
      add_tasks(task_name);
      break;
    case 2:
      get_tasks();
      break;
    case 3:
      std::cout << "Goodbye \n";
      return 0;
    default:
      std::cout << "Invalid Option\n";
      break;
    }
  }

  return 0;
}