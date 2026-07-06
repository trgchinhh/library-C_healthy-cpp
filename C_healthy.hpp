//   _____      _    _            _ _   _           
//  / ____|    | |  | |          | | | | |          
// | |   ______| |__| | ___  __ _| | |_| |__  _   _ 
// | |  |______|  __  |/ _ \/ _` | | __| '_ \| | | |  Healthy library for C++
// | |____     | |  | |  __/ (_| | | |_| | | | |_| |  Version 0.0.2
//  \_____|    |_|  |_|\___|\__,_|_|\__|_| |_|\__, |  Github: https://github.com/trgchinhh/library-C_healthy-cpp
//                                             __/ |
//                                            |___/ 
// (!) PROGRAM: BODY INDEX CALCULATOR
// (!) AUTHOR: NGUYEN TRUONG CHINH (NTC++)

/**************************************************************************\
  * New update at 06/07/2026
  * Note: download the file to the project you want to include
  * The program is written based on the C-healthy python library
  * Feature: including indexing and giving advice
  * This URL lib C-heathy: https://github.com/trgchinhh/library-C_healthy-cpp
  * We will update this file soon
\**************************************************************************/


#ifndef INCLUDE_C_HEALTHY_HPP
#define INCLUDE_C_HEALTHY_HPP

#include <cmath>
#include <stdexcept>
#include <windows.h>
#include <fstream>
#include <winnls.h>
#include <unordered_map>
#include <algorithm>

using namespace std;

const string FILE_NAME = "INSTRUCT.txt";

class SPECIAL_CHARACTER {
private:
    SPECIAL_CHARACTER(){
        SetConsoleOutputCP(CP_UTF8); 
        SetConsoleCP(CP_UTF8);
    }
    friend class C_HEALTHY;
};

class C_HEALTHY {
public:
    C_HEALTHY(){
        SPECIAL_CHARACTER ();
    }
    
    // calculator index body 
    inline float BMI(float weight, float height);
    inline float BMR(string gender, float weight, float height, int age);
    inline float TDEE(string gender, float weight, float height, int age, int activityLevel);
    inline float WHR(string gender, float waist, float hip);
    inline float LBM(string gender, float weight, float height);
    inline float FFMI(string gender, float weight, float height);
    inline float RFM(float waist, float height);
    inline float BFP(string gender, float weight, float height, int age);
    inline float BBW(float weight);
    inline float IBW(string gender, float height);
    inline float MA(string gender, float weight, float height, int age);
    inline float VFR(float waist, float hip);
    inline float BSA(float height, float weight);
    inline float VO2MAX(float maxHeartRate, float restHeartRate);
    inline float HSI(string gender, float weight, float height, int age, float cholesterol, float bloodPressure);
    inline float MMI(string gender, float weight, float height);
    inline float BFM(string gender, float weight, float height, int age);
    inline float ABSI(float waist_circ, float weight, float height);
    inline float AVI(float waist_circ, float hip_circ);
    inline float BAI(float hip_circ, float height);
    inline float CI(float weight, float height, float waist_circ);
    inline float WHtR(float waist_circ, float height);
    inline float PonderalIndex(float weight, float height);
    inline float FMI(string gender, float weight, float height, int age);
    inline float FFM(string gender, float weight, float height);
    inline float FMR(string gender, float weight, float height, int age);
    inline float TBW(string gender, float weight, float height, int age);
    inline float ECW(string gender, float weight, float height, int age);
    inline float ICW(string gender, float weight, float height, int age);
    inline float BCM(string gender, float weight, float height, int age);
    inline float SMI(string gender, float weight, float height);
    inline float ASMI(string gender, float weight, float height);
    inline float MAMC(float muac, float tsf);
    inline string MUAC_Assessment(string gender, float muac);
    inline float BEE(string gender, float weight, float height, int age);
    inline float REE(string gender, float weight, float height, int age);
    inline float PAL(string gender, float weight, float height, int age, int activityLevel);
    inline float MET(float vo2_rate);
    inline float MaxHeartRate(int age);
    inline float HeartRateReserve(int resting_heart_rate, int age);
    inline float TargetHeartRate(int resting_heart_rate, int age, float intensity);
    inline float CalorieDeficit(float tdee, float deficit_amount = 500.0f);
    inline float CalorieSurplus(float tdee, float surplus_amount = 300.0f);
    inline float ProteinNeed(float weight, string activity_level = "medium");
    inline float FatNeed(float tdee, float calorie_percentage = 0.25f);
    inline float CarbNeed(float tdee, float p_protein_g, float p_fat_g);
    inline float WaterNeed(float weight, float workout_minutes = 0.0f);
    inline float IdealWater(float weight);
    inline float LeanBodyPercentage(string gender, float weight, float height);
    inline float FatPercentage(string gender, float weight, float height, int age);
    inline float MusclePercentage(string gender, float weight, float height);
    inline float BoneMassEstimate(string gender, float weight, float height);
    inline float BMIPrime(float weight, float height);
    inline float CorpulenceIndex(float weight, float height);
    inline float RelativeFatMass_Ext(string gender, float waist_circ, float height);
    inline float BodyRoundnessIndex(float waist_circ, float height);
    inline float ABodyRoundness(float waist_circ, float height);
    inline float VisceralAdiposityIndex(string gender, float weight, float height, float waist_circ, float tg, float hdl);
    inline float LipidAccumulationProduct(string gender, float waist_circ, float tg);
    inline float FatMass(string gender, float weight, float height, int age);
    inline float LeanMass(string gender, float weight, float height);

