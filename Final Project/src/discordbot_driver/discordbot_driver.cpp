#include <iostream>
#include "sleepy_discord/websocketpp_websocket.h"

class myClientClass : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    void onMessage(SleepyDiscord::Message message) {
        if (message.startsWith("!hello"))
            sendMessage(message.channelID, "Hello <@" + message.author.ID + ">");
        if (message.startsWith("!picture"))
            sendMessage(message.channelID, "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTvjqghsAjmW5cRXBlXTPQTI92kb-Vi2znmSA&usqp=CAU");
        if (message.startsWith("!yummy"))
            sendMessage(message.channelID, "https://i0.wp.com/www.pizzanco.com/wp-content/uploads/2019/08/cursed-food-makemesuffer.jpg?w=1100");
    }
};

using namespace std;
const string BOT_TOKEN = "Nzg0NTQ2NzgwNjgzMzA0OTYw.X8q4IA.MEL6kGTN0KaL7AZY6af6HfvjOgU";

int main() {
    myClientClass client(BOT_TOKEN, 2);
    client.run();
}