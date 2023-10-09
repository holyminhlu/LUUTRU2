import java.io.IOException;
import java.util.Date;
import java.util.Scanner;

public class classinJava {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        // Nhập thông tin sinh viên
        System.out.print("Nhập họ tên sinh viên: ");
        String hoTen = scanner.nextLine();

        System.out.print("Nhập ngày tháng năm sinh sinh viên (dd/MM/yyyy): ");
        String ngaySinh = scanner.nextLine();

        System.out.print("Nhập tuổi sinh viên: ");
        int tuoi = scanner.nextInt();

        // Tạo đối tượng sinh viên
        SinhVien sinhVien = new SinhVien(hoTen, new Date(ngaySinh), tuoi);

        // Xuất thông tin sinh viên
        System.out.println("Thông tin sinh viên:");
        System.out.println("Họ tên: " + sinhVien.getHoTen());
        System.out.println("Ngày tháng năm sinh: " + sinhVien.getNgaySinh());
        System.out.println("Tuổi: " + sinhVien.getTuoi());
    }
}

class SinhVien {

    private String hoTen;
    private Date ngaySinh;
    private int tuoi;

    public SinhVien(String hoTen, Date ngaySinh, int tuoi) {
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.tuoi = tuoi;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public Date getNgaySinh() {
        return ngaySinh;
    }

    public void setNgaySinh(Date ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }

    @Override
    public String toString() {
        return "SinhVien{" +
                "hoTen='" + hoTen + '\'' +
                ", ngaySinh=" + ngaySinh +
                ", tuoi=" + tuoi +
                '}';
    }
}