    // nutritional advice
    inline string NABMI(float bmi);
    inline string NABMR(string gender, float bmr);
    inline string NATDEE(string gender, float tdee);
    inline string NAWHR(float whr);
    inline string NALBM(float lbm);
    inline string NAFFMI(float ffmi);
    inline string NARFM(float rfm);
    inline string NABFP(float bfp);
    inline string NABBW(float bbw);
    inline string NAIBW(float ibw);
    inline string NAMA(float ma);
    inline string NAVFR(float vfr);
    inline string NABSA(float bsa);
    inline string NAVO2MAX(float vo2max);
    inline string NAHSI(float hsi);
    inline string NAMMI(float mmi);
    inline string NABFM(float bfm);
    inline string NAABSI(float absi);
    inline string NAAVI(float avi);
    inline string NABAI(float bai);
    inline string NACI(float ci);
    inline string NAWHtR(float whtr);
    inline string NAPonderalIndex(float pi);
    inline string NAFMI(float fmi);
    inline string NAFFM(float ffm);
    inline string NAFMR(float fmr);
    inline string NATBW(float tbw);
    inline string NAECW(float ecw);
    inline string NAICW(float icw);
    inline string NABCM(float bcm);
    inline string NASMI(float smi);
    inline string NAASMI(float asmi);
    inline string NAMAMC(float mamc);
    inline string NAMUAC(string muac_assessment);
    inline string NABEE(float bee);
    inline string NAREE(float ree);
    inline string NAPAL(float pal);
    inline string NAMET(float met);
    inline string NAMaxHeartRate(float max_hr);
    inline string NAHeartRateReserve(float hrr);
    inline string NATargetHeartRate(float thr);
    inline string NACalorieDeficit(float deficit);
    inline string NACalorieSurplus(float surplus);
    inline string NAProteinNeed(float protein);
    inline string NAFatNeed(float fat);
    inline string NACarbNeed(float carb);
    inline string NAWaterNeed(float water);
    inline string NAIdealWater(float ideal_water);
    inline string NALeanBodyPercentage(float lb_pct);
    inline string NAMusclePercentage(float muscle_pct);
    inline string NABoneMassEstimate(float bone_mass);
    inline string NABMIPrime(float bmi_prime);
    inline string NABodyRoundnessIndex(float bri);
    inline string NAVisceralAdiposityIndex(float vai);
    inline string NALipidAccumulationProduct(float lap);

    // check
    inline bool GenderTest(string gender); 
    // instruct
    inline string INSTRUCT(const string& function_name = "all", bool write_to_file = false);

    inline string tolower(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
};


float C_HEALTHY::BMI(float weight, float height){
    if(weight <= 0 || height <= 0)
        throw runtime_error("Weight and height must be positive values!");
    float bmi = weight / pow(height, 2);
    return round(bmi * 100) / 100; 
}


float C_HEALTHY::BMR(string gender, float weight, float height, int age) {
    string g = tolower(gender);
    if(g != "male" && g != "female")
        throw runtime_error("Gender must be either 'male' or 'female'");
    if(weight <= 0 || height <= 0 || age <= 0)
        throw runtime_error("Weight, height, and age must be positive values!");

    height *= 100; // convert meters to cm
    if(g == "female")
        return round((655 + (9.6 * weight) + (1.8 * height) - (4.7 * age)) * 100) / 100;
    else
        return round((66 + (13.7 * weight) + (5 * height) - (6.8 * age)) * 100) / 100;
}


float C_HEALTHY::TDEE(string gender, float weight, float height, int age, int activityLevel) {
    float movement_coefficient;
    switch(activityLevel) {
        case 1: movement_coefficient = 1.2f; break;
        case 2: movement_coefficient = 1.375f; break;
        case 3: movement_coefficient = 1.55f; break;
        case 4: movement_coefficient = 1.725f; break;
        case 5: movement_coefficient = 1.9f; break;
        default: throw runtime_error("Activity level must be an integer between 1 and 5!");
    }
    return round(C_HEALTHY::BMR(gender, weight, height, age) * movement_coefficient * 100) / 100;
}


float C_HEALTHY::WHR(string gender, float waist, float hip) {
    if(!GenderTest(gender))
        throw runtime_error("Gender must be either 'male' or 'female'");
    if(waist <= 0 || hip <= 0)
        throw runtime_error("Waist and hip circumferences must be positive values!");
    return round((waist / hip) * 100) / 100;
}


float C_HEALTHY::LBM(string gender, float weight, float height) {
    if(!GenderTest(gender))
        throw runtime_error("Gender must be either 'male' or 'female'");
    height *= 100; // convert to cm
    if(tolower(gender) == "male")
        return round((0.32810 * weight + 0.33929 * height - 29.5336) * 100) / 100;
    else
        return round((0.29569 * weight + 0.41813 * height - 43.2933) * 100) / 100;
}


float C_HEALTHY::FFMI(string gender, float weight, float height) {
    return round((C_HEALTHY::LBM(gender, weight, height) / pow(height, 2)) * 100) / 100;
}


float C_HEALTHY::RFM(float waist, float height) {
    height *= 100;
    return round((64 - 4 * (waist / height)) * 100) / 100;
}


float C_HEALTHY::BFP(string gender, float weight, float height, int age) {
    float bmi = C_HEALTHY::BMI(weight, height);
    if(tolower(gender) == "male")
        return round((1.2 * bmi + 0.23 * age - 16.2) * 100) / 100;
    else
        return round((1.2 * bmi + 0.23 * age - 5.4) * 100) / 100;
}


float C_HEALTHY::BBW(float weight) {
    return round(weight * 0.033 * 100) / 100;
}


float C_HEALTHY::IBW(string gender, float height) {
    height *= 100;
    if(tolower(gender) == "male")
        return round((50 + 2.3 * (height - 152.4)/2.54) * 100) / 100;
    else
        return round((45.5 + 2.3 * (height - 152.4)/2.54) * 100) / 100;
}


float C_HEALTHY::MA(string gender, float weight, float height, int age) {
    float bmr = C_HEALTHY::BMR(gender, weight, height, age);
    float bmr_avg;
    if(tolower(gender) == "male") {
        if(age <= 30) bmr_avg = 1900;
        else if(age <= 50) bmr_avg = 1800;
        else if(age <= 70) bmr_avg = 1700;
        else bmr_avg = 1600;
    } else {
        if(age <= 30) bmr_avg = 1500;
        else if(age <= 50) bmr_avg = 1400;
        else if(age <= 70) bmr_avg = 1300;
        else bmr_avg = 1200;
    }
    float coefficient = (bmr - bmr_avg) / 100;
    return round((age - coefficient) * 100) / 100;
}


float C_HEALTHY::VFR(float waist, float hip) {
    return round((waist / hip) * 100) / 100;
}


float C_HEALTHY::BSA(float height, float weight) {
    height *= 100;
    return round(sqrt((height * weight) / 3600) * 100) / 100;
}


float C_HEALTHY::VO2MAX(float maxHeartRate, float restHeartRate) {
    return round(15 * (maxHeartRate / restHeartRate) * 100) / 100;
}


float C_HEALTHY::HSI(string gender, float weight, float height, int age, float cholesterol, float bloodPressure) {
    float bmi = C_HEALTHY::BMI(weight, height);
    float bfp = C_HEALTHY::BFP(gender, weight, height, age);
    return round((bmi * 0.4f + bfp * 0.3f + bloodPressure * 0.2f + cholesterol * 0.1f) / 4 * 100) / 100;
}


float C_HEALTHY::MMI(string gender, float weight, float height) {
    return round(C_HEALTHY::FFMI(gender, weight, height) / weight * 100) / 100;
}


float C_HEALTHY::BFM(string gender, float weight, float height, int age) {
    float bfp = C_HEALTHY::BFP(gender, weight, height, age);
    return round(weight * (bfp / 100) * 100) / 100;
}


float C_HEALTHY::ABSI(float waist_circ, float weight, float height) {
    if (waist_circ <= 0 || weight <= 0 || height <= 0) return 0;
    float bmi = weight / pow(height, 2);
    float absi = waist_circ / (pow(bmi, 2.0f/3.0f) * pow(height, 1.0f/2.0f));
    return round(absi * 10000) / 10000;
}


float C_HEALTHY::AVI(float waist_circ, float hip_circ) {
    if (waist_circ <= 0 || hip_circ <= 0) return 0;
    float avi = (2 * pow(waist_circ, 2) + 0.7f * pow(waist_circ - hip_circ, 2)) / 1000.0f;
    return round(avi * 100) / 100;
}


float C_HEALTHY::BAI(float hip_circ, float height) {
    if (hip_circ <= 0 || height <= 0) return 0;
    float bai = (hip_circ / pow(height, 1.5f)) - 18.0f;
    return round(bai * 100) / 100;
}


float C_HEALTHY::CI(float weight, float height, float waist_circ) {
    if (weight <= 0 || height <= 0 || waist_circ <= 0) return 0;
    float ci = waist_circ / (0.109f * sqrt(weight / height));
    return round(ci * 10000) / 10000;
}


float C_HEALTHY::WHtR(float waist_circ, float height) {
    if (waist_circ <= 0 || height <= 0) return 0;
    return round((waist_circ / height) * 100) / 100;
}


float C_HEALTHY::PonderalIndex(float weight, float height) {
    if (weight <= 0 || height <= 0) return 0;
    return round((weight / pow(height, 3)) * 100) / 100;
}


float C_HEALTHY::FMI(string gender, float weight, float height, int age) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float bfm = BFM(gender, weight, height, age);
    return round((bfm / pow(height, 2)) * 100) / 100;
}


