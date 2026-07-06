#include "chealthy.hpp"

void banner(){
    const string banner = 
    R"(
   _____      _                _ _   _           
  / ____|    | |              | | | | |          
 | |   ______| |__   ___  __ _| | |_| |__  _   _ 
 | |  |______| '_ \ / _ \/ _` | | __| '_ \| | | |
 | |____     | | | |  __/ (_| | | |_| | | | |_| |
  \_____|    |_| |_|\___|\__,_|_|\__|_| |_|\__, |
                                            __/ |
                                           |___/ 

    )";
    cout << banner << endl;
}

struct INDEX_BODY {
public:
    float weight, height, waist, hip, max, maxHeartRate, restHeartRate, cholesterol, bloodPressure, tg, hdl, muac, tsf, vo2_rate, intensity, deficit_amount, surplus_amount;
    int age, activityLevel;
    string gender, activity_level;

    INDEX_BODY(string gender, int age, float weight, float height, float waist, float hip,
               int activityLevel, float maxHeartRate, float restHeartRate,
               float cholesterol, float bloodPressure, float tg = 1.5f, float hdl = 1.2f,
               float muac = 28.0f, float tsf = 12.0f, float vo2_rate = 14.0f,
               float intensity = 0.7f, float deficit_amount = 500.0f, float surplus_amount = 300.0f,
               string activity_level = "medium")
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
        this->tg = tg;
        this->hdl = hdl;
        this->muac = muac;
        this->tsf = tsf;
        this->vo2_rate = vo2_rate;
        this->intensity = intensity;
        this->deficit_amount = deficit_amount;
        this->surplus_amount = surplus_amount;
        this->activity_level = activity_level;
    }
};

