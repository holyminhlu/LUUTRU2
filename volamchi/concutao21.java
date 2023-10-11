package mangdt;
import java.util.Scanner;
public class concutao21 {
public static void main(String[] args) {
// Khai báo mảng đối tượng
mangdoituonginJava[] mangdt = new mangdoituonginJava[5];
    // Nhập dữ liệu cho từng phần tử của mảng
    Scanner scan = new Scanner(System.in);
    System.out.println("Nhập vào giá trị: ");
    for (int i = 0; i < mangdt.length; i++) {
        // Đọc tên, địa chỉ và tuổi của nhân viên
        String ten = scan.nextLine();
        String diaChi = scan.nextLine();
        int tuoi = scan.nextInt();
        // Tạo một đối tượng nhân viên mới và gán vào mảng
        mangdt[i] = new mangdoituonginJava(ten, diaChi, tuoi);
        // Xóa bộ nhớ đệm của bàn phím
        scan.nextLine();
    }
    // Xuất dữ liệu cho mảng
    System.out.println("\nThông tin nhân viên: ");
    for (mangdoituonginJava nv : mangdt) {
        System.out.println(nv.getTen() + " " + nv.getDiaChi() + " " + nv.getTuoi());
    }
}
}