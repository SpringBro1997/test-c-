#include <iostream>
int main(){

/* Bài 1. Thêm Phần Tử Vào Mảng
        Yêu Cầu:
           1.	Nhập giá trị và vị trí chèn.
           2.	Di chuyển các phần tử và chèn giá trị mới.
        Ví Dụ:
           • Đầu Vào:
           o Mảng: {1, 2, 3, 4, 5}
           o Giá trị cần chèn: 99
           o Vị trí: 2
           • Đầu Ra:
           o Mảng sau khi chèn: {1, 2, 99, 3, 4, 5}
    */
    int array_1[8]= {1,2,3,4,5};
    int value = 99;
    for (int i = 4; i >= 2; i--){
        array_1[i+1]= array_1[i];
        if (i == 2)
        {
            array_1[i]=value;
            break;
        }
        }
    for (int i = 0; i < 6; i++)
    {
        std::cout<<array_1[i]<<" ";
    }
    std::cout<<std::endl;

/* bài 2:
        1.	Nhập chỉ số và giá trị mới. 
        2.	Sửa giá trị tại chỉ số đó.
         Ví Dụ:
          •	Đầu Vào:
          o	Mảng: {10, 20, 30, 40, 50}
          o	Chỉ số: 2
          o	Giá trị mới: 99
          •	Đầu Ra:
          o	Mảng sau khi sửa: {10, 20, 99, 40, 50}
    */
    int array_2[7]= {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            array_2[i]= value;
        }
        std::cout<<array_2[i]<<" ";
    }std::cout<<std::endl;

/* bài 3. Xóa Phần Tử Trong Mảng
        Yêu Cầu:
            1.	Nhập chỉ số của phần tử cần xóa.
            2.	Di chuyển các phần tử sau chỉ số xóa để lấp đầy chỗ trống.
        Ví Dụ:
            •	Đầu Vào:
            o	Mảng: {1, 2, 3, 4, 5}
            o	Chỉ số cần xóa: 2
            •	Đầu Ra:
            o	Mảng sau khi xóa: {1, 2, 4, 5}
    */
   int array_3[]= {1,2,3,4,5};
   for (int i = 0; i < 6; i++)
   {
       if (i == 2)
       {
          array_3[i]=array_3[i+4];
          break; 
       }
    }
    for (int i = 2; i <= 4; i++)
    {
        array_3[i]=array_3[i+1];
    }
    for (int i = 0; i < 4; i++)
    {
        std::cout<<array_3[i]<<" ";
    }std::cout<<std::endl;

/* 4. Tìm Giá Trị Lớn Nhất và Nhỏ Nhất Trong Mảng
        Yêu Cầu:
            1.	Tìm giá trị lớn nhất và nhỏ nhất trong mảng.
            Ví Dụ:
               • Đầu Vào:
               o Mảng: {5, 2, 8, 1, 9, 3}
               • Đầu Ra:
               o Giá trị nhỏ nhất: 1
               o Giá trị lớn nhất: 9
    */
   
    /* Phương pháp làm bài Tim GTLN và GTNN:
        - Gắn giá trị lớn nhất hoặc nhỏ nhát theo 1 giá trị trong mảng hoặc biến
        - So sánh giá trị đó:
            * GTLN: nếu biến so sánh lớn hơn GTLN được gán -> cập nhập lại biến GTLN theo biến lớn hơn  
            * GTNN: nếu biến so sánh nhỏ hơn GTNN được gán -> cập nhập lại biến GTNN theo biến lớn hơn  
          */ 

    int array_4[]={5, 2, 8, 1, 9, 3};
    int valueMax=array_4[0]; //gán biên gtln
    int valueMin = array_4[0]; // gán biên gtnn
    //Tạo vòng lặp đem 2 biên min max so sánh từng biến trong mảng
    for (int i = 0; i < 6; i++)
    { 
        if (array_4[i] < valueMin)
        {
         valueMin = array_4[i];   // cập nhập lại giá trị biến
        }
        if (array_4[i] > valueMax)
        {
            valueMax = array_4[i]; // cập nhập lại giá trị biến
        }
        } 
    std::cout << "Gia tri lon nhat: " << valueMax << std::endl;
    std::cout << "Gia tri be nhat: " << valueMin << std::endl;

