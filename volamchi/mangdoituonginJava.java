package mangdt;
public class mangdoituonginJava {
// Thuộc tính của nhân viên
private String ten;
private String diaChi;
private int tuoi;
// Constructor mặc định
public mangdoituonginJava() {
}
// Constructor có tham số
public mangdoituonginJava(String ten, String diaChi, int tuoi) {
    this.ten = ten;
    this.diaChi = diaChi;
    this.tuoi = tuoi;
}
// Các phương thức getter và setter
public String getTen() {
    return ten;
}
public void setTen(String ten) {
    this.ten = ten;
}
public String getDiaChi() {
    return diaChi;
}
public void setDiaChi(String diaChi) {
    this.diaChi = diaChi;
}
public int getTuoi() {
    return tuoi;
}
public void setTuoi(int tuoi) {
    this.tuoi = tuoi;
}
}