![C_healthy-Cpp-logo](img/logo.png)

## C_healthy C++

**C_healthy C++** là thư viện gọn nhẹ (Header-only) hỗ trợ tính toán và phân tích 17 chỉ số sức khỏe chuyên sâu như BMI, BMR, TDEE, HSI, VO2Max,... Bên cạnh các phép tính toán học hiệu năng cao, thư viện còn tích hợp sẵn hệ thống chuyên gia **NA (Nutrition Advice)** giúp tự động phân tích kết quả và xuất lời khuyên dinh dưỡng bằng tiếng Việt chuẩn UTF-8 ngay trên Console.

---

## Danh mục chỉ số tính toán hỗ trợ
| Ký Hiệu | Tên Chỉ Số | Chức Năng Phân Tích |
| :--- | :--- | :--- |
| **BMI** | Body Mass Index | Chỉ số khối cơ thể (Đánh giá gầy/béo) |
| **BMR** | Basal Metabolic Rate | Tỷ lệ trao đổi chất cơ bản (Năng lượng duy trì sự sống) |
| **TDEE** | Total Daily Energy Expenditure | Tổng lượng calo tiêu thụ trong một ngày dựa trên vận động |
| **LBM** | Lean Body Mass | Khối lượng cơ thể không tính mỡ |
| **FFMI** | Fat-Free Mass Index | Chỉ số khối lượng cơ thể không mỡ (Đánh giá lượng cơ bắp) |
| **RFM** | Relative Fat Mass | Khối lượng mỡ tương đối (Đánh giá tỷ lệ mỡ nhanh qua eo/chiều cao) |
| **BFP** | Body Fat Percentage | Tỷ lệ phần trăm mỡ cơ thể |
| **IBW** | Ideal Body Weight | Trọng lượng cơ thể lý tưởng theo chiều cao |
| **WHR** | Waist-to-Hip Ratio | Tỷ lệ eo trên mông (Đánh giá phân phối mỡ, nguy cơ tim mạch) |
| **BBW** | Blood Volume / Water | Ước lượng tổng lượng nước / thể tích máu trong cơ thể |
| **MA** | Metabolic Age | Tuổi sinh học / Tuổi chuyển hóa của cơ thể |
| **VFR** | Visceral Fat Rating | Đánh giá mức độ mỡ nội tạng (Mỡ quanh cơ quan bụng) |
| **BSA** | Body Surface Area | Diện tích bề mặt cơ thể |
| **VO2MAX**| Maximal Oxygen Uptake | Tốc độ tiêu thụ oxy tối đa (Đánh giá sức bền tim mạch) |
| **HSI** | Hepatic Steatosis Index | Chỉ số sàng lọc nguy cơ gan nhiễm mỡ |
| **MMI** | Muscle Mass Index | Chỉ số khối lượng cơ bắp thuần |
| **BFM** | Body Fat Mass | Tổng khối lượng mỡ tính bằng kilôgam |

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
├── c_healthy.hpp
└── main.cpp
```

## Cách sử dụng chi tiết

1. Hàm tính toán chỉ số (trả về số thực float/double)
2. Hàm đưa ra lời khuyên (có tiền tố NA - trả về chuỗi thông báo string)
3. Hàm hướng dẫn cách dùng (INSTRUCT)

Cách dùng hàm tính chỉ số BMI, những hàm khác tương tự
```cpp
#include <iostream>
#include "c_healthy.hpp"

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
#include "c_healthy.hpp"

using namespace std;

int main(){
    C_HEALTHY ch;

    // In toàn bộ hướng dẫn, không ghi file
    cout << ch.INSTRUCT() << endl;

    // In hướng dẫn của BMI, không ghi file
    cout << ch.INSTRUCT("BMI") << endl;

    // In hướng dẫn của BMI và ghi ra file
    cout << ch.INSTRUCT("BMI", true) << endl;

    // Ghi toàn bộ hướng dẫn ra file
    cout << ch.INSTRUCT("all", true) << endl;
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
```

---

## Tác giả
**Nguyễn Trường Chinh (NTC++)**
GitHub: [https://github.com/trgchinhh](https://github.com/trgchinhh)

---

> 📌 Dự án nhỏ được phát triển với mục đích học tập và nghiên cứu. Mọi góp ý và đóng góp đều được hoan nghênh.
