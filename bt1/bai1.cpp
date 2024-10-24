#include <iostream>
// using namespace std; cách viết tiêu chuẩn của std::cout
/* 1.Các kiểu dữ liệu và giới hạn
     1 bytes = 8 bit (0100 0010)
     *Kiểu int: 4 byte= 32 bỉt -2^31<= int<= 2^31 -1  
       *Kiểu unsigned: Số nguyên không âm >= 0 4byte= 32bit 0<= unsigned<= 2^31-1
       *Kiểu int32_t: 32bit Kiểu dữ liệu khai báo số nguyên gán cố định giá trị cho biến -2^31<= int32_t<= 2^31-1 
       *Kiểu int8_t: 8bit -128 <= int8_t<= 127
       *Kiểu uint32_t: số âm
       *Kiểu long long = int64_t: 8 byte dùng khi giá trị biến trên 2 tỷ
    *Kiểu số thực float (lấy 6-7 số sau dấu phẩy): 4 byte từ 1.5*10^-45 <= float <= 3.14*10^38
       *Kiểu số thực với độ chính xác gấp đôi ( lấy 15 số sau dấu phẩy) double: 8 byte từ 5*10^-324 <= double <= 1.7*10^308
    *Kiểu bootlean: bool 1 byte: True or Flase 
   2. Biến sô và hằng số
   3. Phếp toán cơ bản
   4. 1 Số phép toán nâng cao
    * Phép chia lấy số dư: %
    * Phép tăng giảm: 
       *Hậu tố 
         a++ ->2
         a-- ->2
       * Tiền tố
         ++a -> 3
         --a -> 1
    */ 
int main ()
{
    std::int32_t a = 2;
    std::cout << "Hello" << a << std::endl;
    std::int32_t b=6;
    std::cout <<b<< std::endl ;
    unsigned c = 8;
    std::cout <<"value c:"<< c<<std::endl;
    bool checkvar = 1;
    std::cout<<"value checkvar: "<< checkvar<<std::endl;

    // Biến số và hằng số
    int d=9;
    const int e= 2;
    std::cout<<"value d "<< d<<" ,e "<<e<< std::endl;

    //Phép chia lấy số dư
    int remainder = d%e;
    std::cout<<"So du remainder: "<<remainder<<std::endl;

    //Nhập dữ liệu từ bàn phím
    int age;
    std::cout<<"Insert Age: ";
    std::cin>> age;
    std::cout<<"Age: "<<age<<std::endl;
    return 0;
}
