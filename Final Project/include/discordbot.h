/**
* @file discordbot.h
* @brief SleepyDiscord Bot Library class function declaration and function implementation
*
* @author Jonathan DeLeon
* @assignment Final Project
* @credits code format from https://github.com/yourWaifu/sleepy-discord
* @date 12/14/20
* 
*/

#include "sleepy_discord/websocketpp_websocket.h"
#include <iostream>
#include <fstream>

class myClientClass : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    const std::string BOT_ID = "784546780683304960";
    std::string URL_List[8] = 
    {
        "https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/lionel-animals-to-follow-on-instagram-1568319926.jpg?crop=0.922xw:0.738xh;0.0555xw,0.142xh&resize=640:*",
        "https://static.boredpanda.com/blog/wp-content/uuuploads/cute-baby-animals/cute-baby-animals-2.jpg",
        "https://static.boredpanda.com/blog/wp-content/uploads/2016/10/cute-sloths-57f269182f5ab__700.jpg",
        "https://i.pinimg.com/originals/32/e6/20/32e620377da60f8e79fb3db5452f02a2.jpg",
        "https://imagesvc.meredithcorp.io/v3/mm/image?url=https%3A%2F%2Fstatic.onecms.io%2Fwp-content%2Fuploads%2Fsites%2F20%2F2020%2F01%2Ffrog-trio-6.jpg",
        "https://hips.hearstapps.com/wdy.h-cdn.co/assets/17/39/1506709524-cola-0247.jpg?crop=1.00xw:0.750xh;0,0.226xh&resize=480:*",
        "https://filmdaily.co/wp-content/uploads/2020/04/cute-cat-videos-lede.jpg",
        "https://d2r8r0qhs4bt8m.cloudfront.net/wp-content/uploads/2019/10/18163743/desktop-1425399420.jpg"
    };
    void onMessage(SleepyDiscord::Message message) {
        if(message.startsWith("!picture") && message.isMentioned(BOT_ID))
        {
            int randomIndex = rand() % 8;
            sendMessage(message.channelID, "Hello <@" + message.author.ID + ">");
            //sendMessage(message.channelID,  );
            sendMessage(message.channelID, URL_List[randomIndex]);
            std::string userMessage = "message from " + message.author.username + ": " + message.content + "/n";
            std::cout << userMessage << "\n";
        }
    }
};