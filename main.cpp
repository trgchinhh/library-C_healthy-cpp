#include "chealthy.hpp"
#include <sstream>
#include <windows.h>

#define RESET "\033[0m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"

void printCenterConsole(const string& cau) {
    int weight = 120;  
    int length = cau.length();
    int white_space = (weight - length) / 2;
    if (white_space < 0) white_space = 0;
    cout << CYAN << string(white_space, ' ') << cau << RESET;
}

void printBanner(){
    string banner = R"(  
  ____            _       _____           _           
 |  _ \          | |     |_   _|         | |          
 | |_) | ___   __| |_   _  | |  _ __   __| | _____  __
 |  _ < / _ \ / _` | | | | | | | '_ \ / _` |/ _ \ \/ /
 | |_) | (_) | (_| | |_| |_| |_| | | | (_| |  __/>  < 
 |____/ \___/ \__,_|\__, |_____|_| |_|\__,_|\___/_/\_\
                     __/ |                            
                    |___/                             
    )";

    stringstream ss(banner);
    string line;
    while(getline(ss, line)){
        printCenterConsole(line);
        cout << endl;
    }
}

struct INDEX_BODY {
public:
    float weight, height, waist, hip, max, maxHeartRate, restHeartRate, cholesterol, bloodPressure;
    int age, activityLevel;
    string gender;

    INDEX_BODY(string gender, int age, float weight, float height, float waist, float hip,
               int activityLevel, float maxHeartRate, float restHeartRate,
               float cholesterol, float bloodPressure)
    {
        this->gender = gender;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->waist = waist;
        this->hip = hip;
        this->activityLevel = activityLevel;
        this->maxHeartRate = maxHeartRate;
        this->restHeartRate = restHeartRate;
        this->cholesterol = cholesterol;
        this->bloodPressure = bloodPressure;
    }
};

int main(){
    system("cls");

    printBanner();

    C_HEALTHY ch;

    INDEX_BODY ib(
        "nam", 25, 70, 1.75, 85, 95, 3, 190, 60, 200, 120
    );

    cout << YELLOW << "Chỉ số BMI là: " << ch.BMI(ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABMI(ch.BMI(ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BMR là: " << ch.BMR(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABMR(ib.gender, ch.BMR(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số TDEE là: " << ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NATDEE(ib.gender, ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số WHR là: " << ch.WHR(ib.gender, ib.waist, ib.hip) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAWHR(ch.WHR(ib.gender, ib.waist, ib.hip)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số LBM là: " << ch.LBM(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NALBM(ch.LBM(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FFMI là: " << ch.FFMI(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAFFMI(ch.FFMI(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số RFM là: " << ch.RFM(ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NARFM(ch.RFM(ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BFP là: " << ch.BFP(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABFP(ch.BFP(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BBW là: " << ch.BBW(ib.weight) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABBW(ch.BBW(ib.weight)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số IBW là: " << ch.IBW(ib.gender, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAIBW(ch.IBW(ib.gender, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MA là: " << ch.MA(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMA(ch.MA(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số VFR là: " << ch.VFR(ib.waist, ib.hip) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAVFR(ch.VFR(ib.waist, ib.hip)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BSA là: " << ch.BSA(ib.height, ib.weight) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABSA(ch.BSA(ib.height, ib.weight)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số VO2MAX là: " << ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAVO2MAX(ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số HSI là: " << ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAHSI(ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MMI là: " << ch.MMI(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMMI(ch.MMI(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BFM là: " << ch.BFM(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABFM(ch.BFM(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    return 0;
}
