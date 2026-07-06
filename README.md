![C_healthy-logo](img/logo.png)

## C_healthy C++

**C_healthy C++** là thư viện gọn nhẹ (Header-only) hỗ trợ tính toán và phân tích 17 chỉ số sức khỏe chuyên sâu như BMI, BMR, TDEE, HSI, VO2Max,... Bên cạnh các phép tính toán học hiệu năng cao, thư viện còn tích hợp sẵn hệ thống chuyên gia **NA (Nutrition Advice)** giúp tự động phân tích kết quả và xuất lời khuyên dinh dưỡng bằng tiếng Việt chuẩn UTF-8 ngay trên Console.

---

## Danh mục chỉ số tính toán hỗ trợ

| Ký Hiệu | Tên Chỉ Số | Chức Năng Phân Tích |
|:---:|:---|:---|
| **BMI** | Body Mass Index | Chỉ số khối cơ thể (Đánh giá gầy, bình thường, thừa cân, béo phì) |
| **BMR** | Basal Metabolic Rate | Tỷ lệ chuyển hóa cơ bản (Lượng calo cơ thể tiêu hao khi nghỉ ngơi) |
| **TDEE** | Total Daily Energy Expenditure | Tổng năng lượng tiêu hao trong một ngày |
| **LBM** | Lean Body Mass | Khối lượng cơ thể không bao gồm mỡ |
| **FFMI** | Fat-Free Mass Index | Chỉ số khối lượng cơ thể không mỡ (Đánh giá mức phát triển cơ bắp) |
| **RFM** | Relative Fat Mass | Chỉ số mỡ tương đối dựa trên chiều cao và vòng eo |
| **BFP** | Body Fat Percentage | Tỷ lệ phần trăm mỡ cơ thể |
| **IBW** | Ideal Body Weight | Cân nặng lý tưởng theo chiều cao |
| **WHR** | Waist-to-Hip Ratio | Tỷ lệ vòng eo trên vòng hông (Đánh giá nguy cơ tim mạch) |
| **BBW** | Body Water Requirement | Ước tính nhu cầu nước của cơ thể |
| **MA** | Metabolic Age | Tuổi chuyển hóa của cơ thể |
| **VFR** | Visceral Fat Rating | Đánh giá mức độ mỡ nội tạng |
| **BSA** | Body Surface Area | Diện tích bề mặt cơ thể |
| **VO2MAX** | Maximal Oxygen Uptake | Khả năng hấp thụ oxy tối đa |
| **HSI** | Hepatic Steatosis Index | Chỉ số sàng lọc nguy cơ gan nhiễm mỡ |
| **MMI** | Muscle Mass Index | Chỉ số khối lượng cơ bắp |
| **BFM** | Body Fat Mass | Khối lượng mỡ cơ thể (kg) |
| **ABSI** | A Body Shape Index | Chỉ số hình dáng cơ thể dựa trên BMI và vòng eo |
| **AVI** | Abdominal Volume Index | Chỉ số thể tích vùng bụng |
| **BAI** | Body Adiposity Index | Chỉ số mỡ cơ thể dựa trên vòng hông |
| **CI** | Conicity Index | Chỉ số hình nón (Đánh giá béo bụng) |
| **WHtR** | Waist-to-Height Ratio | Tỷ lệ vòng eo trên chiều cao |
| **PI** | Ponderal Index | Chỉ số Ponderal (Đánh giá thể trạng theo chiều cao) |
| **FMI** | Fat Mass Index | Chỉ số khối lượng mỡ |
| **FFM** | Fat-Free Mass | Khối lượng cơ thể không mỡ |
| **FMR** | Fat Mass Ratio | Tỷ lệ giữa khối lượng mỡ và khối lượng không mỡ |
| **TBW** | Total Body Water | Tổng lượng nước trong cơ thể |
| **ECW** | Extracellular Water | Lượng nước ngoài tế bào |
| **ICW** | Intracellular Water | Lượng nước trong tế bào |
| **BCM** | Body Cell Mass | Khối lượng tế bào hoạt động |
| **SMI** | Skeletal Muscle Index | Chỉ số khối cơ xương |
| **ASMI** | Appendicular Skeletal Muscle Index | Chỉ số khối cơ xương tứ chi |
| **MAMC** | Mid-Upper Arm Muscle Circumference | Chu vi cơ cánh tay giữa |
| **MUAC** | Mid-Upper Arm Circumference Assessment | Đánh giá dinh dưỡng qua chu vi cánh tay |
| **BEE** | Basal Energy Expenditure | Tiêu hao năng lượng cơ bản |
| **REE** | Resting Energy Expenditure | Tiêu hao năng lượng khi nghỉ ngơi |
| **PAL** | Physical Activity Level | Hệ số mức độ hoạt động thể chất |
| **MET** | Metabolic Equivalent of Task | Đương lượng chuyển hóa của hoạt động |
| **MHR** | Maximum Heart Rate | Nhịp tim tối đa theo độ tuổi |
| **HRR** | Heart Rate Reserve | Dự trữ nhịp tim |
| **THR** | Target Heart Rate | Nhịp tim mục tiêu khi tập luyện |
| **CalDef** | Calorie Deficit | Mức thâm hụt calo để giảm cân |
| **CalSur** | Calorie Surplus | Mức dư calo để tăng cân |
| **ProtNeed** | Protein Requirement | Nhu cầu Protein hằng ngày |
| **FatNeed** | Fat Requirement | Nhu cầu chất béo hằng ngày |
| **CarbNeed** | Carbohydrate Requirement | Nhu cầu Carbohydrate hằng ngày |
| **WaterNeed** | Water Requirement | Nhu cầu nước uống mỗi ngày |
| **IdealWater** | Ideal Water Intake | Lượng nước lý tưởng theo cân nặng |
| **LBP** | Lean Body Percentage | Tỷ lệ phần trăm khối lượng không mỡ |
| **MP** | Muscle Percentage | Tỷ lệ phần trăm cơ bắp |
| **BME** | Bone Mass Estimate | Ước tính khối lượng xương |
| **BMIP** | BMI Prime | Chỉ số BMI Prime (So sánh BMI với mức chuẩn 25) |
| **FatMass** | Fat Mass | Khối lượng mỡ cơ thể (kg) được tính từ cân nặng và tỷ lệ mỡ cơ thể |
| **LeanMass** | Lean Mass | Khối lượng nạc của cơ thể (Khối lượng cơ thể không bao gồm mỡ) |
| **GenderTest** | Gender Validation | Kiểm tra và chuẩn hóa giới tính đầu vào trước khi tính toán các chỉ số |
| **ABRI** | Advanced Body Roundness Index | Chỉ số độ tròn cơ thể mở rộng (Biến thể nâng cao của Body Roundness Index để đánh giá hình dáng cơ thể) |
| **BRI** | Body Roundness Index | Chỉ số độ tròn cơ thể |
| **VAI** | Visceral Adiposity Index | Chỉ số mỡ nội tạng chuyên sâu |
| **LAP** | Lipid Accumulation Product | Chỉ số tích lũy lipid |

