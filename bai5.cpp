#include <iostream>
#include <string>
#include <cmath>   // Thư viện để tính toán căn bậc 2 thông qua sử dung hàm sqrt()
int main(){
    /* Bài 1: In Hình Vuông Ký Tự
           Mô tả: Viết một chương trình sử dụng vòng lặp for để in một hình vuông với kích thước 5x5, sử dụng ký tự #. */
        for (int a= 1; a<= 5  ; a++){
            for (int b= 1; b<= 10; b++){
                std::cout<<"#";                 
            }
            std::cout<<std::endl;
        }

    /* Bài 2: In Các Số Từ 20 Đến 1
       Mô tả: Viết một chương trình sử dụng vòng lặp for để in ra các số từ 20 đến 1 theo thứ tự giảm dần. */
        std::cout << "giam dan: ";
        for (int c = 20; c >= 1; c=c-1){
            std::cout <<" "<< c ;
            }std::cout << std::endl;
            std::cout <<"End"<<std::endl;

    /* Bài 3: Viết một chương trình sử dụng vòng lặp for để in ra 10 số Fibonacci đầu tiên. 
       Gợi ý: Sử dụng hai biến để lưu các số Fibonacci trước đó và cập nhật chúng trong vòng lặp. 
             Dãy số FIBONACCI có dạng 0 1 1 2 3 5 8 13 ....*/
        int d= 0;
        int e= 1;
        std::cout<<d<<std::endl;
        for (int i= 1; i<= 10 ; i++)
        {   
            int f=d+e;  // f là kết quả 
            d=e;        // cập nhập lại biến d khi đã thực hiện xong phép tính f
            e=f;        // cập nhập lại biến e theo f khi đã thực hiện xong phép tính
            std::cout<<d<<std::endl;
        }

    /* Bài 4: Viết một chương trình sử dụng vòng lặp for để in ra tất cả các số chính phương từ 1 đến 100. */
        for (int g= 1; g<= 10; g++)
        {
            int h= g*g;
            std::cout<<"so chinh phuong: "<<h<<std::endl;
        }
    /* Bài 5: Tính Giai Thừa
       Mô tả: Viết một chương trình sử dụng vòng lặp while để tính giai thừa của một số nguyên dương nhập từ bàn phím.
       Gợi ý: Sử dụng vòng lặp while để nhân các số từ 1 đến số đó và tính giai thừa */
        int h;
        std::cout<<"nhap so: ";
        std::cin>>h;
        int i=1;
        int k= 1;
        while (i<=h)
        {
            k=k*i;
            i++;    
        }
        std::cout << "multiplication= "<<k<<std::endl;

    /* Bài 6: Đếm Số Các Chữ Số Trong Một Số
       Mô tả: Viết một chương trình sử dụng vòng lặp while để đếm số lượng chữ số trong một số nguyên dương.
       Gợi ý: Sử dụng vòng lặp while để chia số đó cho 10 và đếm số lần chia được.*/
       std::string l;  //Cách 1
       std::cout<<"nhap so: ";
       std::cin>>l;
       int m = 0;
       std::cout<<l.length()<<std::endl;
       while (m < l.length())
       {
           m++;
       }
       std::cout << "so chu so= " << m << std::endl;

       int n;  // Cách 2
       int o=0;
       std::cout<<"nhap so: ";
       std::cin>>n;
       while (n >= 1)
       {
          n=n/10;
          o++;
       }std::cout<<"so chu so la: "<<o<<std::endl;

    /* Bài 7: Tính Tổng Các Số Chẵn Nhỏ Hơn 50
       Mô tả: Viết một chương trình sử dụng vòng lặp while để tính tổng của tất cả các số chẵn nhỏ hơn 50.
       Gợi ý: Sử dụng vòng lặp while để duyệt qua các số và cộng dồn các số chẵn vào biến tổng.*/
       int p=0;
       int u=0;
       while (p<=50)
       {
        u=u+p;
        p += 2;
       }std::cout<<"sum= "<<u<<std::endl;

    /*Bài 8: Yêu Cầu Nhập Số Lớn Hơn 10
      Mô tả: Viết một chương trình sử dụng vòng lặp do-while để yêu cầu người dùng nhập vào một số lớn hơn 10 cho đến khi họ nhập đúng.
      Gợi ý: Sử dụng vòng lặp do-while để kiểm tra điều kiện và tiếp tục yêu cầu nhập nếu số nhập vào nhỏ hơn hoặc bằng 10. */
        bai8: int r;
        do{
           std::cout << "nhap so lon hon 10 (8): ";
           std::cin >> r;
           if (r<10)
           {
            std::cout<<"nhap lai so lon hon 10"<<std::endl;
           } 
        } while (r<=10);

    /* Bài 10: In Các Số Từ 1 Đến N Nhưng Bỏ Qua Các Số Chia Hết Cho 3
        Mô tả: Viết một chương trình sử dụng vòng lặp do-while để in ra các số từ 1 đến N nhưng bỏ qua các số chia hết cho 3.
        Gợi ý: Sử dụng vòng lặp do-while và điều kiện để kiểm tra số chia hết cho 3. */
        int t = 1;
        do
        {   
            if (t%3!= 0){
                std::cout << t << std::endl;
            }
            t++;
        } while (true);
        
    }