/* Bài 5. Tính Trung Bình Cộng Của Các Phần Tử Trong Mảng
Yêu Cầu:
1.	Tính tổng và trung bình cộng của các phần tử trong mảng.
Ví Dụ:
•	Đầu Vào:
o	Mảng: {10, 20, 30, 40, 50}
•	Đầu Ra:
o	Trung bình cộng: 30.0
 */
    int array_5[]= {10, 20, 30, 40, 50};
    int sum = 0;
    int average;
    for (int i = 0; i < 5; i++)
    {
        sum= sum+array_5[i];
    }
    average= sum/(sizeof(array_5)/sizeof(array_5[4]));
    std::cout<<"trung binh: "<<average<<std::endl;

/* 6. Đảo Ngược Mảng
Yêu Cầu:
1.	Đảo ngược thứ tự của các phần tử trong mảng.
Ví Dụ:
•	Đầu Vào:
o	Mảng: {1, 2, 3, 4, 5}
•	Đầu Ra:
o	Mảng sau khi đảo ngược: {5, 4, 3, 2, 1}
 */
    /* Dạng bài đảo ngược giá trị:
        *  Gọi 1 biến để lưu giá trị ở đầu hoặc ở cuối
        * Sử dụng vòng lặp while để tăng giảm vị trí đầu và cuối lần lượt
        * Gán biến vừa gọi vào vị trí đầu hoặc cuối tương ứng
    */
    int array_6[]= {1, 2, 3, 4, 5};
    int start= 0;
    int end=4;
    while (start < end)
    {
            int temp= array_6[start];   //Gọi biến temp để gán giá trị ở vị trí đầu
            array_6[start]=array_6[end]; // Gán giá trị 2 biến cần đổi chỗ
            array_6[end]= temp;  // Gán lại giá trị của biến ở vị trí tương ứng 
            start++;
            end--;
    }
    std::cout << "mang dao nguoc: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<array_6[i]<<" ";
    }
    std::cout<<std::endl;

/* 7. Tìm Các Phần Tử Trùng Lặp Trong Mảng
Yêu Cầu:
1.	Tìm và in ra các phần tử trùng lặp trong mảng.
Ví Dụ:
•	Đầu Vào:
o	Mảng: {1, 2, 3, 4, 2, 3, 4, 5}
•	Đầu Ra:
o	Các phần tử trùng lặp: 2 3 4
 */  
    int array_7[]= {1, 2, 3, 4, 2, 3, 4, 5,2};
    int length= sizeof(array_7)/sizeof(array_7[0]);
    for (int i = 0; i < length; i++){

        //Tạo biến đếm count đếm giá trị trùng lặp
        // Biến count này tại mỗi vòng lặp của i sẽ trả lại giá trị 0
        // Mục đích nằm đếm giá trị trung lặp tại vị trí i trùng với bao nhiêu giá trị tại vòng lặp đó
        // Nằm phát hiện ra các giá trị giống nhau trùng vị trí i trong mảng tại các vị trí khác nhau
        int count= 0;                

        //Tạo vòng lặp j kiểm tra các biến trong chuỗi array_7 có bị trùng lặp giá trị theo phía lớn hơ i
        for (int j= i+1 ; j< length; j++)
        {   
            if (array_7[i]== array_7[j])
            {   
                //Tạo biến giá trị bool để kiểm tra false- true xem giá trị trùng lặp không
                bool check= false;
                
                // Tạo vòng lặp k kiểm tra i và theo phía bé hơn i
                for (int k = 0; k< i; k++)
                {   

                    // Nếu giá trị vị trí k = i thì biến bool check = true và kết thúc vòng lặp k
                    // Nếu k != i thì bool check = false không chạy if
                    if (array_7[i]== array_7[k])
                    {
                        check= true;
                        break;
                    }
                }

                // Nếu i = j xuất hiện 2 lần trong 1 vòng lặp i giá trị count = 1 lập tức vòng lặp j dừng lại nhảy vòng lặp i tiếp theo  
                if (count== 1)
                {
                    break;
                }
                // Tằng giá trị bộ đếm count khi xuất hiện thêm i = j
                count++;   

                // Giá trị được in ra khi biến check = flase khi đó !check= true nằm loại bỏ các TH đã bị trùng ở vòng lặp k 
                if (!check)
                {
                    std::cout<<"so trung lap: "<<array_7[i]<<std::endl;
                }
            }
        }
    }

