/**
* @file prime.cpp
* @brief  Prime Check Implemenation
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits
* 
*/

#include "discordbot.h"

void message_create(aegis::gateway::events::message_create obj)
{
    std::string content{ obj.msg.get_content() };
    auto & _channel = obj.msg.get_channel();
    // Simple Hi response
    if (content == "~Hi")
    {
        _channel.create_message("Hello back");
    }
}