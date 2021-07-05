#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;

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

class CookingYoutubeChannel : public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string onwerName) : YoutubeChannel(name, onwerName)
    {
    }
    void practice()
    {
        cout << "practice cooking learning new recipies, experimenting with spices...." << endl;
    }
};

class SingersYoutbeChannel : public YoutubeChannel
{
public:
    SingersYoutbeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    void practice()
    {
        cout << "Practice singing nerd!" << endl;
    }
};

int main()
{
    CookingYoutubeChannel YoutubeChannel("Faraaz's kitchen", "Faraaz");
    YoutubeChannel.publish_video("Apple Pie");
    YoutubeChannel.publish_video("Samosa");
    YoutubeChannel.publish_video("Dal rice");
    YoutubeChannel.subscribe();
    YoutubeChannel.subscribe();
    YoutubeChannel.subscribe();
    YoutubeChannel.practice();
    YoutubeChannel.get_info();
}
