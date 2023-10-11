import java.util.Scanner;
public class arraySvinJava {
    public static void main(String[] args) {
        // Khai báo lớp sinh viên
        class SinhVien {
            private int id;
            private String ten;
            private double diemTB;

            public SinhVien(int id, String ten, double diemTB) {
                this.id = id;
                this.ten = ten;
                this.diemTB = diemTB;
            }

            public int getId() {
                return id;
            }

            public void setId(int id) {
                this.id = id;
            }

            public String getTen() {
                return ten;
            }

            public void setTen(String ten) {
                this.ten = ten;
            }

            public double getDiemTB() {
                return diemTB;
            }

            public void setDiemTB(double diemTB) {
                this.diemTB = diemTB;
            }
        }

        // Khai báo mảng sinh viên
        SinhVien[] dsSinhVien = new SinhVien[10];

        // Nhập thông tin sinh viên
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < dsSinhVien.length; i++) {
            System.out.println("Nhập thông tin sinh viên thứ " + (i + 1) + ":");
            System.out.print("ID: ");
            int id = sc.nextInt();
            System.out.print("Tên: ");
            String ten = sc.nextLine();
            System.out.print("Điểm trung bình: ");
            double diemTB = sc.nextDouble();

            dsSinhVien[i] = new SinhVien(id, ten, diemTB);
        }

        // Hiển thị thông tin sinh viên
        for (SinhVien sv : dsSinhVien) {
            System.out.println("ID: " + sv.getId());
            System.out.println("Tên: " + sv.getTen());
            System.out.println("Điểm trung bình: " + sv.getDiemTB());
        }
    }
}