/* 8. Tìm Phần Tử Xuất Hiện Nhiều Nhất
    Yêu Cầu:
           1. Tìm phần tử xuất hiện nhiều nhất và số lần xuất hiện của nó.
    Ví Dụ:
          •	Đầu Vào:
              o	Mảng: {1, 2, 2, 3, 3, 3, 4}
          •	Đầu Ra:
              o	Phần tử xuất hiện nhiều nhất: 3 với 3 lần xuất hiện */
    int array_8[]={1, 2, 2, 3, 3, 3, 4};
    int length_8= sizeof(array_8)/sizeof(array_8[0]);
    int count_max= 0;
    int max;
    for (int i= 0; i< length_8; i++)
    {   
        int count= 1;
        for (int j= i+1; j< length_8; j++)
        {
            if (array_8[i]== array_8[j])
            {
                count++;
                if (count> count_max)
                {
                    count_max = count;
                    max = array_8[i];
                }
                
            }   
        }
    }std::cout<<"phan tu xuat hien hieu nhat: "<<max<<" voi "<<count_max<<" lan xuat hien"<<std::endl;
    // Với mảng {1,2,3,3,2,4} xuất hiện 2 phần tử có cùng số lần xuất hiện thì có thể sử dụng thêm vòng lặp for i-j để so sánh count với count_max nếu= thì in tại vòng array_8[i]

/* 9. Đếm Số Lần Xuất Hiện Của Một Phần Tử Trong Mảng
    Yêu Cầu:
        1. Đếm số lần xuất hiện của một giá trị cụ thể.
    Ví Dụ:
        • Đầu Vào:
            o Mảng: {1, 2, 2, 3, 4, 2}
            o Giá trị cần đếm: 2
        • Đầu Ra:
            o Số lần xuất hiện: 3 */
    int array_9[]= {1, 2, 2, 3, 4, 2};      
    int insert;  
    std::cout<<"nhap gia tri can tim: ";
    std::cin>>insert;
    int length_9= sizeof(array_9)/sizeof(array_9[0]);
    int count_9= 0;
    for (int i= 0; i< length_9; i++)
    {   
        if (insert== array_9[i])
        {
            count_9++;
        }
    }
    std::cout<< "so lan xuat hien: " <<count_9 <<std::endl;

/* 10. Xoay Mảng Sang Phải Một Vị Trí
    Yêu Cầu:
        1. Xoay mảng sang phải một vị trí.
    Ví Dụ:
        •	Đầu Vào:
        o	Mảng: {1, 2, 3, 4, 5}
        •	Đầu Ra:
        o	Mảng sau khi xoay phải: {5, 1, 2, 3, 4} */
    int array_10[]= {1, 2, 3, 4, 5};
    int length_10 = sizeof(array_10) / sizeof(array_10[0]);
    std::cout<<"mang dao moi: ";
    for (int i= 4; i>= 0; i--)
    {   
        array_10[i+1]= array_10[i];
        if (i== 0)
        {
            array_10[0]= array_10[5];
        }
    }
    for (int i= 0; i< length_10; i++)
    {
        std::cout << array_10[i]<<" ";
    }
    std::cout<<std::endl;

