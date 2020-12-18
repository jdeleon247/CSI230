/**
* @file discordbot_driver.cpp
* @brief SleepyDiscord Bot Library Driver
*
* @author Jonathan DeLeon
* @assignment Final Project
* @credits code format from https://github.com/yourWaifu/sleepy-discord
* @date 12/14/20
* 
*/
#include "../../include/discordbot.h"
const std::string BOT_TOKEN = "token";

using namespace std;
int main()
{
    srand(time_t(0));
    myClientClass client(BOT_TOKEN, 2);
    client.run();
}
