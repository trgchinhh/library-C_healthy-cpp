//   _____      _    _            _ _   _           
//  / ____|    | |  | |          | | | | |          
// | |   ______| |__| | ___  __ _| | |_| |__  _   _ 
// | |  |______|  __  |/ _ \/ _` | | __| '_ \| | | |  Healthy library for C++
// | |____     | |  | |  __/ (_| | | |_| | | | |_| |  Version 0.0.1
//  \_____|    |_|  |_|\___|\__,_|_|\__|_| |_|\__, |  Github: https://github.com/trgchinhh/library-C_healthy
//                                             __/ |
//                                            |___/ 
// (!) PROGRAM: BODY INDEX CALCULATOR
// (!) AUTHOR: NGUYEN TRUONG CHINH (NTC++)

/**************************************************************************\
  * Note: download the file to the project you want to include
  * The program is written based on the C-healthy python library
  * Feature: including indexing and giving advice
  * This URL lib C-heathy: https://github.com/trgchinhh/library-C_healthy
  * We will update this file soon
\**************************************************************************/


#ifndef INCLUDE_C_HEALTHY_HPP
#define INCLUDE_C_HEALTHY_HPP

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <winnls.h>
#include <unordered_map>

using namespace std;

const string file_name = "instruct.txt";

// -----------------------------------------------------------------------
// PROTPTYPE PART
// -----------------------------------------------------------------------

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

    // instruct
    string INSTRUCT(const string& ten_ham, bool ghi_file);
};


// -----------------------------------------------------------------------
// DEFINITION PART
// -----------------------------------------------------------------------


float C_HEALTHY::BMI(float weight, float height){
    if(weight <= 0 || height <= 0)
        throw runtime_error("Cân nặng và chiều cao phải là số dương !");
    float bmi = weight / pow(height, 2);
    return round(bmi * 100) / 100; 
}


float C_HEALTHY::BMR(string gender, float weight, float height, int age) {
    if(gender != "nam" && gender != "nữ")
        throw runtime_error("Giới tính phải là 'nam' hoặc 'nữ'");
    if(weight <= 0 || height <= 0 || age <= 0)
        throw runtime_error("Cân nặng, chiều cao và tuổi phải là số dương!");

    height *= 100; // chuyển m sang cm
    if(gender == "nữ")
        return round((655 + (9.6 * weight) + (1.8 * height) - (4.7 * age)) * 100) / 100;
    else
        return round((66 + (13.7 * weight) + (5 * height) - (6.8 * age)) * 100) / 100;
}


float C_HEALTHY::TDEE(string gender, float weight, float height, int age, int activityLevel) {
    float movement_coefficient;
    switch(activityLevel) {
        case 1: movement_coefficient = 1.2; break;
        case 2: movement_coefficient = 1.375; break;
        case 3: movement_coefficient = 1.55; break;
        case 4: movement_coefficient = 1.725; break;
        case 5: movement_coefficient = 1.9; break;
        default: throw runtime_error("Mức độ hoạt động phải từ 1 đến 5!");
    }
    return round(C_HEALTHY::BMR(gender, weight, height, age) * movement_coefficient * 100) / 100;
}


float C_HEALTHY::WHR(string gender, float waist, float hip) {
    if(gender != "nam" && gender != "nữ")
        throw runtime_error("Giới tính phải là 'nam' hoặc 'nữ'");
    if(waist <= 0 || hip <= 0)
        throw runtime_error("Vòng eo và vòng hông phải là số dương!");
    return round((waist / hip) * 100) / 100;
}


float C_HEALTHY::LBM(string gender, float weight, float height) {
    if(gender != "nam" && gender != "nữ")
        throw runtime_error("Giới tính phải là 'nam' hoặc 'nữ'");
    height *= 100;
    if(gender == "nam")
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
    if(gender == "nam")
        return round((1.2 * bmi + 0.23 * age - 16.2) * 100) / 100;
    else
        return round((1.2 * bmi + 0.23 * age - 5.4) * 100) / 100;
}


float C_HEALTHY::BBW(float weight) {
    return round(weight * 0.033 * 100) / 100;
}


float C_HEALTHY::IBW(string gender, float height) {
    height *= 100;
    if(gender == "nam")
        return round((50 + 2.3 * (height - 152.4)/2.54) * 100) / 100;
    else
        return round((45.5 + 2.3 * (height - 152.4)/2.54) * 100) / 100;
}