/* 11. Tìm Phần Tử Lớn Thứ Hai Trong Mảng
    Yêu Cầu:
        1. Tìm phần tử lớn thứ hai trong mảng.
    Ví Dụ:
        • Đầu Vào:
        o Mảng: {10, 20, 4, 45, 99}
        • Đầu Ra:
        o Phần tử lớn thứ hai: 45
*/
    int array_11[]= {10, 20, 4, 45, 99};
    int length_11 = sizeof(array_11) / sizeof(array_11[0]);
    int max_11=0;
    int value_11= 0;
    for (int i= 0; i< length_11; i++)
    {
        if (max_11< array_11[i]){
            max_11= array_11[i];
        }
    }
    std::cout << max_11 << std::endl;
    int min_11 = max_11;
    std::cout << min_11 << std::endl;
    for (int i= 0; i< length_11; i++)
    {
        int divine_11= max_11- array_11[i];
        if (min_11>= divine_11 && divine_11!=0 )
        {
            min_11 = divine_11;
            value_11= array_11[i];
        }
    }
    std::cout<<"phan tu lon thu 2: "<<value_11<<std::endl;

/* 12. Đếm Số Phần Tử Chẵn và Lẻ Trong Mảng
    Yêu Cầu:
        1. Đếm số lượng phần tử chẵn và lẻ trong mảng.
    Ví Dụ:
        • Đầu Vào:
            o Mảng: {1, 2, 3, 4, 5, 6, 7}
        • Đầu Ra:
            o Số lượng phần tử chẵn: 3
            o Số lượng phần tử lẻ: 4
*/
    int array_12[]= {1, 2, 3, 4, 5, 6, 7};
    int length_12 = sizeof(array_12) / sizeof(array_12[0]);
    int sole_12= 0;
    int sochan_12= 0;
    for (int i= 0; i< length_12; i++)
    {
        if (array_12[i]%2== 0)
        {
            sochan_12++;
        } else
          {sole_12++; }
    }
    std::cout<<"so phán tu le: "<<sole_12<<std::endl;
    std::cout<<"so phán tu lechan: "<<sochan_12<<std::endl;

/* 13. Tìm Phần Tử Đầu Tiên Không Lặp Lại Trong Mảng
       Yêu Cầu:
            1. Tìm phần tử đầu tiên không xuất hiện nhiều hơn một lần.
        Ví Dụ:
            • Đầu Vào:
                o Mảng: {4, 5, 6, 7, 5, 6, 7, 8}
            • Đầu Ra:
                o Phần tử đầu tiên không lặp lại: 4
*/
    int array_13[]= {4, 5, 6, 7, 5, 6, 7, 8};
    int length_13 = sizeof(array_13)/ sizeof(array_13[0]);
    int value_13= 0;
    for (int i= 0; i< length_13; i++)
    {   
        bool check= false;
        for (int j= i+1; j< length_13; j++)
        {
            if (array_13[i]== array_13[j])
            {
                check= true;
                break;
            }
        }
        if (!check)
        {
            value_13= array_13[i];
            break;
        }
    }std::cout<<"phan tu dau tien khong lap lai: "<<value_13<<std::endl;

/* 14. Tính Tổng Các Phần Tử Chẵn và Lẻ
    Yêu Cầu:
        1.	Tính tổng các phần tử chẵn và tổng các phần tử lẻ.
    Ví Dụ:
        • Đầu Vào:
            o Mảng: {10, 15, 20, 25, 30, 35}
        • Đầu Ra:
            o Tổng các phần tử chẵn: 60
            o Tổng các phần tử lẻ: 75
 */
    int array_14[]= {10, 15, 20, 25, 30, 35};
    int length_14 = sizeof(array_14) / sizeof(array_14[0]);
    int tongchan= 0;
    int tongle= 0;
    for (int i= 0; i< length_14; i++)
    {
        if (array_14[i]%2== 0)
        {
           tongchan= tongchan+ array_14[i];
        }else
        {
            tongle= tongle+ array_14[i];
        }
    }
    std::cout<<"tong chan: "<<tongchan<<std::endl;
    std::cout<<"tong le: "<<tongle<<std::endl;

