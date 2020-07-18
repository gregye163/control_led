#include <unistd.h>
#include <wiringPi.h>

#define GPIO 7

int main(){
    wiringPiSetupSys();
    pinMode(GPIO, OUTPUT);
    // pinMode(GPIO, INPUT);
    while(1){
        digitalWrite(GPIO, HIGH);
        sleep(1);
        digitalWrite(GPIO, LOW);
        sleep(1);
    }
    wiringPiTerminateSys();
    return 0 ;
}


// 编译:  g++ test.cpp -lwiringPi -lpthread -o test

// 安装wiringPi 1.0：
// sudo dnf install wiringPi-1.0_EAIDK-1.openailab.fc28.aarch64 或者 sudo yum install wiringPi
