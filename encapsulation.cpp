#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
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
        cout << "Subscribers : " << SubscribersCount << endl;
        cout << "Videos : " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
    void subscribe()
    {
        SubscribersCount++;
    }
    void unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void publish_video(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YoutubeChannel ytchannel("Faraaz Baig", "Faraaz");
    ytchannel.publish_video("Rust is good");
    ytchannel.publish_video("Rust Generics");
    ytchannel.publish_video("Rust vs Java");

    ytchannel.subscribe();
    ytchannel.subscribe();
    ytchannel.unsubscribe();

    ytchannel.get_info();
}