/* 15. Tìm Phần Tử Xếp Theo Thứ Tự Tăng Dần
    Yêu Cầu:
        1. Sắp xếp mảng theo thứ tự tăng dần.
    Ví Dụ:
        • Đầu Vào:
            o Mảng: {5, 3, 8, 1, 4}
        • Đầu Ra:
            o Mảng sau khi sắp xếp: {1, 3, 4, 5, 8}
*/
    int array_15[]= {5, 3, 8, 1, 4};
    int length_15 = sizeof(array_15) / sizeof(array_15[0]);
    for (int i= 0; i< length_15; i++)
    {
        // Gán vị trí i cho biến index
        int index= i; 
        for (int j= i+1; j< length_15; j++)
        {
            // Tìm GTNN trong mảng
            if (array_15[index]> array_15[j])
            {
                index= j; // Gán vị trí của biến nhỏ nhất cho vị trí index
            }
        }
        int temp= array_15[i]; // Gán giá trị tại vị trí i cho biến tạm temp
        array_15[i]= array_15[index]; // Gán giá trị index (GTNN) váo biến vị trí i
        array_15[index]=temp; // Gán giá trị bộ nhớ tạm temp vào vị trí index (vị trí j)
    }
    for (int i= 0; i< length_15; i++)
    {
        std::cout<<"mang moi: "<<array_15[i]<<std::endl;
    }

/* 16. Tính Tổng Phần Tử Trong Một Phạm Vi
    Yêu Cầu:
        1.	Tính tổng các phần tử trong một phạm vi chỉ định.
    Ví Dụ:
        •	Đầu Vào:
            o	Mảng: {1, 2, 3, 4, 5, 6}
            o	Chỉ số bắt đầu: 2
            o	Chỉ số kết thúc: 4
        •	Đầu Ra:
            o	Tổng các phần tử trong phạm vi: 12 (tính tổng các phần tử 3, 4, 5)
*/
    int array_16[]= {1, 2, 3, 4, 5, 6};
    int length_16= sizeof(array_16)/sizeof(array_16[0]);
    int sum_16= 0;
    for (int i= 2; i< 5; i++)
    {
        sum_16= array_16[i]+ sum_16;
    }
    std::cout<<"Tong= "<<sum_16<<std::endl;
    


/* 17. Tìm Các Phần Tử Cùng Giá Trị
    Yêu Cầu:
        1. Tìm tất cả các phần tử có cùng giá trị
        • Đầu Vào:
            o Mảng: {1, 2, 2, 3, 4, 4}
        • Đầu Ra:
            o Các phần tử có cùng giá trị: 2 4
*/
    int array_17[] = {1, 2, 2, 3, 4, 4};
    int length_17 = sizeof(array_16) / sizeof(array_16[0]);
    int sum_17 = 0;
    for (int i = 0; i< length_17; i++)
    {
        for (int j= i+1; j< length_17; j++)
        {
            if (array_17[i]== array_17[j])
            {
                std::cout<<"cac phan tu co cung gia tri: "<<array_17[i]<<std::endl;
            }
            
        }
        
    }

/* 18. Tính Tổng Các Phần Tử Từ Một Chỉ Số Đến Cuối Mảng
            Yêu Cầu : 1. Tính tổng các phần tử từ một chỉ số cụ thể đến cuối mảng.Ví Dụ :
            • Đầu Vào : o Mảng : {1, 2, 3, 4, 5, 6, 7} o Chỉ số bắt đầu : 3
            • Đầu Ra : o Tổng các phần tử từ chỉ số 3 đến cuối mảng : 22(tính tổng các phần tử 4, 5, 6, 7)  
            */
    int array_18[] = {1, 2, 3, 4, 5, 6, 7};
    int length_18 = sizeof(array_16) / sizeof(array_16[0]);
    int sum_18 = 0;
    for (int i = 3; i<= length_18; i++)
    {
        sum_18= array_18[i]+ sum_18;
    }std::cout<<"tong cac phan tu: "<<sum_18<<std::endl;
}
