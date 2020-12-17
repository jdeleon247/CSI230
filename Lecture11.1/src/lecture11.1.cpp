/**
* @file lecture11.1.cpp
* @brief  main function
* handles running functions and error checking
* @author Jonathan DeLeon
* @assignment Lecture 11.1
* @date 11/19/2020
* @credits Devin Paden, https://theboostcpplibraries.com/boost.program_options,
* https://www.boost.org/doc/libs/1_68_0/doc/html/boost/algorithm/split.html
*/
#include <boost/program_options.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>


/*void on_age(int age)
{
  std::cout << "On age: " << age << '\n';
}*/

using namespace boost::algorithm;
void splitString(std::string comboString)
{
    std::vector<std::string> words;
    boost::split(words, comboString, boost::is_any_of("/.-"));
    for (int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << std::endl;
}

using namespace boost::program_options;
int main(int argc, const char *argv[])
{
    try
    {
        options_description desc{"Options"};
        desc.add_options()
        ("help,h", "Help screen")
        ("string,s", value<std::string>()->notifier(splitString), "Strings");
        variables_map vm;
        store(parse_command_line(argc, argv, desc), vm);
        notify(vm);

        if (vm.count("help"))
            std::cout << desc << '\n';
        else if (vm.count("string"))
            std::cout << "Original string: " << vm["string"].as<std::string>() << '\n';
    }
    catch (const error &ex)
    {
        std::cerr << ex.what() << '\n';
    }
    std::cout << "End of program\n";
}
