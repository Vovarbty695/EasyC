#include<vector>
#include<string>
#include<iostream>
#include<unordered_map>
#include <chrono>
#include <thread>
#include <fstream>


//COLORS

#define RESET "\x1b[0m"
#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define PURPLE "\x1b[35m"
#define LIGHT_BLUE "\x1b[36m"
#define WHITE "\x1b[37m"


#define print_color_messange(color, msg) std::cout << color << msg << std::endl;

//Started pack

#define start() int main()
#define integer int
#define text std::string
#define text_c const char*
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
#define func_char const char*
#define func_bool bool
#define problem return
#define done return 0;
#define yes true
#define no false

//Arrays

#define list(type) std::vector<type>
#define map(key, value) std::unordered_map<key, value>
#define add_to(container, item) container.push_back(item)
#define size_of(container) container.size()

//Times
#define wait(ms) std::this_thread::sleep_for(std::chrono::milliseconds(s))
#define wait(s) std::this_thread::sleep_for(std::chrono::seconds(s))
#define wait(m) std::this_thread::sleep_for(std::chorno::minutes(m))

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