CREATE DATABASE QL_SV
USE QL_SV
--tao bang chuong trinh dao tao
CREATE TABLE CT_DaoTao
(
	MaCTDT varchar(10) not null, 
	TenCTDT nvarchar(50)
)
--tao bang khoa hoc
CREATE TABLE KhoaHoc
(
	MaKH varchar(10) not null, 
	MaCTDT varchar(10) not null, 
	TenKH nvarchar(50)
)
--tao bang lop
CREATE TABLE Lop
(
	MaLop varchar(10) not null,
	MaKH varchar(10) not null, 
	TenLop nvarchar(20) not null
)
--tao bang mon hoc
CREATE TABLE MonHoc
(
	MaMH varchar(10) not null, 
	TenMH nvarchar(50)not null
)
--tao bang sinh vien
CREATE TABLE SinhVien
(
	MaSV varchar(10) not null, 
	HoTen nvarchar(50) not null, 
	GioiTinh nvarchar(10), 
	NgaySinh datetime, 
	NoiSinh nvarchar(30), 
	MaLop varchar(10) not null
)
--tao bang ket qua thi
CREATE TABLE KetQuaThi
(
	MaSV varchar(10) not null, 
	MaMH varchar(10) not null, 
	LanThi int not null, 
	DiemThi float
)
--XEM CAC BANG DU LIEU
SELECT *
FROM CT_DaoTao
SELECT *
FROM KhoaHoc
SELECT *
FROM Lop
SELECT *
FROM MonHoc
SELECT *
FROM SinhVien
SELECT *
FROM KetQuaThi
-- rang buoc khoa chinh
ALTER TABLE CT_DaoTao ADD CONSTRAINT PK_CTDAORAO PRIMARY KEY(MaCTDT)
ALTER TABLE KhoaHoc ADD CONSTRAINT PK_KHOAHOC PRIMARY KEY(MaKH)
ALTER TABLE Lop ADD CONSTRAINT PK_LOP PRIMARY KEY(MaLop)
ALTER TABLE MonHoc ADD CONSTRAINT PK_MONHOC PRIMARY KEY(MaMH)
ALTER TABLE SinhVien ADD CONSTRAINT PK_SinhVien PRIMARY KEY(MaSV)
ALTER TABLE KetQuaThi ADD CONSTRAINT PK_KETQUATHI PRIMARY KEY(MaSV,MaMH,LanThi)