float C_HEALTHY::FFM(string gender, float weight, float height) {
    return LBM(gender, weight, height);
}


float C_HEALTHY::FMR(string gender, float weight, float height, int age) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float bfm = BFM(gender, weight, height, age);
    float ffm = LBM(gender, weight, height);
    if (ffm <= 0) return 0;
    return round((bfm / ffm) * 100) / 100;
}


float C_HEALTHY::TBW(string gender, float weight, float height, int age) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float height_cm = height * 100;
    float tbw = 0;
    if (tolower(gender) == "male") {
        tbw = 2.447f - (0.09156f * age) + (0.1074f * height_cm) + (0.3362f * weight);
    } else {
        tbw = -2.097f + (0.1069f * height_cm) + (0.2466f * weight);
    }
    return round(tbw * 100) / 100;
}


float C_HEALTHY::ECW(string gender, float weight, float height, int age) {
    float tbw = TBW(gender, weight, height, age);
    return round((tbw * 0.3333f) * 100) / 100;
}


float C_HEALTHY::ICW(string gender, float weight, float height, int age) {
    float tbw = TBW(gender, weight, height, age);
    return round((tbw * 0.6667f) * 100) / 100;
}


float C_HEALTHY::BCM(string gender, float weight, float height, int age) {
    float icw = ICW(gender, weight, height, age);
    return round((icw / 0.70f) * 100) / 100;
}


float C_HEALTHY::SMI(string gender, float weight, float height) {
    float ffm = LBM(gender, weight, height);
    float smm = ffm * 0.57f;
    return round((smm / pow(height, 2)) * 100) / 100;
}


float C_HEALTHY::ASMI(string gender, float weight, float height) {
    float ffm = LBM(gender, weight, height);
    float asm_val = ffm * 0.42f;
    return round((asm_val / pow(height, 2)) * 100) / 100;
}


float C_HEALTHY::MAMC(float muac, float TSF) {
    if (muac <= 0 || TSF <= 0) return 0;
    float mamc = muac - (3.1415926535f * (TSF / 10.0f));
    return round(mamc * 100) / 100;
}


string C_HEALTHY::MUAC_Assessment(string gender, float muac) {
    if (!GenderTest(gender)) {
        return "Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.";
    }
    if (muac <= 0) return "Invalid input";
    if (tolower(gender) == "male") {
        return (muac >= 23) ? "Normal" : "Arm muscle area malnutrition";
    } else {
        return (muac >= 22) ? "Normal" : "Arm muscle area malnutrition";
    }
}


float C_HEALTHY::BEE(string gender, float weight, float height, int age) {
    return BMR(gender, weight, height, age);
}


float C_HEALTHY::REE(string gender, float weight, float height, int age) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float height_cm = height * 100;
    float ree = 0;
    if (tolower(gender) == "male") {
        ree = (10 * weight) + (6.25f * height_cm) - (5 * age) + 5;
    } else {
        ree = (10 * weight) + (6.25f * height_cm) - (5 * age) - 161;
    }
    return round(ree * 100) / 100;
}


