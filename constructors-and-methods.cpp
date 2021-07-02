#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void get_info()
    {
        cout << "name : " << Name << endl;
        cout << "Owner name : " << OwnerName << endl;
        cout << "Subscribers :" << SubscribersCount << endl;
        cout << "Videos :" << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    YoutubeChannel ytchannel("Faraaz Baig", "Faraaz");
    ytchannel.PublishedVideoTitles.push_back("Rust is good");
    ytchannel.PublishedVideoTitles.push_back("Rust Generics");
    ytchannel.PublishedVideoTitles.push_back("Rust vs GO");

    YoutubeChannel ytchannel2("Rust", "Rustacean");

    ytchannel.get_info();
    ytchannel2.get_info();
}