import java.util.Scanner;
public class daylaMain{
    public static void main(String[]args){
      Scanner inp = new Scanner(System.in);
      int soLuong;
      System.out.print("Nhap so luong sinh vien: ");
      soLuong = inp.nextInt();
      
      classNhap[] A = new classNhap[soLuong];
	    for(int i=0 ; i<soLuong ; i++){
		     A[i] = new classNhap();
	}
      for( int i=0; i<soLuong; i++){
        System.out.println("\t NHAP THONG TIN SINH VIEN "+(i+1)+": " );
inp.nextLine();
            System.out.print("Nhap ten sinh vien: ");
            String tenSv = inp.nextLine();

            System.out.print("Nhap nam sinh sinh vien: ");
            int namSinh = inp.nextInt();

            System.out.print("Nhap ma so sinh vien: ");
            int maSv = inp.nextInt();

           // System.out.print("Nhap khoa hoc cua sinh vien: ");
           // int khoaHoc = inp.nextInt();
// luu vao mang 
        A[i].classNhapInfo(tenSv,namSinh,maSv);
    }
    System.out.println("\t THONG TIN SINH VIEN VUA NHAP " );
    for( int i=0; i<soLuong; i++){
      System.out.println("Thong tin sinh vien thu:"+(i+1)+":");
      A[i].classXuatInfo();

    }
  }

}