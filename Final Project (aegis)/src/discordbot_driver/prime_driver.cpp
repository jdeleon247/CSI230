/**
* @file prime_driver.cpp
* @brief Prime Library Driver
*
* @author Jonathan DeLeon
* @assignment Lecture 12.1
* @credits 
* @date 11/30/20
* 
*/
#include "discordbot.h"
#include <iostream>

using namespace std;
int main()
{
    // Create bot object with a minimum log level of trace
    aegis::core bot(aegis::create_bot_t().log_level(spdlog::level::trace).token("Nzg0NTQ2NzgwNjgzMzA0OTYw.X8q4IA.MEL6kGTN0KaL7AZY6af6HfvjOgU"));
    AEGIS_TRACE(bot.log, "Bot object created");
    // With min log level set to trace and wsdbg (websocket debug) set to true
    // the bot will dump all websocket messages to console
    bot.wsdbg = true;
    // These callbacks are what are called when websocket events occur
    bot.set_on_message_create(&message_create);
    // start the bot
    bot.run();
    // yield thread execution to the library
    bot.yield();
    std::cout << "Press any key to continue...\n";
    std::cin.ignore();
    return 0;
}