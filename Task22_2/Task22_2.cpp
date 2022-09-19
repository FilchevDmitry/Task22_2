#include <iostream>
#include<string>
#include<map>

int main()
{
    std::string name;
    int que = 0;
    bool exit = true;
    std::map <std::string, std::string> registry;
   
    while (exit)
    { 
        std::cout << "Enter the last name or next to output (to exit- enter exit)\n";
        std::cin >> name;
        if (name == "exit")
        {
            exit = false;
        }
        else if (name == "next")
        {   
            if (!registry.empty())
            {
                std::cout << "<- " << registry.begin()->second << std::endl;
                registry.erase(registry.begin());
            }
            else {
                std::cout << "The queue is empty!!!\n";
            }
        }
        else
        {
            registry.insert(std::make_pair(name+std::to_string(que), name));
            que++;
        }
    }
}