float C_HEALTHY::MA(string gender, float weight, float height, int age) {
    float bmr = C_HEALTHY::BMR(gender, weight, height, age);
    float bmrTB;
    if(gender == "nam") {
        if(age <= 30) bmrTB = 1900;
        else if(age <= 50) bmrTB = 1800;
        else if(age <= 70) bmrTB = 1700;
        else bmrTB = 1600;
    } else {
        if(age <= 30) bmrTB = 1500;
        else if(age <= 50) bmrTB = 1400;
        else if(age <= 70) bmrTB = 1300;
        else bmrTB = 1200;
    }
    float heSo = (bmr - bmrTB) / 100;
    return round((age - heSo) * 100) / 100;
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
    return round((bmi*0.4 + bfp*0.3 + bloodPressure*0.2 + cholesterol*0.1)/4 * 100) / 100;
}


float C_HEALTHY::MMI(string gender, float weight, float height) {
    return round(C_HEALTHY::FFMI(gender, weight, height) / weight * 100) / 100;
}


float C_HEALTHY::BFM(string gender, float weight, float height, int age) {
    float bfp = C_HEALTHY::BFP(gender, weight, height, age);
    return round(weight * (bfp / 100) * 100) / 100;
}


string C_HEALTHY::NABMI(float bmi) {
    if (bmi < 18.5) return "Bổ sung thêm protein và tinh bột";
    else if (bmi < 25) return "Duy trì chế độ ăn cân bằng và luyện tập đều đặn";
    else if (bmi < 30) return "Giảm tinh bột và chất béo, tăng cường luyện tập";
    else return "Cần giảm cân ngay";
}


string C_HEALTHY::NABMR(string gender, float bmr) {
    return "Đảm bảo lượng calo tiêu thụ phù hợp với BMR: " + to_string(bmr) + " kcal/ngày";
}


string C_HEALTHY::NATDEE(string gender, float tdee) {
    return "Ăn uống theo TDEE: " + to_string(tdee) + " kcal/ngày để duy trì cân nặng";
}


string C_HEALTHY::NAWHR(float whr) {
    if (whr < 0.9) return "Tỷ lệ eo/hông bình thường";
    else return "Chú ý giảm mỡ vùng bụng";
}


string C_HEALTHY::NALBM(float lbm) {
    return "Duy trì cơ bắp: " + to_string(lbm) + " kg";
}


string C_HEALTHY::NAFFMI(float ffmi) {
    return "Kiểm tra cơ bắp chuẩn: " + to_string(ffmi);
}


string C_HEALTHY::NARFM(float rfm) {
    return "Theo dõi mỡ cơ thể: " + to_string(rfm) + "%";
}


string C_HEALTHY::NABFP(float bfp) {
    return "Tỷ lệ mỡ cơ thể: " + to_string(bfp) + "%, điều chỉnh chế độ ăn uống luyện tập";
}


string C_HEALTHY::NABBW(float bbw) {
    return "Cân nặng cơ bản: " + to_string(bbw) + " kg";
}


string C_HEALTHY::NAIBW(float ibw) {
    return "Cân nặng lý tưởng: " + to_string(ibw) + " kg";
}


string C_HEALTHY::NAMA(float ma) {
    return "Mức độ trao đổi chất: " + to_string(ma);
}


string C_HEALTHY::NAVFR(float vfr) {
    return "Chỉ số mỡ nội tạng: " + to_string(vfr);
}


string C_HEALTHY::NABSA(float bsa) {
    return "Diện tích cơ thể: " + to_string(bsa) + " m2";
}


string C_HEALTHY::NAVO2MAX(float vo2max) {
    return "Khả năng hô hấp: " + to_string(vo2max) + " ml/kg/phút";
}


string C_HEALTHY::NAHSI(float hsi) {
    return "Chỉ số gan: " + to_string(hsi);
}


string C_HEALTHY::NAMMI(float mmi) {
    return "Chỉ số cơ bắp: " + to_string(mmi);
}


string C_HEALTHY::NABFM(float bfm) {
    return "Khối lượng mỡ cơ thể: " + to_string(bfm) + " kg";
}


