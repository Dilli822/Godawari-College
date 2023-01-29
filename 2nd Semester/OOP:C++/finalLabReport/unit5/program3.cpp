#include <iostream>
#include <string>

using namespace std;

// Base class Device
class Device {
    protected:
        string deviceName;
    public:
        Device(string name) {
            deviceName = name;
        }
        void displayDeviceName() {
            cout << "Device Name: " << deviceName << endl;
        }
};

// Base class MediaPlayer
class MediaPlayer {
    protected:
        string mediaType;
    public:
        MediaPlayer(string type) {
            mediaType = type;
        }
        void displayMediaType() {
            cout << "Media Type: " << mediaType << endl;
        }
        virtual void play() = 0;
};

// Derived class MP3Player with multiple inheritance from Device and MediaPlayer classes
class MP3Player : public Device, public MediaPlayer {
    public:
        MP3Player(string deviceName, string mediaType) : Device(deviceName), MediaPlayer(mediaType) {}
        void play() {
            cout << "Playing " << mediaType << " on " << deviceName << endl;
        }
};

// Derived class DVDPlayer with hierarchal inheritance from Device class
class DVDPlayer : public Device {
    public:
        DVDPlayer(string deviceName) : Device(deviceName) {}
        void playDVD() {
            cout << "Playing DVD on " << deviceName << endl;
        }
};

int main() {
    MP3Player mp3("iPod", "MP3");
    mp3.displayDeviceName();
    mp3.displayMediaType();
    mp3.play();

    DVDPlayer dvd("Sony DVD Player");
    dvd.displayDeviceName();
    dvd.playDVD();

    return 0;
}
