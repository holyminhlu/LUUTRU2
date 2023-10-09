
import java.util.Scanner;
public class xaydungclass {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        // Nhập thông tin sinh viên
        System.out.print("Nhap ho ten sinh vien: ");
        String hoTen = scanner.nextLine();

        System.out.print("Nhap nam sinh sinh vien: ");
        int namSinh = scanner.nextInt();

        System.out.print("Nhap tuoi sinh vien: ");
        int tuoi = scanner.nextInt();

        // Tạo đối tượng sinh viên
        SinhVien sinhVien = new SinhVien(hoTen, namSinh, tuoi);

        // Xuất thông tin sinh viên
        System.out.println("Thong tin sinh vien vua nhap:");
        System.out.println("Ho ten: " + sinhVien.getHoTen());
        System.out.println("Ngay thang nam sinh: " + sinhVien.getNgaySinh());
        System.out.println("Tuoi: " + sinhVien.getTuoi());
    }
}

class SinhVien {

    private String hoTen;
    private int namSinh;
    private int tuoi;

    public SinhVien(String hoTen, int namSinh, int tuoi) {
        this.hoTen = hoTen;
        this.namSinh = namSinh;
        this.tuoi = tuoi;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public int getNgaySinh() {
        return namSinh;
    }

    public void setNgaySinh(int ngaySinh) {
        this.namSinh = ngaySinh;
    }

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }
}