string C_HEALTHY::INSTRUCT(const string& ten_ham="all", bool ghi_file=false) {

    static const unordered_map<string, string> huong_dan = {
        {"BMI", R"(1. BMI
Cú pháp: BMI(cân_nặng, chiều_cao)
Ví dụ: BMI(60, 1.75)
Lời khuyên: NABMI(BMI)
)"},

        {"BMR", R"(2. BMR
Cú pháp: BMR(giới_tính, cân_nặng, chiều_cao, tuổi)
Ví dụ: BMR("nam", 70, 1.75, 25)
Lời khuyên: NABMR(giới_tính, BMR)
)"},

        {"TDEE", R"(3. TDEE
Cú pháp: TDEE(giới_tính, cân_nặng, chiều_cao, tuổi, mức_vận_động)
Ví dụ: TDEE("nam", 70, 1.75, 25, 3)
Lời khuyên: NATDEE(giới_tính, TDEE)
)"},

        {"WHR", R"(4. WHR
Cú pháp: WHR(giới_tính, vòng_eo, vòng_hông)
Ví dụ: WHR("nữ", 70, 90)
Lời khuyên: NAWHR(WHR)
)"},

        {"LBM", R"(5. LBM
Cú pháp: LBM(giới_tính, cân_nặng, chiều_cao)
Ví dụ: LBM("nam", 70, 1.75)
Lời khuyên: NALBM(LBM)
)"},

        {"FFMI", R"(6. FFMI
Cú pháp: FFMI(giới_tính, cân_nặng, chiều_cao)
Ví dụ: FFMI("nam", 70, 1.75)
Lời khuyên: NAFFMI(FFMI)
)"},

        {"RFM", R"(7. RFM
Cú pháp: RFM(vòng_eo, chiều_cao)
Ví dụ: RFM(70, 1.75)
Lời khuyên: NARFM(RFM)
)"},

        {"BFP", R"(8. BFP
Cú pháp: BFP(giới_tính, cân_nặng, chiều_cao, tuổi)
Ví dụ: BFP("nam", 70, 1.75, 25)
Lời khuyên: NABFP(BFP)
)"},

        {"BBW", R"(9. BBW
Cú pháp: BBW(cân_nặng)
Ví dụ: BBW(70)
Lời khuyên: NABBW(BBW)
)"},

        {"IBW", R"(10. IBW
Cú pháp: IBW(giới_tính, chiều_cao)
Ví dụ: IBW("nam", 1.75)
Lời khuyên: NAIBW(IBW)
)"},

        {"MA", R"(11. MA
Cú pháp: MA(giới_tính, cân_nặng, chiều_cao, tuổi)
Ví dụ: MA("nam", 70, 1.75, 25)
Lời khuyên: NAMA(MA)
)"},

        {"VFR", R"(12. VFR
Cú pháp: VFR(vòng_eo, vòng_hông)
Ví dụ: VFR(70, 90)
Lời khuyên: NAVFR(VFR)
)"},

        {"BSA", R"(13. BSA
Cú pháp: BSA(chiều_cao, cân_nặng)
Ví dụ: BSA(1.75, 70)
Lời khuyên: NABSA(BSA)
)"},

        {"VO2MAX", R"(14. VO2MAX
Cú pháp: VO2MAX(nhịp_tim_tối_đa, nhịp_tim_nghỉ)
Ví dụ: VO2MAX(200, 70)
Lời khuyên: NAVO2MAX(VO2MAX)
)"},

        {"HSI", R"(15. HSI
Cú pháp: HSI(giới_tính, cân_nặng, chiều_cao, tuổi, cholesterol, huyết_áp)
Ví dụ: HSI("nam", 70, 1.75, 25, 200, 120)
Lời khuyên: NAHSI(HSI)
)"},

        {"MMI", R"(16. MMI
Cú pháp: MMI(khối_lượng_cơ_bắp, cân_nặng)
Ví dụ: MMI(30, 70)
Lời khuyên: NAMMI(MMI)
)"},

        {"BFM", R"(17. BFM
Cú pháp: BFM(giới_tính, cân_nặng, chiều_cao, tuổi)
Ví dụ: BFM("nam", 70, 1.75, 25)
Lời khuyên: NABFM(BFM)
)"}
    };

    string noi_dung;
    if (ten_ham == "all") {
        noi_dung =  "==================================================\n";
        noi_dung += "  HƯỚNG DẪN SỬ DỤNG CÁC HÀM TÍNH TOÁN C_HEALTHY\n";
        noi_dung += "==================================================\n\n";
        for (int i = 1; i <= 17; ++i) {
            for (const auto& item : huong_dan) {
                if (item.second.rfind(to_string(i) + ".", 0) == 0) {
                    noi_dung += item.second + "\n--------------------------------------------------\n";
                    break;
                }
            }
        }
    }
    else {
        auto it = huong_dan.find(ten_ham);
        if (it == huong_dan.end())
            return "Không tìm thấy hướng dẫn cho hàm '" + ten_ham + "'.";
        noi_dung = it->second;
    }
    if (!ghi_file)
        return noi_dung;
    ofstream file(file_name);
    if (!file.is_open())
        return "Không thể tạo file hướng dẫn.";
    file << noi_dung;
    file.close();
    char buffer[MAX_PATH];
    GetModuleFileNameA(NULL, buffer, MAX_PATH);
    string fullPath(buffer);
    size_t pos = fullPath.find_last_of("\\/");
    string folderPath = fullPath.substr(0, pos) + "\\" + file_name;
    return "Đã tạo file hướng dẫn tại: " + folderPath;
}

#endif

// -----------------------------------------------------------------------
// END
// -----------------------------------------------------------------------