float C_HEALTHY::PAL(string gender, float weight, float height, int age, int activityLevel) {
    float tdee = TDEE(gender, weight, height, age, activityLevel);
    float bmr = BMR(gender, weight, height, age);
    if (bmr <= 0) return 0;
    return round((tdee / bmr) * 100) / 100;
}


float C_HEALTHY::MET(float vo2_rate) {
    if (vo2_rate <= 0) return 0;
    return round((vo2_rate / 3.5f) * 100) / 100;
}


float C_HEALTHY::MaxHeartRate(int age) {
    if (age <= 0) return 0;
    return (int)round(207 - (0.7f * age));
}


float C_HEALTHY::HeartRateReserve(int resting_heart_rate, int age) {
    int max_hr = MaxHeartRate(age);
    if (resting_heart_rate <= 0 || resting_heart_rate >= max_hr) return 0;
    return max_hr - resting_heart_rate;
}


float C_HEALTHY::TargetHeartRate(int resting_heart_rate, int age, float intensity) {
    int hrr = HeartRateReserve(resting_heart_rate, age);
    float thr = (hrr * intensity) + resting_heart_rate;
    return (int)round(thr);
}


float C_HEALTHY::CalorieDeficit(float tdee, float deficit_amount) {
    if (tdee <= deficit_amount) return 0;
    return round((tdee - deficit_amount) * 100) / 100;
}


float C_HEALTHY::CalorieSurplus(float tdee, float surplus_amount) {
    if (tdee <= 0) return 0;
    return round((tdee + surplus_amount) * 100) / 100;
}


float C_HEALTHY::ProteinNeed(float weight, string activity_level) {
    float factor = 1.6f;
    string act = tolower(activity_level);
    if (act == "light") factor = 1.2f;
    else if (act == "medium") factor = 1.6f;
    else if (act == "high") factor = 2.0f;
    return round((weight * factor) * 100) / 100;
}


float C_HEALTHY::FatNeed(float tdee, float calorie_percentage) {
    if (tdee <= 0) return 0;
    return round(((tdee * calorie_percentage) / 9.0f) * 100) / 100;
}


float C_HEALTHY::CarbNeed(float tdee, float p_protein_g, float p_fat_g) {
    float remaining_calories = tdee - (p_protein_g * 4) - (p_fat_g * 9);
    if (remaining_calories <= 0) return 0;
    return round((remaining_calories / 4.0f) * 100) / 100;
}


float C_HEALTHY::WaterNeed(float weight, float workout_minutes) {
    float baseline_water = weight * 0.033f;
    float exercise_water = (workout_minutes / 30.0f) * 0.35f;
    return round((baseline_water + exercise_water) * 100) / 100;
}


float C_HEALTHY::IdealWater(float weight) {
    return BBW(weight);
}


float C_HEALTHY::LeanBodyPercentage(string gender, float weight, float height) {
    if (weight <= 0) return 0;
    return round((LBM(gender, weight, height) / weight * 100) * 100) / 100;
}


float C_HEALTHY::FatPercentage(string gender, float weight, float height, int age) {
    return BFP(gender, weight, height, age);
}


float C_HEALTHY::MusclePercentage(string gender, float weight, float height) {
    if (weight <= 0) return 0;
    float smi = SMI(gender, weight, height);
    float smm = smi * pow(height, 2);
    return round((smm / weight * 100) * 100) / 100;
}


float C_HEALTHY::BoneMassEstimate(string gender, float weight, float height) {
    float ffm = LBM(gender, weight, height);
    float gender_factor = (tolower(gender) == "male") ? 0.05f : 0.04f;
    return round((ffm * gender_factor) * 100) / 100;
}


float C_HEALTHY::BMIPrime(float weight, float height) {
    float bmi = BMI(weight, height);
    return round((bmi / 25.0f) * 100) / 100;
}


float C_HEALTHY::CorpulenceIndex(float weight, float height) {
    return PonderalIndex(weight, height);
}


float C_HEALTHY::RelativeFatMass_Ext(string gender, float waist_circ, float height) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float height_cm = height * 100;
    float gender_factor = (tolower(gender) == "male") ? 64.0f : 76.0f;
    return round((gender_factor - (20.0f * (waist_circ / height_cm))) * 100) / 100;
}


float C_HEALTHY::BodyRoundnessIndex(float waist_circ, float height) {
    if (waist_circ <= 0 || height <= 0) return 0;
    float waist_m = (waist_circ > 5) ? waist_circ / 100.0f : waist_circ;
    float height_m = (height < 3) ? height : height / 100.0f;
    
    float inner = 1.0f - pow((waist_m / (2.0f * 3.1415926535f)), 2) / pow((0.5f * height_m), 2);
    if (inner < 0) inner = 0;
    
    float bri = 364.2f - 365.5f * sqrt(inner);
    return round(bri * 100) / 100;
}


float C_HEALTHY::ABodyRoundness(float waist_circ, float height) {
    return BodyRoundnessIndex(waist_circ, height);
}


float C_HEALTHY::VisceralAdiposityIndex(string gender, float weight, float height, float waist_circ, float tg, float hdl) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    if (hdl <= 0) return 0;
    float bmi = BMI(weight, height);
    float waist_cm = (waist_circ > 5) ? waist_circ : waist_circ * 100;
    float vai = 0;
    
    if (tolower(gender) == "male") {
        vai = (waist_cm / (39.68f + (1.88f * bmi))) * (tg / 1.03f) * (1.31f / hdl);
    } else {
        vai = (waist_cm / (36.58f + (1.89f * bmi))) * (tg / 0.81f) * (1.52f / hdl);
    }
    return round(vai * 100) / 100;
}


float C_HEALTHY::LipidAccumulationProduct(string gender, float waist_circ, float tg) {
    if (!GenderTest(gender)) {
        throw runtime_error("Allowed genders: ['male', 'female']\nPlease re-enter with correct syntax.");
    }
    float waist_cm = (waist_circ > 5) ? waist_circ : waist_circ * 100;
    float lap = 0;
    if (tolower(gender) == "male") {
        lap = (waist_cm - 65.0f) * tg;
    } else {
        lap = (waist_cm - 58.0f) * tg;
    }
    return round((lap < 0 ? 0.0f : lap) * 100) / 100;
}