---

## Cách cài đặt và nâng cấp
```bash
git clone https://github.com/trgchinhh/library-C_healthy-cpp.git
cd library-C_healthy-cpp
```
Vào folder `library-C_healthy-cpp` copy file `c_healthy.hpp` đưa vào dự án của bạn hoặc đưa vào hệ thống `Mingw64` nếu dùng lâu dài

Đặt file `c_healthy.hpp` cùng file `main.cpp`
```bash
Your-Project/
├── C_healthy.hpp
└── main.cpp
```

## Cách sử dụng chi tiết

1. Hàm tính toán chỉ số (trả về số thực float/double)
2. Hàm đưa ra lời khuyên (có tiền tố NA - trả về chuỗi thông báo string)
3. Hàm hướng dẫn cách dùng (INSTRUCT)

Cách dùng hàm tính chỉ số BMI, những hàm khác tương tự
```cpp
#include <iostream>
#include "C_healthy.hpp"

using namespace std;

int main(){
    C_HEALTHY c_healthy; // khởi tạo đối tượng c_healthy (tính)
    
    float bmi = c_healthy.BMI(55, 1.7); // truyền dữ liệu cần tính vào
    string nabmi = c_healthy.NABMI(bmi); // lời khuyên cho dữ liệu
    
    cout << "BMI: " << bmi << endl;
    cout << "Lời khuyên: " << nabmi << endl;
    return 0;
}
```

