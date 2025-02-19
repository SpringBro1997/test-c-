#include <iostream>
#include <ctime> // thêm thư viện để làm việc với thời gian
int main()
{
    /* Bài 1: Viết một chương trình C++ để nhập một ký tự từ người dùng và in ra mã ASCII của ký tự đó.*/
    char a;
       std::cout<<"Nhap 1 ky tu: ";
       std::cin>>a;
    int b= static_cast<int>(a);
       std::cout<<"Ma ASCII: "<<b<<std::endl; 
    
    std::cin.ignore(10, '\n');//Xoá giá trị trong bộ nhớ đệm, làm cho chạy câu lệnh bài 2 không bị lỗi

    /* Bài 2: Viết một chương trình C++ để nhập hai chuỗi từ người dùng và kiểm tra xem chúng có bằng nhau không. */
    std::string c;
        std::cout<<"Nhap chuoi c: ";
        std::getline(std::cin,c);
       
    std::string d;
        std::cout << "Nhap chuoi d: ";
        std::getline(std::cin, d);
 
        if (c == d)
        {
            std::cout << "2 chuoi bang nhau" << std::endl;
    }else
         {std::cout<<"2 chuoi khong bang nhau"<<std::endl;}

         /* Bài 3: Viết một chương trình C++ để nhập hai số nguyên từ người dùng và so sánh chúng bằng các toán tử so sánh (==, !=, <, >). */
    int e;
    int f;
    std::cout << "Nhap so nguyen e: ";
    std::cin >> e;
    std::cout << "Nhap so nguyen f: ";
    std::cin >> f;
    if (e==f)
    {
        std::cout << "2 so bang nhau"<<std::endl;
    }else if (e != f)
    {
        std::cout << "2 so khong bang nhau" << std::endl;
    }
    else if (e > f)
    {
        std::cout << "2 so khong bang nhau" << std::endl;
    }
    else if (e < f)
    {
        std::cout << "2 so khong bang nhau" << std::endl;
    }else{
        std::cout<<"Nhap lai 2 so nguyen"<<std::endl;
    }

    /* Bài 4: Viết một chương trình C++ để chuyển đổi một số thực (float) thành số nguyên (int) bằng cách sử dụng cả C-style cast và static_cast, sau đó in kết quả của cả hai phương pháp. */
    float z;
    std::cout<<"Nhap so thuc f: ";
    std::cin>>z;
    int y= int (z);
    std::cout<<"so nguyen y: "<<y<<std::endl;
    int x = static_cast<int>(z);
    std::cout<<"so nguyen x: "<<x<<std::endl;

    /* Bài 5: Tính Phần Tử của Một Số
              Mô tả: Viết một chương trình C++ để nhập một số nguyên và in ra phần tử (remainder) khi số đó chia cho 5.*/
    ahiahi:int q;
    std::cout<<"Nhap so nguyen q: ";
    std::cin>>q;
    int remainder = q%5;
    switch (remainder)
    {
    case 0:
        std::cout<<"q chia het cho 5"<<std::endl;
        break;
    default:
        std::cout<<"q khong chia het cho 5"<<std::endl;     
        goto ahiahi; // sử dụng để chạy lại đọan code nhập q khi q không chia hết cho 5 
        break;  
    }

    /* Bài 6: Tính Năm Sinh Từ Tuổi
              Mô tả: Viết một chương trình C++ để nhập tuổi của một người và tính năm sinh của họ dựa trên năm hiện tại. */
        int age;
        std::cout<<"Insert Age: ";
        std::cin>>age;
        // Lấy thời gian hiện tại
        time_t t = time(0);      // Lấy thời gian hiện tại
        tm *now = localtime(&t); // Chuyển đổi thành cấu trúc tm
        // Lấy năm hiện tại
        int currentYear = now->tm_year + 1900; // tm_year bắt đầu từ 1900
        int birth_year= currentYear- age;
        std::cout<<"Birthday: "<<birth_year<<std::endl;

        return 0;
}