float C_HEALTHY::FatMass(string gender, float weight, float height, int age) {
    return BFM(gender, weight, height, age);
}


float C_HEALTHY::LeanMass(string gender, float weight, float height) {
    return LBM(gender, weight, height);
}


bool C_HEALTHY::GenderTest(string gender) {
    string g = tolower(gender);
    if (g == "male" || g == "female") {
        return true;
    }
    return false;
}


string C_HEALTHY::NABMI(float bmi) {
    if (bmi < 18.5f) return "Underweight: Increase protein and carbohydrate intake.";
    else if (bmi < 25.0f) return "Normal: Maintain a balanced diet and regular exercise.";
    else if (bmi < 30.0f) return "Overweight: Reduce carbohydrates and fats, scale up training.";
    else return "Obese: Strategic weight reduction is highly recommended.";
}


string C_HEALTHY::NABMR(string gender, float bmr) {
    return "Ensure daily caloric consumption aligns with your BMR base: " + to_string(bmr) + " kcal/day.";
}


string C_HEALTHY::NATDEE(string gender, float tdee) {
    return "Consume around " + to_string(tdee) + " kcal/day to maintain current body weight.";
}


string C_HEALTHY::NAWHR(float whr) {
    if (whr < 0.9f) return "Normal waist-to-hip ratio.";
    else return "Warning: Pay attention to lowering visceral/abdominal fat levels.";
}


string C_HEALTHY::NALBM(float lbm) {
    return "Target lean mass baseline maintenance: " + to_string(lbm) + " kg.";
}


string C_HEALTHY::NAFFMI(float ffmi) {
    return "Fat-Free Mass Index tracking metric: " + to_string(ffmi);
}


string C_HEALTHY::NARFM(float rfm) {
    return "Relative Fat Mass estimate: " + to_string(rfm) + "%";
}


string C_HEALTHY::NABFP(float bfp) {
    return "Body Fat Percentage at " + to_string(bfp) + "%. Adapt diet macro splits and metabolic conditioning.";
}


string C_HEALTHY::NABBW(float bbw) {
    return "Baseline hydration water goal status: " + to_string(bbw) + " Liters.";
}


string C_HEALTHY::NAIBW(float ibw) {
    return "Calculated Ideal Body Weight parameters: " + to_string(ibw) + " kg.";
}


string C_HEALTHY::NAMA(float ma) {
    return "Metabolic Age equivalent level: " + to_string(ma);
}


string C_HEALTHY::NAVFR(float vfr) {
    return "Visceral Fat Rating index tier: " + to_string(vfr);
}


string C_HEALTHY::NABSA(float bsa) {
    return "Body Surface Area formula calculation outcome: " + to_string(bsa) + " m2.";
}


string C_HEALTHY::NAVO2MAX(float vo2max) {
    return "Cardiovascular aerobic threshold efficiency limit: " + to_string(vo2max) + " ml/kg/min.";
}


string C_HEALTHY::NAHSI(float hsi) {
    return "Hepatic Steatosis Index calculation target value: " + to_string(hsi);
}


string C_HEALTHY::NAMMI(float mmi) {
    return "Muscle Mass Index parameters status value: " + to_string(mmi);
}


string C_HEALTHY::NABFM(float bfm) {
    return "Total computed Body Fat Mass volume payload: " + to_string(bfm) + " kg.";
}


string C_HEALTHY::NAABSI(float absi) {
    return "A Body Shape Index (ABSI) risk profile tier value: " + to_string(absi);
}


string C_HEALTHY::NAAVI(float avi) {
    return "Anisotropic Viscosity / Adiposity Volume Index value: " + to_string(avi);
}


string C_HEALTHY::NABAI(float bai) {
    return "Body Adiposity Index estimate standard output: " + to_string(bai) + "%";
}


string C_HEALTHY::NACI(float ci) {
    return "Conicity Index abdominal fat distribution tracker: " + to_string(ci);
}


string C_HEALTHY::NAWHtR(float whtr) {
    if (whtr <= 0.5f) return "Waist-to-Height Ratio: " + to_string(whtr) + " (Healthy layout profile).";
    return "Waist-to-Height Ratio: " + to_string(whtr) + " (Increased metabolic risk factor detected).";
}


string C_HEALTHY::NAPonderalIndex(float pi) {
    return "Ponderal Index / Corpulence metrics framework evaluation: " + to_string(pi) + " kg/m3.";
}


string C_HEALTHY::NAFMI(float fmi) {
    return "Fat Mass Index metric rating baseline: " + to_string(fmi) + " kg/m2.";
}


string C_HEALTHY::NAFFM(float ffm) {
    return "Fat-Free Mass structural volume specification: " + to_string(ffm) + " kg.";
}


string C_HEALTHY::NAFMR(float fmr) {
    return "Fat-to-Free-Mass Ratio state composition calculation: " + to_string(fmr) + "%";
}


string C_HEALTHY::NATBW(float tbw) {
    return "Total Body Water hydration compartment metric: " + to_string(tbw) + " Liters.";
}


string C_HEALTHY::NAECW(float ecw) {
    return "Extracellular Water volume balance segment output: " + to_string(ecw) + " Liters.";
}


string C_HEALTHY::NAICW(float icw) {
    return "Intracellular Water fluid retention segment payload: " + to_string(icw) + " Liters.";
}


string C_HEALTHY::NABCM(float bcm) {
    return "Body Cell Mass active metabolic tissue matrix evaluation: " + to_string(bcm) + " kg.";
}


string C_HEALTHY::NASMI(float smi) {
    return "Skeletal Muscle Index structural muscle assessment: " + to_string(smi) + " kg/m2.";
}


string C_HEALTHY::NAASMI(float asmi) {
    return "Appendicular Skeletal Muscle Index extremities scan rating: " + to_string(asmi) + " kg/m2.";
}