Cách dùng hàm in ra hướng dẫn sử dụng
```cpp
#include <iostream>
#include "C_healthy.hpp"

using namespace std;

int main(){
    C_HEALTHY ch;

    // In toàn bộ hướng dẫn, không ghi file
    cout << ch.INSTRUCT() << endl;

    // In hướng dẫn của BMI, không ghi file
    cout << ch.INSTRUCT("BMI", ghi_file=false) << endl;

    // In hướng dẫn của BMI và ghi ra file
    cout << ch.INSTRUCT("BMI", ghi_file=true) << endl;

    // Ghi toàn bộ hướng dẫn ra file
    cout << ch.INSTRUCT("all", ghi_file=true) << endl;
}
```

Chi tiết đầy đủ cách dùng 
```cpp
#include "chealthy.hpp"
#include <windows.h>

#define RESET "\033[0m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"


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
               string activity_level = "high")
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
    system("cls");

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

    cout << YELLOW << "Chỉ số ABSI là: " << ch.ABSI(ib.waist, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAABSI(ch.ABSI(ib.waist, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số AVI là: " << ch.AVI(ib.waist, ib.hip) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAAVI(ch.AVI(ib.waist, ib.hip)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BAI là: " << ch.BAI(ib.hip, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABAI(ch.BAI(ib.hip, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số CI là: " << ch.CI(ib.weight, ib.height, ib.waist) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NACI(ch.CI(ib.weight, ib.height, ib.waist)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số WHtR là: " << ch.WHtR(ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAWHtR(ch.WHtR(ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số Ponderal Index là: " << ch.PonderalIndex(ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAPonderalIndex(ch.PonderalIndex(ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FMI là: " << ch.FMI(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAFMI(ch.FMI(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FFM là: " << ch.FFM(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAFFM(ch.FFM(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FMR là: " << ch.FMR(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAFMR(ch.FMR(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số TBW là: " << ch.TBW(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NATBW(ch.TBW(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ECW là: " << ch.ECW(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAECW(ch.ECW(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ICW là: " << ch.ICW(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAICW(ch.ICW(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BCM là: " << ch.BCM(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABCM(ch.BCM(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số SMI là: " << ch.SMI(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NASMI(ch.SMI(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ASMI là: " << ch.ASMI(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAASMI(ch.ASMI(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MAMC là: " << ch.MAMC(ib.muac, ib.tsf) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMAMC(ch.MAMC(ib.muac, ib.tsf)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MUAC Assessment là: " << ch.MUAC_Assessment(ib.gender, ib.muac) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMUAC(ch.MUAC_Assessment(ib.gender, ib.muac)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BEE là: " << ch.BEE(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABEE(ch.BEE(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số REE là: " << ch.REE(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAREE(ch.REE(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số PAL là: " << ch.PAL(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAPAL(ch.PAL(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MET là: " << ch.MET(ib.vo2_rate) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMET(ch.MET(ib.vo2_rate)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MaxHeartRate là: " << ch.MaxHeartRate(ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMaxHeartRate(ch.MaxHeartRate(ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số HeartRateReserve là: " << ch.HeartRateReserve(ib.restHeartRate, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAHeartRateReserve(ch.HeartRateReserve(ib.restHeartRate, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số TargetHeartRate là: " << ch.TargetHeartRate(ib.restHeartRate, ib.age, ib.intensity) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NATargetHeartRate(ch.TargetHeartRate(ib.restHeartRate, ib.age, ib.intensity)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số CalorieDeficit là: " << ch.CalorieDeficit(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.deficit_amount) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NACalorieDeficit(ch.CalorieDeficit(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.deficit_amount)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số CalorieSurplus là: " << ch.CalorieSurplus(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.surplus_amount) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NACalorieSurplus(ch.CalorieSurplus(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ib.surplus_amount)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ProteinNeed là: " << ch.ProteinNeed(ib.weight, ib.activity_level) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAProteinNeed(ch.ProteinNeed(ib.weight, ib.activity_level)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FatNeed là: " << ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAFatNeed(ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số CarbNeed là: " << ch.CarbNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ch.ProteinNeed(ib.weight, ib.activity_level), ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f)) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NACarbNeed(ch.CarbNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), ch.ProteinNeed(ib.weight, ib.activity_level), ch.FatNeed(ch.TDEE(ib.gender, ib.weight, ib.height, ib.age, ib.activityLevel), 0.25f))) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số WaterNeed là: " << ch.WaterNeed(ib.weight, 60.0f) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAWaterNeed(ch.WaterNeed(ib.weight, 60.0f)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số IdealWater là: " << ch.IdealWater(ib.weight) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAIdealWater(ch.IdealWater(ib.weight)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số LeanBodyPercentage là: " << ch.LeanBodyPercentage(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NALeanBodyPercentage(ch.LeanBodyPercentage(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FatPercentage là: " << ch.FatPercentage(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABFP(ch.FatPercentage(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số MusclePercentage là: " << ch.MusclePercentage(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAMusclePercentage(ch.MusclePercentage(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BoneMassEstimate là: " << ch.BoneMassEstimate(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABoneMassEstimate(ch.BoneMassEstimate(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BMIPrime là: " << ch.BMIPrime(ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABMIPrime(ch.BMIPrime(ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số CorpulenceIndex là: " << ch.CorpulenceIndex(ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAPonderalIndex(ch.CorpulenceIndex(ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số RelativeFatMass_Ext là: " << ch.RelativeFatMass_Ext(ib.gender, ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NARFM(ch.RelativeFatMass_Ext(ib.gender, ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số BodyRoundnessIndex là: " << ch.BodyRoundnessIndex(ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABodyRoundnessIndex(ch.BodyRoundnessIndex(ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ABodyRoundness là: " << ch.ABodyRoundness(ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABodyRoundnessIndex(ch.ABodyRoundness(ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số ABRI là: " << ch.ABRI(ib.waist, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAABRI(ch.ABRI(ib.waist, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số VisceralAdiposityIndex là: " << ch.VisceralAdiposityIndex(ib.gender, ib.weight, ib.height, ib.waist, ib.tg, ib.hdl) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NAVisceralAdiposityIndex(ch.VisceralAdiposityIndex(ib.gender, ib.weight, ib.height, ib.waist, ib.tg, ib.hdl)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số LipidAccumulationProduct là: " << ch.LipidAccumulationProduct(ib.gender, ib.waist, ib.tg) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NALipidAccumulationProduct(ch.LipidAccumulationProduct(ib.gender, ib.waist, ib.tg)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số FatMass là: " << ch.FatMass(ib.gender, ib.weight, ib.height, ib.age) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NABFM(ch.FatMass(ib.gender, ib.weight, ib.height, ib.age)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Chỉ số LeanMass là: " << ch.LeanMass(ib.gender, ib.weight, ib.height) << RESET << endl;
    cout << GREEN << "-> Lời khuyên: " << ch.NALBM(ch.LeanMass(ib.gender, ib.weight, ib.height)) << RESET << endl;
    cout << endl;

    cout << YELLOW << "Hướng dẫn sử dụng:" << RESET << endl;
    cout << CYAN << ch.INSTRUCT(function_name = "all", write_to_file = false) << RESET << endl;
    cout << endl;

    return 0;
}
```
---

## Tác giả
**Nguyễn Trường Chinh (NTC++)**
GitHub: [https://github.com/trgchinhh](https://github.com/trgchinhh)

---

> 📌 Dự án nhỏ được phát triển với mục đích học tập và nghiên cứu. Mọi góp ý và đóng góp đều được hoan nghênh.
