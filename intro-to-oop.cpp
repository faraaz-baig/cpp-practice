#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles;
};

int main()
{
    YoutubeChannel ytChannel;
    ytChannel.name = "Faraaz Baig";
    ytChannel.ownerName = "Faraaz";
    ytChannel.subscribersCount = 1000;
    ytChannel.publishedVideoTitles = {"Rust is amazing", "Rust is amazing", "cpp is trash"};

    cout << "Name : " << ytChannel.name << endl;
    cout << "Created By : " << ytChannel.ownerName << endl;
    cout << "Subscribers : " << ytChannel.subscribersCount << endl;
    cout << "Video Title : " << endl;
    for (string videoTitle : ytChannel.publishedVideoTitles)
    {
        cout << videoTitle << endl;
    }
}