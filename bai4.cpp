#include <iostream>
#include <iomanip>
#include <string>
int main(){
    /* Bài 1: Kiểm Tra Tuổi
Nội dung: Viết một chương trình yêu cầu người dùng nhập vào tuổi và kiểm tra xem họ có đủ tuổi để lái xe không. (Giả sử tuổi tối thiểu để lái xe là 18.)
Yêu cầu:
•	Nhập tuổi từ người dùng.
•	Sử dụng câu lệnh if để kiểm tra và in thông báo nếu người dùng đủ tuổi hoặc không đủ tuổi để lái xe.
 */
        int Age;
       std::cout<<"Insert age: ";
       std::cin>>Age;
       if (Age >= 18)
       {
        std::cout<<"Y are enough to drive"<<std::endl;
       }else {
        std::cout<<"Y are not enough to drive"<<std::endl;
       }
 
       /* Bài Tập 2: Xác Định Phân Loại Sinh Viên
   Nội dung: Viết một chương trình yêu cầu người dùng nhập điểm số của một sinh viên và xác định loại học bổng mà sinh viên đó có thể nhận. (Giả sử điểm từ 0 đến 100 và các loại học bổng được phân loại như sau:
   •	Điểm >= 90: Học bổng loại A
   •	Điểm từ 70 đến 89: Học bổng loại B
   •	Điểm dưới 70: Không có học bổng)
   Yêu cầu:
   •	Nhập điểm từ người dùng.
   •	Sử dụng câu lệnh if-else if-else để kiểm tra và in loại học bổng.
    */ 
        int Ponit;
       std::cout<<"Insert ponit: ";
       std::cin>>Ponit;
       if (Ponit>=90)
       {
           std::cout << "scholarship A"<<std::endl;
       }else if (Ponit >=70 && Ponit <= 89)
       {
           std::cout << "cholarship B"<<std::endl;
       }else{
           std::cout << "Good luck next time " << std::endl;
       } 

       /* Bài 3: Xác Định Loại Hình Chóp
   Nội dung: Viết một chương trình yêu cầu người dùng nhập chiều cao và bán kính của một hình chóp và xác định loại hình chóp dựa trên chiều cao.
   Yêu cầu:
   •	Nhập chiều cao và bán kính từ người dùng.
   •	Nếu chiều cao lớn hơn bán kính, in ra "Hình chóp cao".
   •	Nếu chiều cao bằng bán kính, in ra "Hình chóp bình thường".
   •	Nếu chiều cao nhỏ hơn bán kính, in ra "Hình chóp thấp".*/  
        int height;
        int radius;
        std::cout<<"Insert height: ";
        std::cin>>height;
        std::cout << "Insert radius: ";
        std::cin >> radius;
        if (height>radius)
        {
            std::cout << "tall pyramid"<<std::endl;
        }else if (height<radius)
        {
            std::cout<<"short pyramid"<<std::endl;
        }else{
            std::cout<<"normal pyramid"<<std::endl;
        }
         
        /* Bài 7: Tính Lương Nhân Viên
 Nội dung: Viết một chương trình yêu cầu người dùng nhập số giờ làm việc trong tuần và tính lương của nhân viên
 dựa trên số giờ làm việc. (Giả sử lương cơ bản là 200.000 VNĐ/giờ. Nếu số giờ làm việc trên 40 giờ, tính thêm 50% lương cho số giờ làm việc thêm)*/
         int working_hours;
        std::cout << "Insert working hours: ";
        std::cin >> working_hours;
        double salary_on_40h = working_hours * 200000 + (working_hours - 40) * 200000 * 0.5;
        if (working_hours < 40)
        {
            std::cout<<"Salary= "<<(working_hours*200000)<<std::endl;
        }else{
            std::cout << "Salary= " << salary_on_40h << std::endl; // in ra kết quả a e+ b
            std::cout << std::fixed << std::setprecision(0) << salary_on_40h << std::endl;// cách để in ra giá trị thực của 1 số
        } 

        /* 5. Bài Tập Tổng Hợp: Quản Lý Học Sinh
    Nội Dung:
    Viết một chương trình để quản lý điểm số và thông tin của một học sinh. Chương trình sẽ:
        1. Nhập điểm số của một học sinh cho ba môn học.
        2. Xác định điểm trung bình và phân loại học sinh dựa trên điểm trung bình, trung bình< 60, 60<= Khá< 80, 80<= Giỏi< 90, 90<= Xuất sắc<= 100.
        3. Dựa trên phân loại điểm trung bình, xác định loại học bổng và thông báo cho học sinh.
        4. Cho phép người dùng quyết định tiếp tục nhập thông tin của học sinh khác hay không bằng cách sử dụng goto.
    Yêu Cầu:
      •	Nhập điểm cho ba môn học từ người dùng.
      •	Tính điểm trung bình.
      •	Sử dụng toán tử ba ngôi để phân loại điểm trung bình: "Xuất sắc", "Giỏi", "Khá", "Trung bình", "Yếu".
      •	Sử dụng switch để xác định loại học bổng dựa trên điểm trung bình.
      •	Sử dụng goto để cho phép người dùng tiếp tục hoặc kết thúc việc nhập thông tin học sinh. */

abc:
    std::cin.ignore(10, '\n');
    std::cout<<"Thong tin hoc sinh"<<std::endl;  
    std::string full_name;
    std::cout<<"Full name: ";
    std::getline(std::cin,full_name);

    float math, chemistry, physics, average;
    std::cout << "Insert Point Math: ";
    std::cin >> math;
    std::cout << "Insert Point Chemistry: ";
    std::cin >> chemistry;
    std::cout << "Insert Point Physics: ";
    std::cin >> physics;
    
    average= (math+ chemistry+ physics)/3;
       std::cout<<"Averge: "<<average<<std::endl;
       std::string xeploai= (average >= 9) ? " excellent ": 
                    (average >= 8 )? "Good":
                    (average>= 6 )? "Rather":
                    (average>= 5)? "Medium": "Weak" ;
       std::cout<<"Rank: "<<xeploai<<std::endl;
    switch (static_cast<int>(average))
    {
    case 10:
        std::cout<<"hoc bong 100%"<<std::endl;
        break;
    case 9:
        std::cout<<"hoc bong 80%"<<std::endl;
        break;
    case 8:
        std::cout << "hoc bong 60%" << std::endl;
        break;
    case 7:
        std::cout << "hoc bong 30%" << std::endl;
        break;
    default:std::cout<<"can co gang"<<std::endl;
        break;
    }
    char tiep_tuc;
    std::cout<<"Ban co muon tiep tuc nhap thong tin(Y/N) ?"<<std::endl;
    std::cin>>tiep_tuc;
    if (tiep_tuc=='Y')
    {
        goto abc;
    } std::cout << "Ket thuc" << std::endl;
    
    return 0;
}