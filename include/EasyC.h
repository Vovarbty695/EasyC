#include<vector>
#include<string>
#include<iostream>
#include<unordered_map>
#include <chrono>
#include <thread>
#include <fstream>


//Started pack

#define start() int main()
#define integer int
#define text std::string
#define decimal float
#define boolean bool
#define print(msg) std::cout << msg << std::endl
#define error(msg) std::cerr << msg << std::endl
#define input(var) std::cin >> var 
#define loop(start_count, count) for(int i = start_count; i < count; i++)
#define func void
#define func_int int
#define func_float float
#define func_string std::string 
#define func_bool bool
#define problem return
#define done return 0;

//Arrays

#define list(type) std::vector<type>
#define map(key, value) std::unordered_map<key, value>
#define add_to(container, item) container.push_back(item)
#define size_of(container) container.size()

//Times

//#define pause_system system("pause")
//#define clear_screen system("cls")
//#define clear_screen system("clear")
#define wait(s) std::this_thread::sleep_for(std::chrono::seconds(s))

#ifdef _WIN32
#define clear_screen system("cls")
#define pause_system system("pause")
#else
#define clear_screen system("clear")
#define pause_system std::cout << "Press Enter to continue..."; std::cin.ignore(); std::cin.get();
#endif



//System

void create_folder(text path, text name);
void create_file(text path, text name);
void delete_folder(text path, text name);
void delete_file(text path, text name);