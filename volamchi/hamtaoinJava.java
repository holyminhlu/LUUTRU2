        // CONSTRUCTOR
        //import java.util.Scanner;
public class hamtaoinJava {
    public static void main(String[]args){
        //Scanner input = new Scanner(System.in);
        // goi lop sinh vien dung tu khoa new
        sinhVien sinhvien1 = new sinhVien("Minh Lu", 20, 110122231, "Tra Vinh"); // ko co tham so
        sinhvien1.motaSv(); // goi phuong thuc mo ta sinh vien
        sinhVien sinhvien2 = new sinhVien("Hoc Ngu Nhu Cho");
        sinhvien2.motaSv2();
        /*default constructor là constructor mà Java tạo cho chúng ta khi chúng
         ta tạo một lớp nào đó và nó là constructor không hề có tham số
         bây giờ ví dụ mình sẽ tạo đối tượng sinh viên 3 dùng default constructor
                    sinhVien sinhvien3 = new sinhVien();
         mình sẽ dùng new và gọi default constructor thì mình sẽ không truyền vào bất kỳ tham số nào
         các bạn thấy có là không ở đây thì mình lại bị báo lỗi
         hồi nãy thì mình có thể xài được default constructor mà sao bây giờ mà lại không xài được
    Lý do mình bị báo lỗi là tại vì
         Java và chỉ cho phép mình xài default constructor khi mình không có một cái 
         constructor nào trong lớp mình hết những trường hợp của lớp sinh viên của mình
         thì mình lại có hai cái constructor Nên bây giờ nếu mình muốn có thêm một cái constructor
         mà không có một tham số nào hết thì mình phải khai báo nó 
                    public sinhVien(){
                            //
                    }
Ok và đây là tất cả những gì Các bạn cần biết về constructor*/
    }
}
/// class sinh vien
 class sinhVien{
    private String tenSV;
    private int tuoiSV;
    private int maSoSV;
    private String diaChiSV;
    private String hoclucSV;
public sinhVien(String tenSV, int tuoiSV, int maSoSV, String diachiSV){   
    // ko co kieu du lieu tra ve // default constructor
    this.tenSV = tenSV;
    this.tuoiSV = tuoiSV;
    this.maSoSV = maSoSV;
    this.diaChiSV = diachiSV;
}
public sinhVien(String hoclucSV){
    this.hoclucSV = hoclucSV;
}
     void motaSv(){
        System.out.println("Ten Sinh Vien: "+tenSV);
        System.out.println("Tuoi Sinh Vien: "+tuoiSV);
        System.out.println("Ma So Sinh Vien: "+maSoSV);
        System.out.println("Dia Chi Sinh Vien: "+diaChiSV);
     }
     void motaSv2(){
        System.out.println("Hoc Luc: "+hoclucSV);
     }
}