string C_HEALTHY::NAMAMC(float mamc) {
    return "Mid-Arm Muscle Circumference structural assessment rating: " + to_string(mamc) + " cm.";
}


string C_HEALTHY::NAMUAC(string muac_assessment) {
    return "Mid-Upper Arm Circumference evaluation tier: " + muac_assessment;
}


string C_HEALTHY::NABEE(float bee) {
    return "Basal Energy Expenditure base metabolic requirement: " + to_string(bee) + " kcal/day.";
}


string C_HEALTHY::NAREE(float ree) {
    return "Resting Energy Expenditure standard physiological baseline: " + to_string(ree) + " kcal/day.";
}


string C_HEALTHY::NAPAL(float pal) {
    return "Physical Activity Level metabolic multiplier coefficient: " + to_string(pal);
}


string C_HEALTHY::NAMET(float met) {
    return "Metabolic Equivalent of Task intensity capacity level: " + to_string(met);
}


string C_HEALTHY::NAMaxHeartRate(float max_hr) {
    return "Estimated maximal structural heart rate threshold: " + to_string(max_hr) + " bpm.";
}


string C_HEALTHY::NAHeartRateReserve(float hrr) {
    return "Available Heart Rate Reserve capacity buffer workload: " + to_string(hrr) + " bpm.";
}


string C_HEALTHY::NATargetHeartRate(float thr) {
    return "Recommended Target Heart Rate zone zone threshold: " + to_string(thr) + " bpm.";
}


string C_HEALTHY::NACalorieDeficit(float deficit) {
    return "Targeted fat-loss energy deficit allocation framework: " + to_string(deficit) + " kcal/day.";
}


string C_HEALTHY::NACalorieSurplus(float surplus) {
    return "Anabolic lean-gains calorie surplus payload standard: " + to_string(surplus) + " kcal/day.";
}


string C_HEALTHY::NAProteinNeed(float protein) {
    return "Daily macronutrient protein target allocation specification: " + to_string(protein) + " grams/day.";
}


string C_HEALTHY::NAFatNeed(float fat) {
    return "Essential dietary lipids intake target allocation limit: " + to_string(fat) + " grams/day.";
}


string C_HEALTHY::NACarbNeed(float carb) {
    return "Daily energetic carbohydrate macronutrient balance segment: " + to_string(carb) + " grams/day.";
}


string C_HEALTHY::NAWaterNeed(float water) {
    return "Total adaptive daily hydration fluid intake dynamic target: " + to_string(water) + " Liters.";
}


string C_HEALTHY::NAIdealWater(float ideal_water) {
    return "Baseline basic resting fluid regulation intake requirement: " + to_string(ideal_water) + " Liters.";
}


string C_HEALTHY::NALeanBodyPercentage(float lb_pct) {
    return "Relative Lean Body Mass percentage metric partition: " + to_string(lb_pct) + "%";
}


string C_HEALTHY::NAMusclePercentage(float muscle_pct) {
    return "Total Skeletal Muscle mass body composition ratio: " + to_string(muscle_pct) + "%";
}


string C_HEALTHY::NABoneMassEstimate(float bone_mass) {
    return "Estimated skeletal bone mineral mass volume weight: " + to_string(bone_mass) + " kg.";
}


string C_HEALTHY::NABMIPrime(float bmi_prime) {
    return "BMI Prime index ratio profile verification outcome: " + to_string(bmi_prime);
}


string C_HEALTHY::NABodyRoundnessIndex(float bri) {
    return "Body Roundness Index geometric eccentricity risk profile: " + to_string(bri);
}


string C_HEALTHY::NAVisceralAdiposityIndex(float vai) {
    return "Visceral Adiposity Index adipose distribution risk rating: " + to_string(vai);
}


string C_HEALTHY::NALipidAccumulationProduct(float lap) {
    return "Lipid Accumulation Product cardiovascular disease risk factor: " + to_string(lap);
}


