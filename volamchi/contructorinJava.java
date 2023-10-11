import java.util.Scanner;

public class MangMotChieu {
    // Khai báo các thuộc tính của lớp
    private int[] a; // Mảng một chiều
    private int n; // Số phần tử của mảng
    private int x; // Phần tử cần tìm

    // Constructor để khởi tạo các thuộc tính
    public MangMotChieu() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập số phần tử của mảng: ");
        n = sc.nextInt();
        a = new int[n]; // Cấp phát bộ nhớ cho mảng
        System.out.println("Nhập các phần tử của mảng: ");
        for (int i = 0; i < n; i++) {
            System.out.print("a[" + i + "] = ");
            a[i] = sc.nextInt();
        }
        System.out.print("Nhập phần tử x cần tìm: ");
        x = sc.nextInt();
    }

    // Phương thức để tìm xem phần tử x có mặt trong mảng không
    public void timX() {
        boolean found = false; // Biến cờ để đánh dấu x có mặt hay không
        for (int i = 0; i < n; i++) {
            if (a[i] == x) { // Nếu phần tử thứ i bằng x
                found = true; // Đặt biến cờ là true
                break; // Thoát khỏi vòng lặp
            }
        }
        if (found) { // Nếu biến cờ là true
            System.out.println("Phần tử " + x + " có mặt trong mảng.");
        } else { // Nếu biến cờ là false
            System.out.println("Phần tử " + x + " không có mặt trong mảng.");
        }
    }

    // Phương thức để tìm phần tử nhỏ nhất và lớn nhất của mảng
    public void timMinMax() {
        int min = a[0]; // Giả sử phần tử nhỏ nhất là a[0]
        int max = a[0]; // Giả sử phần tử lớn nhất là a[0]
        for (int i = 1; i < n; i++) {
            if (a[i] < min) { // Nếu phần tử thứ i nhỏ hơn min
                min = a[i]; // Cập nhật min bằng a[i]
            }
            if (a[i] > max) { // Nếu phần tử thứ i lớn hơn max
                max = a[i]; // Cập nhật max bằng a[i]
            }
        }
        System.out.println("Phần tử nhỏ nhất của mảng là: " + min);
        System.out.println("Phần tử lớn nhất của mảng là: " + max);
    }

    // Phương thức để kiểm tra trong mảng có số dương hay không
    public void kiemTraSoDuong() {
        boolean coSoDuong = false; // Biến cờ để đánh dấu có số dương hay không
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) { // Nếu phần tử thứ i dương
                coSoDuong = true; // Đặt biến cờ là true
                break; // Thoát khỏi vòng lặp
            }
        }
        if (coSoDuong) { // Nếu biến cờ là true
            System.out.println("Trong mảng có số dương.");
        } else { // Nếu biến cờ là false
            System.out.println("Trong mảng không có số dương.");
        }
    }

    // Phương thức để tính tổng các phần tử dương trong mảng
    public void tinhTongSoDuong() {
        int tong = 0; // Biến để lưu trữ tổng
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) { // Nếu phần tử thứ i dương
                tong += a[i]; // Cộng vào tổng
            }
        }
        System.out.println("Tổng các phần tử dương trong mảng là: " + tong);
    }

    // Phương thức để tính tổng các phần tử là số chẵn trong mảng
    public void tinhTongSoChan() {
        int tong = 0; // Biến để lưu trữ tổng
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) { // Nếu phần tử thứ i chia hết cho 2
                tong += a[i]; // Cộng vào tổng
            }
        }
        System.out.println("Tổng các phần tử chẵn trong mảng là: " + tong);
    }

    // Phương thức chính để chạy chương trình
    public static void main(String[] args) {
        MangMotChieu mang = new MangMotChieu(); // Tạo đối tượng mang từ lớp MangMotChieu
        mang.timX(); // Gọi phương thức timX()
        mang.timMinMax(); // Gọi phương thức timMinMax()
        mang.kiemTraSoDuong(); // Gọi phương thức kiemTraSoDuong()
        mang.tinhTongSoDuong(); // Gọi phương thức tinhTongSoDuong()
        mang.tinhTongSoChan(); // Gọi phương thức tinhTongSoChan()
    }
}