int main(){
    banner();

    C_HEALTHY ch;

    INDEX_BODY ib(
        "male", 25, 70, 1.75, 85, 95, 3, 190, 60, 200, 120
    );

    cout << "BMI Index: " << ch.BMI(ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NABMI(ch.BMI(ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "BMR Index: " << ch.BMR(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABMR(ib.gender, ch.BMR(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "TDEE Index: " << ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel) << endl;
    cout << "-> Advice: " << ch.NATDEE(ib.gender, ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel)) << endl;
    cout << endl;

    cout << "WHR Index: " << ch.WHR(ib.gender, ib.waist, ib.hip) << endl;
    cout << "-> Advice: " << ch.NAWHR(ch.WHR(ib.gender, ib.waist, ib.hip)) << endl;
    cout << endl;

    cout << "LBM Index: " << ch.LBM(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NALBM(ch.LBM(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "FFMI Index: " << ch.FFMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAFFMI(ch.FFMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "RFM Index: " << ch.RFM(ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NARFM(ch.RFM(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "BFP Index: " << ch.BFP(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABFP(ch.BFP(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "BBW Index: " << ch.BBW(ib.weight) << endl;
    cout << "-> Advice: " << ch.NABBW(ch.BBW(ib.weight)) << endl;
    cout << endl;

    cout << "IBW Index: " << ch.IBW(ib.gender, ib.height) << endl;
    cout << "-> Advice: " << ch.NAIBW(ch.IBW(ib.gender, ib.height)) << endl;
    cout << endl;

    cout << "MA Index: " << ch.MA(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAMA(ch.MA(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "VFR Index: " << ch.VFR(ib.waist, ib.hip) << endl;
    cout << "-> Advice: " << ch.NAVFR(ch.VFR(ib.waist, ib.hip)) << endl;
    cout << endl;

    cout << "BSA Index: " << ch.BSA(ib.height, ib.weight) << endl;
    cout << "-> Advice: " << ch.NABSA(ch.BSA(ib.height, ib.weight)) << endl;
    cout << endl;

    cout << "VO2MAX Index: " << ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate) << endl;
    cout << "-> Advice: " << ch.NAVO2MAX(ch.VO2MAX(ib.maxHeartRate, ib.restHeartRate)) << endl;
    cout << endl;

    cout << "HSI Index: " << ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure) << endl;
    cout << "-> Advice: " << ch.NAHSI(ch.HSI(ib.gender, ib.weight, ib.height, ib.age, ib.cholesterol, ib.bloodPressure)) << endl;
    cout << endl;

    cout << "MMI Index: " << ch.MMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAMMI(ch.MMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "BFM Index: " << ch.BFM(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABFM(ch.BFM(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "ABSI Index: " << ch.ABSI(ib.waist, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAABSI(ch.ABSI(ib.waist, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "AVI Index: " << ch.AVI(ib.waist, ib.hip) << endl;
    cout << "-> Advice: " << ch.NAAVI(ch.AVI(ib.waist, ib.hip)) << endl;
    cout << endl;

    cout << "BAI Index: " << ch.BAI(ib.hip, ib.height) << endl;
    cout << "-> Advice: " << ch.NABAI(ch.BAI(ib.hip, ib.height)) << endl;
    cout << endl;

    cout << "CI Index: " << ch.CI(ib.weight, ib.height, ib.waist) << endl;
    cout << "-> Advice: " << ch.NACI(ch.CI(ib.weight, ib.height, ib.waist)) << endl;
    cout << endl;

    cout << "WHtR Index: " << ch.WHtR(ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NAWHtR(ch.WHtR(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "Ponderal Index: " << ch.PonderalIndex(ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAPonderalIndex(ch.PonderalIndex(ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "FMI Index: " << ch.FMI(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAFMI(ch.FMI(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "FFM Index: " << ch.FFM(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAFFM(ch.FFM(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "FMR Index: " << ch.FMR(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAFMR(ch.FMR(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "TBW Index: " << ch.TBW(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NATBW(ch.TBW(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "ECW Index: " << ch.ECW(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAECW(ch.ECW(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "ICW Index: " << ch.ICW(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAICW(ch.ICW(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "BCM Index: " << ch.BCM(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABCM(ch.BCM(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "SMI Index: " << ch.SMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NASMI(ch.SMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "ASMI Index: " << ch.ASMI(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAASMI(ch.ASMI(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "MAMC Index: " << ch.MAMC(ib.muac, ib.tsf) << endl;
    cout << "-> Advice: " << ch.NAMAMC(ch.MAMC(ib.muac, ib.tsf)) << endl;
    cout << endl;

    cout << "MUAC Assessment: " << ch.MUAC_Assessment(ib.gender, ib.muac) << endl;
    cout << "-> Advice: " << ch.NAMUAC(ch.MUAC_Assessment(ib.gender, ib.muac)) << endl;
    cout << endl;

    cout << "BEE Index: " << ch.BEE(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABEE(ch.BEE(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "REE Index: " << ch.REE(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NAREE(ch.REE(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "PAL Index: " << ch.PAL(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel) << endl;
    cout << "-> Advice: " << ch.NAPAL(ch.PAL(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel)) << endl;
    cout << endl;

    cout << "MET Index: " << ch.MET(ib.vo2_rate) << endl;
    cout << "-> Advice: " << ch.NAMET(ch.MET(ib.vo2_rate)) << endl;
    cout << endl;

    cout << "MaxHeartRate Index: " << ch.MaxHeartRate(ib.age) << endl;
    cout << "-> Advice: " << ch.NAMaxHeartRate(ch.MaxHeartRate(ib.age)) << endl;
    cout << endl;

    cout << "HeartRateReserve Index: " << ch.HeartRateReserve(ib.restHeartRate, ib.age) << endl;
    cout << "-> Advice: " << ch.NAHeartRateReserve(ch.HeartRateReserve(ib.restHeartRate, ib.age)) << endl;
    cout << endl;

    cout << "TargetHeartRate Index: " << ch.TargetHeartRate(ib.restHeartRate, ib.age, ib.intensity) << endl;
    cout << "-> Advice: " << ch.NATargetHeartRate(ch.TargetHeartRate(ib.restHeartRate, ib.age, ib.intensity)) << endl;
    cout << endl;

    cout << "CalorieDeficit Index: " << ch.CalorieDeficit(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.deficit_amount) << endl;
    cout << "-> Advice: " << ch.NACalorieDeficit(ch.CalorieDeficit(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.deficit_amount)) << endl;
    cout << endl;

    cout << "CalorieSurplus Index: " << ch.CalorieSurplus(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.surplus_amount) << endl;
    cout << "-> Advice: " << ch.NACalorieSurplus(ch.CalorieSurplus(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.surplus_amount)) << endl;
    cout << endl;

    cout << "ProteinNeed Index: " << ch.ProteinNeed(ib.weight, ib.activity_level) << endl;
    cout << "-> Advice: " << ch.NAProteinNeed(ch.ProteinNeed(ib.weight, ib.activity_level)) << endl;
    cout << endl;

    cout << "FatNeed Index: " << ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f) << endl;
    cout << "-> Advice: " << ch.NAFatNeed(ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f)) << endl;
    cout << endl;

    cout << "CarbNeed Index: " << ch.CarbNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ch.ProteinNeed(ib.weight, ib.activity_level), ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f)) << endl;
    cout << "-> Advice: " << ch.NACarbNeed(ch.CarbNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ch.ProteinNeed(ib.weight, ib.activity_level), ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f))) << endl;
    cout << endl;

    cout << "WaterNeed Index: " << ch.WaterNeed(ib.weight, 60.0f) << endl;
    cout << "-> Advice: " << ch.NAWaterNeed(ch.WaterNeed(ib.weight, 60.0f)) << endl;
    cout << endl;

    cout << "IdealWater Index: " << ch.IdealWater(ib.weight) << endl;
    cout << "-> Advice: " << ch.NAIdealWater(ch.IdealWater(ib.weight)) << endl;
    cout << endl;

    cout << "LeanBodyPercentage Index: " << ch.LeanBodyPercentage(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NALeanBodyPercentage(ch.LeanBodyPercentage(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "FatPercentage Index: " << ch.FatPercentage(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABFP(ch.FatPercentage(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "MusclePercentage Index: " << ch.MusclePercentage(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAMusclePercentage(ch.MusclePercentage(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "BoneMassEstimate Index: " << ch.BoneMassEstimate(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NABoneMassEstimate(ch.BoneMassEstimate(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "BMIPrime Index: " << ch.BMIPrime(ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NABMIPrime(ch.BMIPrime(ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "CorpulenceIndex Index: " << ch.CorpulenceIndex(ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NAPonderalIndex(ch.CorpulenceIndex(ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "RelativeFatMass_Ext Index: " << ch.RelativeFatMass_Ext(ib.gender, ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NARFM(ch.RelativeFatMass_Ext(ib.gender, ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "BodyRoundnessIndex Index: " << ch.BodyRoundnessIndex(ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NABodyRoundnessIndex(ch.BodyRoundnessIndex(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "ABodyRoundness Index: " << ch.ABodyRoundness(ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NABodyRoundnessIndex(ch.ABodyRoundness(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "ABRI Index: " << ch.ABodyRoundness(ib.waist, ib.height) << endl;
    cout << "-> Advice: " << ch.NABodyRoundnessIndex(ch.ABodyRoundness(ib.waist, ib.height)) << endl;
    cout << endl;

    cout << "VisceralAdiposityIndex Index: " << ch.VisceralAdiposityIndex(ib.gender, ib.weight, ib.height, ib.waist, ib.tg, ib.hdl) << endl;
    cout << "-> Advice: " << ch.NAVisceralAdiposityIndex(ch.VisceralAdiposityIndex(ib.gender, ib.weight, ib.height, ib.waist, ib.tg, ib.hdl)) << endl;
    cout << endl;

    cout << "LipidAccumulationProduct Index: " << ch.LipidAccumulationProduct(ib.gender, ib.waist, ib.tg) << endl;
    cout << "-> Advice: " << ch.NALipidAccumulationProduct(ch.LipidAccumulationProduct(ib.gender, ib.waist, ib.tg)) << endl;
    cout << endl;

    cout << "FatMass Index: " << ch.FatMass(ib.gender, ib.weight, ib.height, ib.age) << endl;
    cout << "-> Advice: " << ch.NABFM(ch.FatMass(ib.gender, ib.weight, ib.height, ib.age)) << endl;
    cout << endl;

    cout << "LeanMass Index: " << ch.LeanMass(ib.gender, ib.weight, ib.height) << endl;
    cout << "-> Advice: " << ch.NALBM(ch.LeanMass(ib.gender, ib.weight, ib.height)) << endl;
    cout << endl;

    cout << "Instructions for use:" << endl;
    cout << ch.INSTRUCT("all", false) << endl;

    return 0;
}