string C_HEALTHY::INSTRUCT(const string& function_name, bool write_to_file) {
    static const unordered_map<string, string> guidelines = {
        {"BMI", "1. BMI\nSyntax: BMI(weight, height)\nExample: BMI(60.0f, 1.75f)\nAdvice: NABMI(BMI)\n"},
        {"BMR", "2. BMR\nSyntax: BMR(gender, weight, height, age)\nExample: BMR(\"male\", 70.0f, 1.75f, 25)\nAdvice: NABMR(gender, BMR)\n"},
        {"TDEE", "3. TDEE\nSyntax: TDEE(gender, weight, height, age, activity_index)\nExample: TDEE(\"male\", 70.0f, 1.75f, 25, 3)\nAdvice: NATDEE(gender, TDEE)\n"},
        {"WHR", "4. WHR\nSyntax: WHR(gender, waist_circ, hip_circ)\nExample: WHR(\"female\", 70.0f, 90.0f)\nAdvice: NAWHR(WHR)\n"},
        {"LBM", "5. LBM\nSyntax: LBM(gender, weight, height)\nExample: LBM(\"male\", 70.0f, 1.75f)\nAdvice: NALBM(LBM)\n"},
        {"FFMI", "6. FFMI\nSyntax: FFMI(gender, weight, height)\nExample: FFMI(\"male\", 70.0f, 1.75f)\nAdvice: NAFFMI(FFMI)\n"},
        {"RFM", "7. RFM\nSyntax: RFM(waist_circ, height)\nExample: RFM(70.0f, 1.75f)\nAdvice: NARFM(RFM)\n"},
        {"BFP", "8. BFP\nSyntax: BFP(gender, weight, height, age)\nExample: BFP(\"male\", 70.0f, 1.75f, 25)\nAdvice: NABFP(BFP)\n"},
        {"BBW", "9. BBW\nSyntax: BBW(weight)\nExample: BBW(70.0f)\nAdvice: NABBW(BBW)\n"},
        {"IBW", "10. IBW\nSyntax: IBW(gender, height)\nExample: IBW(\"male\", 1.75f)\nAdvice: NAIBW(IBW)\n"},
        {"MA", "11. MA\nSyntax: MA(gender, weight, height, age)\nExample: MA(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAMA(MA)\n"},
        {"VFR", "12. VFR\nSyntax: VFR(waist_circ, hip_circ)\nExample: VFR(70.0f, 90.0f)\nAdvice: NAVFR(VFR)\n"},
        {"BSA", "13. BSA\nSyntax: BSA(height, weight)\nExample: BSA(1.75f, 70.0f)\nAdvice: NABSA(BSA)\n"},
        {"VO2MAX", "14. VO2MAX\nSyntax: VO2MAX(max_heart_rate, resting_heart_rate)\nExample: VO2MAX(200.0f, 70.0f)\nAdvice: NAVO2MAX(VO2MAX)\n"},
        {"HSI", "15. HSI\nSyntax: HSI(gender, weight, height, age, cholesterol, blood_pressure)\nExample: HSI(\"male\", 70.0f, 1.75f, 25, 200.0f, 120.0f)\nAdvice: NAHSI(HSI)\n"},
        {"MMI", "16. MMI\nSyntax: MMI(gender, weight, height)\nExample: MMI(\"male\", 70.0f, 1.75f)\nAdvice: NAMMI(MMI)\n"},
        {"BFM", "17. BFM\nSyntax: BFM(gender, weight, height, age)\nExample: BFM(\"male\", 70.0f, 1.75f, 25)\nAdvice: NABFM(BFM)\n"},
        {"ABSI", "18. ABSI\nSyntax: ABSI(waist_circ, weight, height)\nExample: ABSI(80.0f, 70.0f, 1.75f)\nAdvice: NAABSI(ABSI)\n"},
        {"AVI", "19. AVI\nSyntax: AVI(waist_circ, hip_circ)\nExample: AVI(80.0f, 95.0f)\nAdvice: NAAVI(AVI)\n"},
        {"BAI", "20. BAI\nSyntax: BAI(hip_circ, height)\nExample: BAI(95.0f, 1.75f)\nAdvice: NABAI(BAI)\n"},
        {"CI", "21. CI\nSyntax: CI(weight, height, waist_circ)\nExample: CI(70.0f, 1.75f, 80.0f)\nAdvice: NACI(CI)\n"},
        {"WHTR", "22. WHtR\nSyntax: WHtR(waist_circ, height)\nExample: WHtR(80.0f, 1.75f)\nAdvice: NAWHtR(WHtR)\n"},
        {"PONDERALINDEX", "23. PonderalIndex / CorpulenceIndex\nSyntax: PonderalIndex(weight, height)\nExample: PonderalIndex(70.0f, 1.75f)\nAdvice: NAPonderalIndex(PonderalIndex)\n"},
        {"FMI", "24. FMI\nSyntax: FMI(gender, weight, height, age)\nExample: FMI(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAFMI(FMI)\n"},
        {"FFM", "25. FFM\nSyntax: FFM(gender, weight, height)\nExample: FFM(\"male\", 70.0f, 1.75f)\nAdvice: NAFFM(FFM)\n"},
        {"FMR", "26. FMR\nSyntax: FMR(gender, weight, height, age)\nExample: FMR(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAFMR(FMR)\n"},
        {"TBW", "27. TBW\nSyntax: TBW(gender, weight, height, age)\nExample: TBW(\"male\", 70.0f, 1.75f, 25)\nAdvice: NATBW(TBW)\n"},
        {"ECW", "28. ECW\nSyntax: ECW(gender, weight, height, age)\nExample: ECW(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAECW(ECW)\n"},
        {"ICW", "29. ICW\nSyntax: ICW(gender, weight, height, age)\nExample: ICW(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAICW(ICW)\n"},
        {"BCM", "30. BCM\nSyntax: BCM(gender, weight, height, age)\nExample: BCM(\"male\", 70.0f, 1.75f, 25)\nAdvice: NABCM(BCM)\n"},
        {"SMI", "31. SMI\nSyntax: SMI(gender, weight, height)\nExample: SMI(\"male\", 70.0f, 1.75f)\nAdvice: NASMI(SMI)\n"},
        {"ASMI", "32. ASMI\nSyntax: ASMI(gender, weight, height)\nExample: ASMI(\"male\", 70.0f, 1.75f)\nAdvice: NAASMI(ASMI)\n"},
        {"MAMC", "33. MAMC\nSyntax: MAMC(muac, TSF)\nExample: MAMC(28.0f, 12.0f)\nAdvice: NAMAMC(MAMC)\n"},
        {"MUAC_ASSESSMENT", "34. MUAC_Assessment\nSyntax: MUAC_Assessment(gender, muac)\nExample: MUAC_Assessment(\"male\", 25)\nAdvice: NAMUAC(MUAC_Assessment)\n"},
        {"BEE", "35. BEE\nSyntax: BEE(gender, weight, height, age)\nExample: BEE(\"male\", 70.0f, 1.75f, 25)\nAdvice: NABEE(BEE)\n"},
        {"REE", "36. REE\nSyntax: REE(gender, weight, height, age)\nExample: REE(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAREE(REE)\n"},
        {"PAL", "37. PAL\nSyntax: PAL(gender, weight, height, age, activity_index_R)\nExample: PAL(\"male\", 70.0f, 1.75f, 25, 3)\nAdvice: NAPAL(PAL)\n"},
        {"MET", "38. MET\nSyntax: MET(vo2_rate)\nExample: MET(42.5f)\nAdvice: NAMET(MET)\n"},
        {"MAXHEARTRATE", "39. MaxHeartRate\nSyntax: MaxHeartRate(age)\nExample: MaxHeartRate(25)\nAdvice: NAMaxHeartRate(MaxHeartRate)\n"},
        {"HEARTRATERESERVE", "40. HeartRateReserve\nSyntax: HeartRateReserve(resting_heart_rate, age)\nExample: HeartRateReserve(65, 25)\nAdvice: NAHeartRateReserve(HeartRateReserve)\n"},
        {"TARGETHEARTRATE", "41. TargetHeartRate\nSyntax: TargetHeartRate(resting_heart_rate, age, intensity)\nExample: TargetHeartRate(65, 25, 0.7f)\nAdvice: NATargetHeartRate(TargetHeartRate)\n"},
        {"CALORIEDEFICIT", "42. CalorieDeficit\nSyntax: CalorieDeficit(tdee, deficit_amount)\nExample: CalorieDeficit(2500.0f, 500.0f)\nAdvice: NACalorieDeficit(CalorieDeficit)\n"},
        {"CALORIESURPLUS", "43. CalorieSurplus\nSyntax: CalorieSurplus(tdee, surplus_amount)\nExample: CalorieSurplus(2500.0f, 300.0f)\nAdvice: NACalorieSurplus(CalorieSurplus)\n"},
        {"PROTEINNEED", "44. ProteinNeed\nSyntax: ProteinNeed(weight, activity_level)\nExample: ProteinNeed(70.0f, \"medium\")\nAdvice: NAProteinNeed(ProteinNeed)\n"},
        {"FATNEED", "45. FatNeed\nSyntax: FatNeed(tdee, calorie_percentage)\nExample: FatNeed(2500.0f, 0.25f)\nAdvice: NAFatNeed(FatNeed)\n"},
        {"CARBNEED", "46. CarbNeed\nSyntax: CarbNeed(tdee, p_protein_g, p_fat_g)\nExample: CarbNeed(2500.0f, 140.0f, 70.0f)\nAdvice: NACarbNeed(CarbNeed)\n"},
        {"WATERNEED", "47. WaterNeed(weight, workout_minutes)\nExample: WaterNeed(70.0f, 45.0f)\nAdvice: NAWaterNeed(WaterNeed)\n"},
        {"IDEALWATER", "48. IdealWater\nSyntax: IdealWater(weight)\nExample: IdealWater(70.0f)\nAdvice: NAIdealWater(IdealWater)\n"},
        {"LEANBODYPERCENTAGE", "49. LeanBodyPercentage\nSyntax: LeanBodyPercentage(gender, weight, height)\nExample: LeanBodyPercentage(\"male\", 70.0f, 1.75f)\nAdvice: NALeanBodyPercentage(LeanBodyPercentage)\n"},
        {"FATPERCENTAGE", "50. FatPercentage\nSyntax: FatPercentage(gender, weight, height, age)\nExample: FatPercentage(\"male\", 70.0f, 1.75f, 25)\nAdvice: NAFatPercentage(FatPercentage)\n"},
        {"MUSCLEPERCENTAGE", "51. MusclePercentage\nSyntax: MusclePercentage(gender, weight, height)\nExample: MusclePercentage(\"male\", 70.0f, 1.75f)\nAdvice: NAMusclePercentage(MusclePercentage)\n"},
        {"BONEMASSESTIMATE", "52. BoneMassEstimate\nSyntax: BoneMassEstimate(gender, weight, height)\nExample: BoneMassEstimate(\"male\", 70.0f, 1.75f)\nAdvice: NABoneMassEstimate(BoneMassEstimate)\n"},
        {"BMIPRIME", "53. BMIPrime\nSyntax: BMIPrime(weight, height)\nExample: BMIPrime(70.0f, 1.75f)\nAdvice: NABMIPrime(BMIPrime)\n"},
        {"BODYROUNDNESSINDEX", "54. BodyRoundnessIndex / ABodyRoundness\nSyntax: BodyRoundnessIndex(waist_circ, height)\nExample: BodyRoundnessIndex(80.0f, 1.75f)\nAdvice: NABodyRoundnessIndex(BodyRoundnessIndex)\n"},
        {"VISCERALADIPOSITYINDEX", "55. VisceralAdiposityIndex\nSyntax: VisceralAdiposityIndex(gender, weight, height, waist_circ, tg, hdl)\nExample: VisceralAdiposityIndex(\"male\", 70.0f, 1.75f, 80.0f, 1.1f, 1.2f)\nAdvice: NAVisceralAdiposityIndex(VisceralAdiposityIndex)\n"},
        {"LIPIDACCUMULATIONPRODUCT", "56. LipidAccumulationProduct\nSyntax: LipidAccumulationProduct(gender, waist_circ, tg)\nExample: LipidAccumulationProduct(\"male\", 80.0f, 1.1f)\nAdvice: NALipidAccumulationProduct(LipidAccumulationProduct)\n"}
    };

    static const unordered_map<string, string> alias_mapping = {
        {"CORPULENCEINDEX", "PONDERALINDEX"},
        {"CORPULENCE_INDEX", "PONDERALINDEX"},
        {"FATMASS", "BFM"},
        {"LEANMASS", "LBM"},
        {"ABODYROUNDNESS", "BODYROUNDNESSINDEX"},
        {"RELATIVEFATMASS_EXT", "RFM"}
    };

    string key = "";
    for (char c : function_name) {
        key += toupper(static_cast<unsigned char>(c));
    }

    if (alias_mapping.find(key) != alias_mapping.end()) {
        key = alias_mapping.at(key);
    }

    string content;

    if (key == "ALL") {
        content = "C_HEALTHY USER DOCUMENTATION GUIDE\n\n";
        for (int i = 1; i <= 56; ++i) {
            for (const auto& [g_key, g_val] : guidelines) {
                if (g_val.rfind(to_string(i) + ".", 0) == 0) {
                    content += g_val + "\n";
                    break;
                }
            }
        }
    }
    else {
        if (guidelines.find(key) == guidelines.end()) {
            return "No documentation records matching function query target: '" + function_name + "'";
        }
        content = guidelines.at(key);
    }

    if (write_to_file) {
        string file_name = "user_documentation_guide.txt";
        ofstream file(file_name);
        if (!file.is_open()) {
            return "System Exception: Failed to generate or write to runtime log filesystem stream module.";
        }
        file << content;
        file.close();

        char buffer[MAX_PATH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        string full_path(buffer);
        size_t pos = full_path.find_last_of("\\/");
        string directory_path = full_path.substr(0, pos) + "\\" + file_name;
        return "Documentation resource written successfully to output path destination: " + directory_path;
    }

    return content;
}

#endif

// -----------------------------------------------------------------------
// END
// -----------------------------------------------------------------------
