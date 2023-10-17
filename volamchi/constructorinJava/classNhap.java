// khai bao thuoc tinh cua doi tuong
public class classNhap{
    private String tenSv;
    private int namSinh;
    private int maSv;
    //private int khoaHoc;
////constructor default
 public void classNhapInfo(){}
/* Đoạn mã public void classNhapInfo(String tenSv, int namSinh, int maSv){ 
   this.tenSv = tenSv;
   this.namSinh = namSinh; 
   this.maSv = maSv; 
  }
là một phương thức trong lớp daylaMain của bạn.
Phương thức này có tên là classNhapInfo(),
nó nhận ba tham số là tên sinh viên (tenSv), năm sinh (namSinh) và mã số sinh viên (maSv).
Phương thức này có tác dụng gán giá trị cho các thuộc tính tenSv, namSinh và maSv của đối tượng hiện tại. */
/* Từ khóa this trong đoạn mã trên được sử dụng để tham chiếu đến đối tượng hiện tại.
Khi bạn gọi phương thức classNhapInfo(),
nó sẽ được gọi trên một đối tượng của lớp daylaMain.
 Từ khóa this được sử dụng để gán giá trị cho các thuộc tính của đối tượng hiện tại. */
 // phương thức nhap
 public void classNhapInfo(String tenSv, int namSinh, int maSv){
   this.tenSv = tenSv;
   this.namSinh = namSinh;
   this.maSv = maSv;
   //this.khoaHoc = khoaHoc;
 }
 public void classXuatInfo(){
    System.out.println("\t Ten sinh vien: "+tenSv);
    System.out.println("\t Nam sinh sinh vien: "+namSinh);
    System.out.println("\t Ma so sinh vien: "+maSv);
    //System.out.println("\t Sinh vien nam: "+khoaHoc);
 }
}
