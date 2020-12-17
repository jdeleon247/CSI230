/**
* @file discordbot_driver.cpp
* @brief DiscordBot Library Driver
*
* @author Jonathan DeLeon
* @assignment Final Project
* @credits 
* @date 12/14/20
* 
*/
#include <iostream>
//  Use this to avoid using discord:: everywhere
//  using namespace discord;

//  Or use this to shorten it to just ds::
//  namespace ds = discord;

int main() {
  std::string token = "YOUR_TOKEN";
  discord::Bot bot(token);
  
  bot.on_message([](discord::MessageEvent& event) {
    if (event.content() == "Ping!") {
      event.respond("Pong!");
    }
  });
  
  bot.run();
}
